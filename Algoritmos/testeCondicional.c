#include <stdio.h> // biblioteca para funcionar scanf e printf

int main() { // início

    int a, b; // declaração das variáveis

    printf("Digite o valor de A: "); // saída para informar usuário
    scanf("%d", &a); // entrada de dados

    printf("Digite o valor de B: "); // saída para informar usuário
    scanf("%d", &b); // entrada de dados

    if(a > b) // condicional
        printf("Valores aceitos"); // saída se verdadeiro
        else printf("Valores não aceitos"); // saída se falso

    printf("\n"); // pular última linha
        
} // fim