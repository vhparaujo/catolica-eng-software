#include <stdio.h> // biblioteca para funcionar scanf e printf
#define peso1 3.5 // constante
#define peso2 7.5 // constante
#define pesoTotal 11 // constante

int main () { // inicio

    double a, b, media; // declaração das variáveis

    printf("Digite sua primeira nota: "); // saída para informar usuário
    scanf("%lf", &a); // entrada de dados

    printf("Digite sua segunda nota: "); // saída para informar usuário
    scanf("%lf", &b); // entrada de dados

    media = ((a*peso1) + (b*peso2)) / pesoTotal; // cálculo da média ponderada

    printf("Sua média é: %.5lf", media); // saída da média ponderada
       
    printf("\n"); //pular última linha

} // fim 