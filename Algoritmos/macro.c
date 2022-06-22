#include <stdio.h>
#include <stdlib.h>
#define ERRO printf("\nValor invalido.\n")

int main(void) {
	
	int numero; 
	printf("Informe um numero no intervalo de 1 a 10: ");
	scanf("%d", &numero);
	
	if((numero < 1) || (numero > 10)) {
		ERRO;
	} else {
		printf("Valor pertence ao intervalo.");
	}
	getch();
	
}

