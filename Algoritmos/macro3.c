#include <stdio.h>
#include <stdlib.h>
#define SOMAR(p1,p2)(p1 + p2)

int main(void) {
	
	int valor_1, valor_2, total;
	printf("Informe os valores: ");
	scanf("%d %d", &valor_1, &valor_2);
	
	total = 10 * SOMAR(valor_1, valor_2);
	printf("Resultado = %d", total);
	
}
