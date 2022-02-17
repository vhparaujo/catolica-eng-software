#include <stdio.h> // biblioteca para funcionar scanf e printf.

int main () { // início

    double a, b, c, media; // declaração das variáveis
    printf("Digite sua primeira nota: "); // saída para informar usuário
    scanf("%lf", &a); // entrada de dados

    printf("Digite sua segunda nota: "); // saída para informar usuário
    scanf("%lf", &b); // entrada de dados

    printf("Digite sua segunda nota: "); // saída para informar usuário
    scanf("%lf", &c); // entrada de dados

    media = ((a*2) + (b*3) + (c*5)) / 10; // cálculo da média ponderada

    printf("Sua média é: %.1lf", media); // saída da média ponderada

    printf("\n"); //pular última linha

}