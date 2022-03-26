#include <stdio.h> // biblioteca para funcionar scanf e printf
#define peso1 3.5 // constante
#define peso2 7.5 // constante
#define pesoTotal 11 // constante
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int main () { // inicio

	setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>

    double a, b, media; // declaracao das variaveis
    int i; // declaracao da variavel

	// laco for para repeticao.
	for(i = 0; i < 3; i++) {
		printf("Digite sua primeira nota: "); // saida para informar usuario
    	scanf("%lf", &a); // entrada de dados

    	printf("Digite sua segunda nota: "); // saida para informar usuario
    	scanf("%lf", &b); // entrada de dados
    	
    	media = ((a*peso1) + (b*peso2)) / pesoTotal; // calculo da media ponderada

    	printf("Sua media e: %.5lf\n\n", media); // saida da media ponderada
	}

} // fim 
