#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criarPilha() {
    Pilha* pilha = (Pilha*)malloc(sizeof(pilha));
    pilha->topo = -1;
    return pilha;
}

int estaVazio(Pilha* pilha) {
    return pilha->topo == -1;
}

int estaCheio(Pilha* pilha) {
    return pilha->topo == 100 - 1;
}

void empilhar(Pilha* pilha, int valor) {
    if (!estaCheio(pilha)) {
        // Adiciona o valor valor ao topo da pilha, incrementando o campo topo antes de usar para acessar o índice correto.
        pilha->numero[++pilha->topo] = valor;
    } else {
        printf("A pilha está cheia. Não é possível adicionar mais elementos.\n");
    }
}

int desempilhar(Pilha* pilha) {
    if (!estaVazio(pilha)) {
        //  Retorna o valor no topo da pilha e, em seguida, decrementa o campo topo para apontar para o próximo elemento da pilha.
        return pilha->numero[pilha->topo--];
    } else {
        printf("A pilha está vazia. Não é possível desempilhar.\n");
        return -1;
    }
}