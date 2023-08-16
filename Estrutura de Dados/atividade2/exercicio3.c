// Verificar se um elemento existe no array Escreva uma função que recebe um array de 
// strings e uma string de busca, e retorna "1" se a string de busca existe no array, ou "0" caso não exista.

// Exemplo: busca_string(["texto", "J", "EDA"], "EDO")
// Saída: 0 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAMANHO 4

int busca_string(char string[TAMANHO][10], char stringBusca[10]) {

    for(int i = 0; i < 4; i++) {
        if(strcmp(string[i], stringBusca) == 0) {
            return 1;
        } 
    } 
    return 0;
}

int main(void) {

    char array[][10] = {"texto", "J", "EDA"};
    char string[] = {"EDO"};
	printf("%d", busca_string(array, string));

    return 0;
	
}
