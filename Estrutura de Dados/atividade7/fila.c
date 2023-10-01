#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

Fila* fila() {
    Fila* F = (Fila*) malloc(sizeof(Fila));
    F->inicio = NULL;
    F->quantidade_objeto = 0;
    return F;
}

void enfileirar(Objeto* o, Fila* F) { 
    if(F->inicio == NULL){
        F->inicio = o;
        F->final = o;
    } else {
        F->final->objeto_anterior = o;
        F->final = o;
    }
    F->quantidade_objeto++;
}

Objeto* desenfileirar(Fila* F){
    if(F->quantidade_objeto == 0){
        return NULL;
    }
    Objeto *o = F->inicio;
    F->inicio = o->objeto_anterior;
    F->quantidade_objeto--;
    return o;
}
