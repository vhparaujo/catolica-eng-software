#include <stdio.h>

int main() {
	
	double raio, area;
	printf("C�lculo do raio de uma circunfer�ncia. \n");
	printf("Digite o raio da circunfer�ncia: ");
	
	scanf("%lf", &raio);
	area = (raio*raio) * 3.14159;
	
	printf("A = %.4lf", area);
	
}
