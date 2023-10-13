// Multiplicar elementos de dois arrays. Escreva uma função que recebe dois arrays de números inteiros com o mesmo tamanho e 
// retorna um novo array com os elementos resultantes da multiplicação dos elementos dos dois arrays.

// Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
// Saída: [25, 49, 81, 36] 

#include <stdio.h> 

#define TAMANHO 4

int multiplica_array(int array1[TAMANHO], int array2[TAMANHO]) {

    int arrayResultado[TAMANHO];

    printf("[");
    for(int i = 0; i < TAMANHO; i++) {
        if(i == 3) {
             printf("%d", arrayResultado[i] = array1[i] * array2[i]);
        } else { 
            printf("%d, ", arrayResultado[i] = array1[i] * array2[i]);
        }
    }
    printf("]");

    return arrayResultado;

}

int main() {

    int array1[] = {5, 7, 9, 6};
    int array2[] = {5, 7, 9, 6};

    multiplica_array(array1, array2);

    return 0;
}