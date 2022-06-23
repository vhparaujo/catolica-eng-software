/* Leia o nome completo de 2 pessoas e apresente o primeiro nome
somente em letras maiusculas e na linha seguinte, com uma tabulacao, o
segundo nome em letras minusculas, solicitando outros nomes caso o
usuario deseje. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char nome[25], nome1[25], nome2[25];
	int i, opcao;
	
	printf("Digite seu primeiro nome: ");
	gets(nome1);
	fflush(stdin);
	
	printf("Digite seu segundo nome: ");
	gets(nome2);
	fflush(stdin);
	
	for(i = 0; nome1[i] != 0; i++){
		nome1[i] = toupper(nome1[i]);
	}
	
	for(i = 0; nome2[i] != 0; i++){
		nome2[i] = tolower(nome2[i]);
	}
	
	printf(" %s", nome1);
	printf("\n\t%s\t", nome2);
	
	printf("\n\nDeseja solicitar a adicao de mais nomes? Digite 1 para sim ou 2 para nao: ");
	scanf("%d", &opcao);
	fflush(stdin);
	
	switch(opcao){
		case 1: 
			printf("Digite outro nome: ");
			gets(nome);
			fflush(stdin);
			
			printf("Deseja mostra-lo maiusculo ou minusculo? Digite 1 para maiusculo ou 2 para minusculo. ");
			scanf("%d", &opcao);
			fflush(stdin);
			
			switch(opcao){
				case 1: 
					for(i = 0; nome[i] != 0; i++){
					nome[i] = toupper(nome[i]);
					}
					printf("\n\t%s\t", nome);
					
				; break;
				
				case 2: 
					for(i = 0; nome[i] != 0; i++){
					nome[i] = tolower(nome[i]);
					}
					printf("\n\t%s\t", nome);
				; break;
				
			}
		; break; 
		case 2:
			printf("Fim do programa");
		; break;
		
	}
	
}
