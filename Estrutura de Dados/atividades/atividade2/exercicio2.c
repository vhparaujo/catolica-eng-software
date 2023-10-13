// Exercício 2 - Maior e menor elemento do array. Escreva uma função que recebe um array de 
// números inteiros e retorna o menor e o maior elemento do array.

// Exemplo: menor_maior_array([5, 7, 9,6])
// Saída: 5, 9 

#include <stdio.h>
#define TAMANHO 4

void menor_maior_array(int arr[TAMANHO]) {
    int menor = arr[0];
    int maior = arr[0];
    
    for (int i = 1; i < TAMANHO; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
        
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    printf("%d, %d", menor, maior);
}

int main() {
    
    int array[] = {5, 7, 9, 6};
    menor_maior_array(array);

    return 0;
}
