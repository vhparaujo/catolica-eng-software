/*Elabore um algoritmo em C, com uma função recursiva, que retorne como resultado o fatorial de um
número.*/

#include <stdio.h>

double fatorial(int n); // declaracao da funcao

int main(void) {
	
	int num ;

	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Fatorial de %d = %.1lf", num, fatorial(num));

}

double fatorial(int n) {
	if(n == 0) return(1);
	return  n * fatorial(n - 1);
}
