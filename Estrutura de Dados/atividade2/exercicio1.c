// Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array 
// de números inteiros e retorna a soma de todos os elementos

// Exemplo: soma_array([5, 7, 9,6])
// Saída: 27 

#include <stdio.h>
#define TAMANHO 4

int soma_array(int vetor[TAMANHO]) {
    int soma = 0;

    for(int i = 0; i < TAMANHO; i++){
        soma += vetor[i];
    }

    return soma;
}

int main() {
    int array[] = {5, 7, 9, 6};

    printf("%d", soma_array(array));

    return 0;
}
