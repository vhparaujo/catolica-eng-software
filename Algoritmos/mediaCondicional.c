#include <stdio.h> // biblioteca para funcionar scanf e printf
#define MEDIA 9.5 // definição de constante

int main() { // início

    double nota1, nota2, mediaAluno; // declaração das variáveis
    int freq; // declaração das variáveis

    printf("Digite a sua primeira nota: "); // saída para informar usuário
    scanf("%lf", &nota1); // entrada de dados

    printf("Digite a sua segunda nota: "); // saída para informar usuário
    scanf("%lf", &nota2); // entrada de dados

    printf("Digite sua frequência de presença de 1 a 100: "); // saída para informar usuário
    scanf("%d", &freq); // entrada de dados

    mediaAluno = (nota1 + nota2) / 2; // cálculo da média simples

    printf("Sua média final foi: %.1lf\n", mediaAluno); // saída da média simples

    if(mediaAluno >= MEDIA && freq >= 75){ // condicional
        printf("Parabéns! Aprovado!"); // saída se verdadeiro
    } else {
        printf("Tente novamente! Reprovado!"); // saída se falso
    }

    printf("\n"); // pular última linha
        
} // fi