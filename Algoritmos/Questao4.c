/*
Elabore um programa em C, o qual o usuario informe 3 numeros, 
o algoritmo faca a comparacao dos numeros, utilizando a estrutura condicional IF e ELSE e exiba para o usuario o maior 
e o menor numero.
*/

#include <stdio.h>

int main(){
	
	int n1, n2, n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("Maior numero: %d", n1);
	} else if(n2 > n1 && n2 > n3){
		printf("Maior numero: %d", n2);
	} else if(n3 > n1 && n3 > n2){
		printf("Maior numero: %d", n3);
	}
	
	if(n1 < n2 && n1 < n3){
		printf("\nMenor numero: %d", n1);
	} else if(n2 < n1 && n2 < n3){
		printf("\nMenor numero: %d", n2);
	} else if(n3 < n1 && n3 < n2){
		printf("\nMenor numero: %d", n3);
	}
	
	
}

