/* Criei um programa em C, que use uma macro para retornar o valor da media aritmetica de tres valores
numericos informados pelo usuario. */

#include <stdio.h>
#include <stdlib.h>
#define MEDIA(v1, v2, v3) ((v1 + v2 + v3) / 3)

int main(void) {
	
	double v1, v2, v3;
	
	printf("Digite 3 valores: ");
	scanf("%lf %lf %lf", &v1, &v2, &v3);
	
	printf("O valor da media dos 3 valores e: %.2lf", MEDIA(v1, v2, v3));
	
}
