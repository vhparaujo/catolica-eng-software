typedef struct {
    int numero[100]; // array usado para armazenar os elementos da pilha
    int topo;
} Pilha;

Pilha* criarPilha();
int estaVazio(Pilha* pilha);
int estaCheio(Pilha* pilha);
void empilhar(Pilha* pilha, int valor);
int desempilhar(Pilha* pilha);