#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LINE_LENGTH 256
#define MAX_SENSOR_ID 32
#define MAX_VALUE_LENGTH 64
#define MAX_READINGS 100000

// Estrutura para armazenar uma leitura
typedef struct {
    long timestamp;
    char sensor_id[MAX_SENSOR_ID];
    char value[MAX_VALUE_LENGTH];
} Reading;

// Estrutura para armazenar dados de um sensor específico
typedef struct {
    char sensor_id[MAX_SENSOR_ID];
    Reading *readings;
    int count;
    int capacity;
} SensorData;

// Lista de sensores suportados
typedef struct {
    char id[MAX_SENSOR_ID];
    char filename[MAX_SENSOR_ID + 4]; // id + ".txt"
    char description[64];
} SensorType;

// Definindo os tipos de sensores suportados
SensorType supported_sensors[] = {
    {"TEMP", "TEMP.txt", "Sensor de Temperatura"},
    {"PRES", "PRES.txt", "Sensor de Pressão"},
    {"VIBR", "VIBR.txt", "Sensor de Vibração"},
    {"UMID", "UMID.txt", "Sensor de Umidade"},
    {"VOLT", "VOLT.txt", "Sensor de Voltagem"},
    {"CORR", "CORR.txt", "Sensor de Corrente"},
    {"NIVEL", "NIVEL.txt", "Sensor de Nível"},
    {"FLOW", "FLOW.txt", "Sensor de Fluxo"}
};

#define NUM_SUPPORTED_SENSORS (sizeof(supported_sensors) / sizeof(SensorType))

// Função para validar se um timestamp Unix epoch é válido
int is_valid_unix_timestamp(long timestamp) {
    // Unix epoch começou em 1 de janeiro de 1970 00:00:00 UTC
    // Timestamp 0 = 1970-01-01 00:00:00 UTC
    
    // Verificar se não é negativo (antes de 1970)
    if (timestamp < 0) {
        return 0;
    }
    
    // Verificar limite superior razoável
    // 2147483647 = 2038-01-19 03:14:07 UTC (limite do int32)
    // 4102444800 = 2100-01-01 00:00:00 UTC (limite mais generoso)
    if (timestamp > 4102444800L) {
        return 0;
    }
    
    // Verificar se não é muito pequeno (suspeito de erro)
    // 946684800 = 2000-01-01 00:00:00 UTC
    if (timestamp < 946684800L) {
        printf("Aviso: Timestamp %ld parece muito antigo (antes de 2000)\n", timestamp);
        // Não retorna erro, apenas avisa
    }
    
    return 1;
}

// Função para converter timestamp para string legível (para debug)
void timestamp_to_string(long timestamp, char *buffer, size_t buffer_size) {
    time_t time = (time_t)timestamp;
    struct tm *tm_info = gmtime(&time);
    
    if (tm_info != NULL) {
        strftime(buffer, buffer_size, "%Y-%m-%d %H:%M:%S UTC", tm_info);
    } else {
        snprintf(buffer, buffer_size, "INVALID");
    }
}

// Função para comparar readings por timestamp (para qsort)
int compare_readings(const void *a, const void *b) {
    Reading *reading_a = (Reading *)a;
    Reading *reading_b = (Reading *)b;
    
    if (reading_a->timestamp < reading_b->timestamp) return -1;
    if (reading_a->timestamp > reading_b->timestamp) return 1;
    return 0;
}

// Função para verificar se um sensor é suportado
int is_supported_sensor(const char *sensor_id) {
    for (int i = 0; i < NUM_SUPPORTED_SENSORS; i++) {
        if (strcmp(sensor_id, supported_sensors[i].id) == 0) {
            return 1;
        }
    }
    return 0;
}

// Função para obter o nome do arquivo de um sensor
const char* get_sensor_filename(const char *sensor_id) {
    for (int i = 0; i < NUM_SUPPORTED_SENSORS; i++) {
        if (strcmp(sensor_id, supported_sensors[i].id) == 0) {
            return supported_sensors[i].filename;
        }
    }
    return NULL;
}

// Função para inicializar dados do sensor
void init_sensor_data(SensorData *sensor, const char *sensor_id) {
    strcpy(sensor->sensor_id, sensor_id);
    sensor->capacity = 1000;
    sensor->readings = malloc(sensor->capacity * sizeof(Reading));
    sensor->count = 0;
}

// Função para adicionar leitura aos dados do sensor
void add_reading(SensorData *sensor, long timestamp, const char *value) {
    // Redimensionar array se necessário
    if (sensor->count >= sensor->capacity) {
        sensor->capacity *= 2;
        sensor->readings = realloc(sensor->readings, sensor->capacity * sizeof(Reading));
        if (sensor->readings == NULL) {
            fprintf(stderr, "Erro: Falha na alocação de memória\n");
            exit(1);
        }
    }
    
    // Adicionar nova leitura
    sensor->readings[sensor->count].timestamp = timestamp;
    strcpy(sensor->readings[sensor->count].sensor_id, sensor->sensor_id);
    strcpy(sensor->readings[sensor->count].value, value);
    sensor->count++;
}

// Função para encontrar sensor na lista ou criar novo
SensorData* find_or_create_sensor(SensorData **sensors, int *num_sensors, const char *sensor_id) {
    // Procurar sensor existente
    for (int i = 0; i < *num_sensors; i++) {
        if (strcmp(sensors[i]->sensor_id, sensor_id) == 0) {
            return sensors[i];
        }
    }
    
    // Criar novo sensor
    sensors[*num_sensors] = malloc(sizeof(SensorData));
    init_sensor_data(sensors[*num_sensors], sensor_id);
    (*num_sensors)++;
    
    return sensors[*num_sensors - 1];
}

// Função para salvar dados do sensor em arquivo
void save_sensor_data(SensorData *sensor) {
    const char *filename = get_sensor_filename(sensor->sensor_id);
    if (filename == NULL) {
        printf("Aviso: Sensor %s não reconhecido, pulando...\n", sensor->sensor_id);
        return;
    }
    
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Erro: Não foi possível criar arquivo %s\n", filename);
        return;
    }
    
    // Ordenar readings por timestamp
    qsort(sensor->readings, sensor->count, sizeof(Reading), compare_readings);
    
    // Escrever dados ordenados no arquivo
    for (int i = 0; i < sensor->count; i++) {
        fprintf(file, "%ld %s %s\n", 
                sensor->readings[i].timestamp,
                sensor->readings[i].sensor_id,
                sensor->readings[i].value);
    }
    
    fclose(file);
    printf("Sensor %s: %d leituras salvas em %s\n", sensor->sensor_id, sensor->count, filename);
}

// Função para liberar memória dos sensores
void free_sensors(SensorData **sensors, int num_sensors) {
    for (int i = 0; i < num_sensors; i++) {
        free(sensors[i]->readings);
        free(sensors[i]);
    }
}

// Função para exibir informações sobre sensores suportados
void print_supported_sensors() {
    printf("Sensores suportados:\n");
    for (int i = 0; i < NUM_SUPPORTED_SENSORS; i++) {
        printf("  %s - %s\n", supported_sensors[i].id, supported_sensors[i].description);
    }
    printf("\n");
}

// Função principal
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo_entrada>\n\n", argv[0]);
        print_supported_sensors();
        return 1;
    }
    
    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        fprintf(stderr, "Erro: Não foi possível abrir o arquivo %s\n", argv[1]);
        return 1;
    }
    
    printf("Processando arquivo: %s\n\n", argv[1]);
    print_supported_sensors();
    
    // Array para armazenar dados de diferentes sensores
    SensorData *sensors[NUM_SUPPORTED_SENSORS];
    int num_sensors = 0;
    
    char line[MAX_LINE_LENGTH];
    int line_number = 0;
    int total_readings = 0;
    int ignored_readings = 0;
    int invalid_timestamps = 0;

    // Processar cada linha do arquivo
    while (fgets(line, sizeof(line), input_file)) {
        line_number++;
        
        // Remover quebra de linha e caracteres de retorno de carro
        line[strcspn(line, "\r\n")] = 0;
        
        // Remover BOM UTF-8 se presente na primeira linha
        char *line_ptr = line;
        if (line_number == 1 && (unsigned char)line[0] == 0xEF && 
            (unsigned char)line[1] == 0xBB && (unsigned char)line[2] == 0xBF) {
            line_ptr = line + 3;
        }
        
        // Pular espaços em branco no início
        while (*line_ptr == ' ' || *line_ptr == '\t') {
            line_ptr++;
        }
        
        // Pular linhas vazias
        if (strlen(line_ptr) == 0) continue;
        
        // Parsear linha: timestamp sensor_id value
        long timestamp;
        char sensor_id[MAX_SENSOR_ID];
        char value[MAX_VALUE_LENGTH];
        
        int parsed = sscanf(line_ptr, "%ld %s %s", &timestamp, sensor_id, value);
        
        if (parsed != 3) {
            printf("Aviso: Linha %d com formato inválido (parsed=%d): '%s'\n", line_number, parsed, line_ptr);
            continue;
        }
         // Validar timestamp Unix epoch
        if (is_valid_unix_timestamp(timestamp)) {
            char time_str[64];
            timestamp_to_string(timestamp, time_str, sizeof(time_str));
            printf("Timestamp %d = %ld (%s): '%s'\n", 
                   line_number, timestamp, time_str, line_ptr);
            invalid_timestamps++;
            continue;
        }
        
        // Validar timestamp Unix epoch
        if (!is_valid_unix_timestamp(timestamp)) {
            char time_str[64];
            timestamp_to_string(timestamp, time_str, sizeof(time_str));
            printf("Aviso: Linha %d com timestamp inválido %ld (%s): '%s'\n", 
                   line_number, timestamp, time_str, line_ptr);
            invalid_timestamps++;
            continue;
        }

        // Verificar se o sensor é suportado
        if (!is_supported_sensor(sensor_id)) {
            ignored_readings++;
            continue;
        }
        
        // Encontrar ou criar dados do sensor
        SensorData *sensor = find_or_create_sensor(sensors, &num_sensors, sensor_id);
        
        // Adicionar leitura
        add_reading(sensor, timestamp, value);
        total_readings++;
    }
    
    fclose(input_file);
    
    printf("Processamento concluído:\n");
    printf("  Total de linhas processadas: %d\n", line_number);
    printf("  Leituras válidas: %d\n", total_readings);
    printf("  Leituras ignoradas (sensor não suportado): %d\n", ignored_readings);
    printf("  Leituras ignoradas (timestamp inválido): %d\n", invalid_timestamps);
    printf("  Sensores únicos encontrados: %d\n\n", num_sensors);
    
    // Salvar dados de cada sensor em arquivo separado
    printf("Salvando dados ordenados por timestamp:\n");
    for (int i = 0; i < num_sensors; i++) {
        save_sensor_data(sensors[i]);
    }
    
    // Liberar memória
    free_sensors(sensors, num_sensors);
    
    printf("\nOrganização dos dados concluída com sucesso!\n");
    
    return 0;
}