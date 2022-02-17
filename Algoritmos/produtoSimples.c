#include <stdio.h> // biblioteca para funcionar scanf e printf.

int main() { // início

	int a, b, prod; // declaração das variáveis

	printf("Digite o primeiro valor: "); // saída para informar usuário
	scanf("%d", &a); // entrada de dados

	printf("Digite o segundo valor: "); // saída para informar usuário
	scanf("%d", &b); // entrada de dados

 	prod = a*b; // cálculo do produto

 	printf("PROD = %d", prod); // saída do produto
    printf("\n"); //pular última linha

 } // fim