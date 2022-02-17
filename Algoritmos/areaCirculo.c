#include <stdio.h> // biblioteca para funcionar scanf e printf
#include <math.h> // biblioteca para funções matemáticas
#define PI 3.14159 // declaração de "variável" constante

int main() { // inicio

	double raio, area; // declaração das variáveis

	printf("Cálculo do raio de uma circunferência. \n"); // Texto informativo

	printf("Digite o raio da circunferência: "); // saída para informar usuário
	scanf("%lf", &raio); // entrada de dados

	// pow( , ) serve para calcular potência
	area = pow(raio, 2) * PI; // cálculo da área da circunferência

	printf("A = %.4lf", area); // saída da área
    
    printf("\n"); //pular última linha

} // fim 