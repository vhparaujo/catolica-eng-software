// Contar a quantidade de ocorrências de um elemento no array. Escreva uma função que recebe um array de 
// números inteiros e um número inteiro de busca, e retorna a quantidade de vezes que o número de busca aparece no array.

// Exemplo: conta_int_array([5, 7, 9, 6, 7, 11, 6, 5], 7)
// Saída: 2

#include <stdio.h>

int conta_int_array(int numeros[10], int n) {
   
    int qtdNumerosIguais = 0;

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == n) {
            qtdNumerosIguais += 1; 
        } 
    } 

    return qtdNumerosIguais;
}

int main() {

    int n = 7;
    int numeros[] = {5, 7, 9, 6, 7, 11, 6, 5};

    printf("%d", conta_int_array(numeros, n));

    return 0;
	
}
