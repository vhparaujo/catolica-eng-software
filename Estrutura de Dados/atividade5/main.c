// Instruções
// No seu repositório de atividades, crie uma pasta chamada atividade5 que contenha os arquivos main.c bubble_sort.h e bubble_sort.c;

// O seu programa deve implementar o algoritmo bubble sort para ordenar um arquivo de palavras passados na chamada do programa e criar um arquivo com as palavras ordenadas como saída.
// Exemplo:
// ./main arq_palavras.txt
// Saída: arq_palavras_ordenado.txt

// arq_palavras.txt
// hoje
// amanha
// depois

// arq_palavras_ordenado.txt
// amanha
// depois
// hoje

// OBS: o nome do arquivo é passado como argumento na chamada do programa (argv);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"
#include <ctype.h>

#define MAX_PALAVRAS 100
#define TAM_PALAVRA 80

int main(int argc, char *argv[]) {

    FILE *txtFile;
    txtFile = fopen(argv[1], "r");

    if(txtFile == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }

    char **palavras = malloc(MAX_PALAVRAS * sizeof(char *));
    for (int i = 0; i < MAX_PALAVRAS; i++) {
        palavras[i] = malloc(TAM_PALAVRA);
    }
    int num_palavras = 0;
    //char c;

    // do{
    //     int i = 0;
    //     c = fgetc(txtFile);
    //     bubble_sort(c, 9);
    //     palavras[c];
    //     printf("%c", c);
    // } while(c != EOF);

    // Ler as palavras do arquivo
    while (num_palavras < MAX_PALAVRAS && fscanf(txtFile, "%s", palavras[num_palavras]) != EOF) {
        
        for (int i = 0; palavras[num_palavras][i]; i++) {
            palavras[num_palavras][i] = tolower(palavras[num_palavras][i]);
        }
        
        num_palavras++;
    }
    
    fclose(txtFile);

    // Ordenar as palavras
    bubble_sort((char **)palavras, num_palavras);

    FILE *txtFile2;
    txtFile2 = fopen("arq_palavras_ordenado.txt", "w");

    if (txtFile2 == NULL) {
        perror("Não foi possível criar o arquivo de saída");
        exit(1);
    }

     for (int i = 0; i < num_palavras; i++) {
        fprintf(txtFile2, "%s\n", palavras[i]);
    }

    for (int i = 0; i < num_palavras; i++) {
        free(palavras[i]);
    }
    free(palavras);

    //fprintf(txtFile2, palavras);

    fclose(txtFile2);

    exit(0);
}
