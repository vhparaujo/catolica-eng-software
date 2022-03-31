/* Faca um programa que leia o nome, o sexo e o estado civil de
uma pessoa. Caso sexo seja “F” e estado civil seja “CASADA”,
solicitar o tempo de casada (anos). */

#include <stdio.h>
#include <string.h>
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int main() { // inicio

setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
	
	char nome[20], sexo[5], estadoCivil[20]; // declaracao variaveis
	int tempoCasamento; // declaracao variaveis
	
	printf("Escreva seu nome: "); // saida para informar usuario
	scanf("%s", &nome); // entrada de dados
	fflush(stdin); // descarregar no console
	printf("Escreva M caso seja do sexo masculino ou F caso seja do sexo feminino: "); // saida para informar usuario
	scanf("%s", &sexo); // entrada de dados
	fflush(stdin); // descarregar no console
	printf("Escreva seu estado civil: Casado ou Solteiro: "); // saida para informar usuario
	scanf("%s", &estadoCivil); // entrada de dados
	fflush(stdin); // descarregar no console
	
	// condicional caso F ou casado
	if(strcmp(sexo, "F") == 0 && strcmp(estadoCivil, "Casado") == 0){ 
		printf("Escreva seu tempo de casamento: ");
		scanf("%d", &tempoCasamento);
        printf("Voce esta casado a %d anos\n", tempoCasamento);
	} else if (strcmp(sexo, "F") != 0){
        printf("Voce nao e mulher.\n");
    } else if (strcmp(estadoCivil, "Casado") != 0 ){
        printf("Voce nao e casada.\n");
    }
	
} // fim
