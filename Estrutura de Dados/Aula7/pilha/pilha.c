#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha p;
    p.topo = NULL;
    p.quantidade = 0;
    Pilha* p1 = &p;
    return p1;
}

void empilhar(Objeto* o, Pilha* p) {
    o->proximo_objeto = p->topo;
    p->topo = o;
    p->quantidade++;
}

Objeto desempilhar(Pilha* p) {
    Objeto* o = p->topo;
    p->topo = o->proximo_objeto;
    p->quantidade--;
    return *o;
}
