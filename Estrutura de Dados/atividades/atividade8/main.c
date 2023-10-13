#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {

    No* n0 = no('X', NULL);
    No* n1 = no('C', NULL);
    No* n2 = no('C', NULL);
    No* n3 = no('V', NULL); 
    No* n4 = no('Z', NULL);  
    No* n5 = no('T', NULL); 
    No* n6 = no('Y', no('D', no('C', no('A', NULL))));

    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n3);
    lista_inserir_no(n0, n4);
    lista_inserir_no(n0, n5);
    lista_inserir_no(n0, n6);

    lista_imprimir(n0);

    //printf("\nQtd nos: %d", lista_quantidade_nos(n0));

    // No* n_copia = lista_copiar(n0);
    // printf("\n");
    // lista_imprimir(n_copia);

    // lista_concatenar(n0, n_copia);
    // printf("\n");
    // lista_imprimir(n0);

    char valor = 'C';

    printf("\nPossui o valor %c? %d", valor, lista_verificar_existencia(n0, valor));

    printf("\nQuantidade de vezes do valor %c = %d", valor, lista_verificar_ocorrencias(n0, valor));

    printf("\n");
    lista_imprimir_inversa(n0);

    char v = 'H'; // O valor que você deseja inserir
    int posicao = 0;  // A posição em que deseja inserir

    // printf("\n");
    // lista_inserir_no_i(n0, posicao, v);
    // lista_imprimir(n0);

    // printf("\n");
    // lista_remover_no_i(n0, 0);  
    // lista_imprimir(n0);

    printf("\n");
    lista_remover_no(n0, 'X');
    lista_imprimir(n0);

    lista_liberar(n0); // libera a memória alocada
    printf("\n"); 
    lista_imprimir(n0); // imprime a lista a qual ja foi liberada, assim nao aparece nada

    exit(0);
}
