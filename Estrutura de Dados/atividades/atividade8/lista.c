#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* proximo_no) {
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(No* L, No* no) {
    if(L != NULL) {
        if(L->proximo_no == NULL) {
            L->proximo_no = no;
        } 
        else {
            lista_inserir_no(L->proximo_no, no);
        }
    }
}

void lista_imprimir(No* L) {
    if (L != NULL) {
        printf("%c", L->valor);
        lista_imprimir(L->proximo_no);
    }
}

int lista_quantidade_nos(No* L) {
    if(L != NULL){
        return 1 + lista_quantidade_nos(L->proximo_no);
    }
    return 0;
}

No* lista_copiar(No* L) {
    if(L != NULL){
        return no(L->valor, lista_copiar(L->proximo_no));
    }
    return NULL;
}

void lista_concatenar(No* L, No* Lc) {
    lista_inserir_no(L, Lc);
}

void lista_liberar(No* L) {
    if(L != NULL){
        lista_liberar(L->proximo_no);
        free(L);
    }
}


// funcoes da atividade 8
int lista_verificar_existencia(No* L, char valor_busca){
    if(L != NULL){
        if(L->valor == valor_busca) {
            return 1;
        }
        return lista_verificar_existencia(L->proximo_no, valor_busca);
    }

    return 0;
}

int lista_verificar_ocorrencias(No* L, char valor_busca){
    int qtd = 0;

    if(L != NULL){
        if(L->valor == valor_busca){
            qtd = 1;
        } else {
            qtd = 0;
        }
        return qtd + lista_verificar_ocorrencias(L->proximo_no, valor_busca);
    }

    return 0;
}

void lista_imprimir_inversa(No* L) {
    if (L != NULL) {
        lista_imprimir_inversa(L->proximo_no);
        printf("%c", L->valor);
    }
}

// unico problema dessa funcao é que nao adiciona na posicao 0, somente da 1 para frente.
void lista_inserir_no_i(No* L, int i, char valor) {
    if (i < 0 || i > lista_quantidade_nos(L) - 1) {
        printf("posicao invalida");
        exit(0);
    }

    if(i == 0) {
        No* novo_no = no(valor, L->proximo_no);
        L->proximo_no = novo_no;
    } else if (L != NULL) {
        lista_inserir_no_i(L->proximo_no, i - 1, valor);
    }
}

// a funcao so nao remove o ultimo nó
void lista_remover_no_i(No* L, int i) {
    if (i < 0 || i > lista_quantidade_nos(L) - 1) {
        printf("Posicao menor que 0 nao e valida.\n");
        exit(0);
    }

    if(i == 0) {
        // Remover o nó no início da lista
        No* no_a_remover = L->proximo_no;
        L->valor = no_a_remover->valor;
        L->proximo_no = no_a_remover->proximo_no;
        free(no_a_remover);
    } else if (L != NULL) {
        // Chama a função recursivamente para a próxima posição
        lista_remover_no_i(L->proximo_no, i - 1);
    } else {
        printf("Posicao fora do alcance da lista.\n");
    }
}

// nao remove o primeiro elemento
void lista_remover_no(No* L, char valor) {
    if (L == NULL) {
        return; // Chegou ao final da lista, encerramos a recursão
    }

    if (L->proximo_no != NULL && L->proximo_no->valor == valor) {
        // O próximo nó tem o valor a ser removido, vamos removê-lo
        No* no_a_remover = L->proximo_no;
        L->proximo_no = no_a_remover->proximo_no;
        free(no_a_remover);
        lista_remover_no(L, valor); // Continue verificando na mesma posição
    } else {
        // Continue verificando no próximo nó
        lista_remover_no(L->proximo_no, valor);
    }
}
