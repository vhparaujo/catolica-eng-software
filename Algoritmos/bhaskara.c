#include <stdio.h> // Biblioteca para leitura do printf e scanf
#include <math.h>  // biblioteca para funções matemáticas

int main() { // início

    double a, b, c, xPositivo, xNegativo; // declaração das variáveis

    printf("Informe o coeficiente A: "); // saída para informar usuário
    scanf("%lf", &a); // entrada de dados

    printf("Informe o coeficiente B: "); // saída para informar usuário
    scanf("%lf", &b); // entrada de dados

    printf("Informe o coeficiente C: "); // saída para informar usuário
    scanf("%lf", &c); // entrada de dados

    xPositivo = (-(b) + sqrt((b * b) - (4 * a * c))) / (2 * a); // cálculo do x positivo
    xNegativo = (-(b) - sqrt((b * b) - (4 * a * c))) / (2 * a); // cálculo do x negativo

    if (a == 0 || (b * b) - (4 * a * c) < 0) { // condições onde não há resultado de bhaskara
        printf("Impossível calcular"); // saída caso condição verdadeira
    } else { // execução caso falso
        printf("X Positivo = %.5lf\n", xPositivo); // saída para X positivo
        printf("X Negativo = %.5lf", xNegativo); // saída para X negativo
    }

} // fim
