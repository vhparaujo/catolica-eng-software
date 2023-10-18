#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

int main(int argc, char *argv[])
{
    clock_t inicio, final;
    double cpu_time;

    No *cabeca = NULL;
    FILE *arquivo = fopen("1kk_rand_float.csv", "r");

    if (arquivo == NULL)
    {
        printf("Erro na leitura\n");
        return 1;
    }

    int tamanho = 1000000;
    float numero;

    inicio = clock();
    while (fscanf(arquivo, "%f", &numero) != EOF)
    {
        No *noTeste = (No *)malloc(sizeof(No));

        if (noTeste == NULL)
        {
            printf("Erro ao alocar memória para os números.\n");
            fclose(arquivo);
            return 1;
        }

        noTeste->valor = numero;
        noTeste->proximo_no = cabeca;
        cabeca = noTeste;
    }

    final = clock();
    cpu_time = ((double)(final - inicio)) / CLOCKS_PER_SEC;
    printf("tempo para inserir no de forma desordenada: %f segundos\n", cpu_time);

    fclose(arquivo);

    // Libere a memória dos nós da lista desordenada
    // No *atual = cabeca;
    // while (atual != NULL)
    // {
    //     No *temp = atual;
    //     atual = atual->proximo_no;
    //     free(temp);
    // }

    cabeca = NULL; // Resete a cabeça para uma lista vazia

    arquivo = fopen("1kk_rand_float.csv", "r");

    inicio = clock();
    while (fscanf(arquivo, "%f", &numero) != EOF)
    {
        No *noTeste = (No *)malloc(sizeof(No));

        if (noTeste == NULL)
        {
            printf("Erro ao alocar memória para os números.\n");
            fclose(arquivo);
            return 1;
        }

        noTeste->valor = numero;
        lista_inserir_no_ordenado(&cabeca, noTeste);
        //printf("%.2f", numero);
    }

    final = clock();
    cpu_time = ((double)(final - inicio)) / CLOCKS_PER_SEC;
    printf("tempo para inserir no de forma ordenada: %f segundos\n", cpu_time);

    fclose(arquivo);

    // Libere a memória dos nós da lista ordenada
    // atual = cabeca;
    // while (atual != NULL)
    // {
    //     No *temp = atual;
    //     atual = atual->proximo_no;
    //     free(temp);
    // }

    return 0;
}
