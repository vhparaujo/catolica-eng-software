#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {

    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', NULL);
    No* n3 = no('J', NULL); 
    No* n4 = no('Z', NULL);  
    No* n5 = no('T', NULL); 
    No* n6 = no('Y', no('D', no('B', no('X', NULL))));


    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n3);
    lista_inserir_no(n0, n4);
    lista_inserir_no(n0, n5);
    lista_inserir_no(n0, n6);

    lista_imprimir(n0);

    printf("\nQtd nos: %d", lista_quantidade_nos(n0));

    No* n_copia = lista_copiar(n0);
    printf("\n");
    lista_imprimir(n_copia);

    lista_concatenar(n0, n_copia);
    printf("\n");
    lista_imprimir(n0);

    lista_liberar(n0);

    //printf("\n");
    lista_imprimir(n0);

    exit(0);
}
