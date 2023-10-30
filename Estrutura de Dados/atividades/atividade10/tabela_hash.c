
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tabela_hash.h"

#define SIZE 10

struct DataItem* hashArray[SIZE];

int hashCode(const char* chave) {
    // Função de hash simples: soma dos valores ASCII dos caracteres da chave
    int hash = 0;
    for (int i = 0; chave[i] != '\0'; i++) {
        hash += chave[i];
    }
    return hash % SIZE;
}

char* hash_table_get(char* chave) {
    int hashIndex = hashCode(chave);

    // Mova-se na tabela até encontrar uma célula vazia
    while (hashArray[hashIndex] != NULL) {
        if (strcmp(hashArray[hashIndex]->chave, chave) == 0)
            return hashArray[hashIndex]->dado;

        // Vá para a próxima célula
        ++hashIndex;

        // Volte para o início da tabela se atingir o final
        hashIndex %= SIZE;
    }

    return NULL;
}


void hash_table_put(char* chave, char* dado) {
    struct DataItem* item = (struct DataItem*)malloc(sizeof(struct DataItem));
    item->dado = strdup(dado);  // Faça uma cópia da string de dados
    item->chave = strdup(chave);    // Faça uma cópia da chave

    // Obtenha o índice hash
    int hashIndex = hashCode(chave);

    // Mova-se na tabela até encontrar uma célula vazia
    while (hashArray[hashIndex] != NULL) {
        // Vá para a próxima célula
        ++hashIndex;

        // Volte para o início da tabela se atingir o final
        hashIndex %= SIZE;
    }

    hashArray[hashIndex] = item;
}


int hash_table_contains(char* chave){
     int hashIndex = hashCode(chave);

    // Mova-se na tabela até encontrar uma célula vazia
    while (hashArray[hashIndex] != NULL) {
        if (strcmp(hashArray[hashIndex]->chave, chave) == 0)
            return 1;

        // Vá para a próxima célula
        ++hashIndex;

        // Volte para o início da tabela se atingir o final
        hashIndex %= SIZE;
    }

    return 0;
}


void hash_table_remove(char* chave) {
    // Obtenha o índice hash
    int hashIndex = hashCode(chave);

    // Mova-se na tabela até encontrar uma célula vazia
    while (hashArray[hashIndex] != NULL) {
        if (strcmp(hashArray[hashIndex]->chave, chave) == 0) {
            struct DataItem* temp = hashArray[hashIndex];

            // Libere a memória das strings de dados e da chave
            free(hashArray[hashIndex]->dado);
            free(hashArray[hashIndex]->chave);

            // Atribue NULL
            hashArray[hashIndex] = NULL;
        }

        // Vá para a próxima célula
        ++hashIndex;

        // Volte para o início da tabela se atingir o final
        hashIndex %= SIZE;
    }

}
