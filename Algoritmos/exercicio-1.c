/*Faca um programa em C que leia os valores A, B, C e imprima
na tela se a soma de A + B é menor que C.*/

#include <stdio.h>
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int main() {

setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
	
	int a, b, c; // declaracao variaveis
	
	printf("Escreva os valores de a, b e c: "); // saida para informar usuario
	scanf("%d %d %d", &a, &b, &c); // entrada de dados
	
	if (a + b < c){ // condicional
		printf("A soma de a + b e menor que c."); 
	} else {
		printf("A soma de a + b e maior que c.");
	}
	
}
