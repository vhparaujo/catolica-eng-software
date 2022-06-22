#include <stdio.h>
#include <stdlib.h>
#define MOSTRA(p1) printf("%.1f\n", p1)

int main(void) {
	
	float valor;
	printf("Informe um valor desejado: ");
	scanf("%f", &valor);
	
	MOSTRA(valor);
	valor = valor * 3;
	MOSTRA(valor);
	
}

