#include <stdio.h> // biblioteca para funcionar scanf e printf

int main () { // inicio

    double a, b, media; // declaração das variáveis

    printf("Digite sua primeira nota: "); // saída para informar usuário
    scanf("%lf", &a); // entrada de dados

    printf("Digite sua segunda nota: "); // saída para informar usuário
    scanf("%lf", &b); // entrada de dados

    media = ((a*3.5) + (b*7.5)) / 11; // cálculo da média ponderada

    printf("Sua média é: %.5lf", media); // saída da média ponderada
       
    printf("\n"); //pular última linha

} // fim 