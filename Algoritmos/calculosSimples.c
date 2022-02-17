#include <stdio.h> // biblioteca para funcionar scanf e printf

int main() { // inicio

    double a, b, soma, subtracao, multiplicacao, divisao; // declaração das variáveis

    printf("Digite o valor de A: "); // saída para informar usuário
    scanf("%lf", &a); // entrada de dados

    printf("Digite o valor de B: "); // saída para informar usuário
    scanf("%lf", &b); // entrada de dados

    soma = a + b; // cálculo da soma
    subtracao = a - b; // cálculo da subtração
    multiplicacao = a * b; // cálculo da multiplicação
    divisao = a / b; // cálculo da soma divisão

    printf("%.2lf + %.2lf = %.2lf\n", a, b, soma); // saída dos resultados
    printf("%.2lf + %.2lf = %.2lf\n", a, b, subtracao); // saída dos resultados
    printf("%.2lf + %.2lf = %.2lf\n", a, b, multiplicacao); // saída dos resultados
    printf("%.2lf + %.2lf = %.2lf\n", a, b, divisao); // saída dos resultados

} // fim 