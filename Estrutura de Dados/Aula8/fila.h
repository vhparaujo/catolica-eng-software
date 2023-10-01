typedef struct Objeto{
    char valor;
    struct Objeto* objeto_anterior;
}Objeto;

typedef struct Fila {
    Objeto* inicio;
    Objeto* final;
    int quantidade_objeto;
}Fila;

Fila* fila();
void enfileirar(Objeto* o, Fila* f);
Objeto* desenfileirar(Fila* f);
