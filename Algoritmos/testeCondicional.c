#include <stdio.h> // biblioteca para funcionar scanf e printf

int main() { // inicio

    int a, b; // declaracao das variaveis

    printf("Digite o valor de A: "); // saida para informar usuario
    scanf("%d", &a); // entrada de dados

    printf("Digite o valor de B: "); // saida para informar usuario
    scanf("%d", &b); // entrada de dados

    if(a > b) // condicional
        printf("Valores aceitos"); // saida se verdadeiro
        else printf("Valores não aceitos"); // saida se falso

    printf("\n"); // pular ultima linha
        
} // fim