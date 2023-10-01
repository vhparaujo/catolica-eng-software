#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    p->quantidade = 0;
    //Pilha* p1 = &p;
    return p;
}

void empilhar(Objeto* o, Pilha* p) {
    printf("empilhando %c\n", o->valor);
    o->proximo_objeto = p->topo;
    p->topo = o;
    p->quantidade++;
}

Objeto* desempilhar(Pilha* p) {

    if(p->quantidade == 0) {
        return NULL;
    }
    Objeto* o = p->topo;
    printf("desempilhando %c\n", o->valor);
    p->topo = o->proximo_objeto;
    p->quantidade--;
    return o;
}
