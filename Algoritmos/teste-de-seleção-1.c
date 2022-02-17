#include <stdio.h> // biblioteca para funcionar scanf e printf

int main() { // início

    int a, b, c, d; // declaração das variáveis

    printf("Digite o valor de A: "); // saída para informar usuário
    scanf("%d", &a); // entrada de dados

    printf("Digite o valor de B: "); // saída para informar usuário
    scanf("%d", &b); // entrada de dados

    printf("Digite o valor de C: "); // saída para informar usuário
    scanf("%d", &c); // entrada de dados

    printf("Digite o valor de D: "); // saída para informar usuário
    scanf("%d", &d); // entrada de dados

    if((b > c && d > a) && (c + d) > (a + b) && c > 0 && d > 0 && (a%2 == 0)){ // condicional
        printf("Valores aceitos."); // saída se verdadeiro
    } else {
        printf("Valores não aceitos."); // saída se falso
    }

    printf("\n"); // pular última linha

}