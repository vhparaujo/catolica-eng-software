#include <stdio.h>

int main() {
	
	double raio, area;
	printf("Cálculo do raio de uma circunferência. \n");
	printf("Digite o raio da circunferência: ");
	
	scanf("%lf", &raio);
	area = (raio*raio) * 3.14159;
	
	printf("A = %.4lf", area);
	
}
