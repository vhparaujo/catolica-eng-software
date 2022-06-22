#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void imprime(float *p);

int main(void) {
	
	float x = 5.12;
	
	printf("Valor de x = %.2f - antes da chamada da funcao.\n", x);
	imprime(&x);
	printf("Valor de x = %.2f - depois da chamada da funcao.\n", x);
	getch();
	
}

void imprime(float *p){
	
	printf("\tValor dentro da funcao sem alteracao p = (%2.2f)\n", *p);
	*p = *p * 2;
	printf("\tValor dentro da funcao apos a alteracao p = (%2.2f)\n", *p);
	
}
