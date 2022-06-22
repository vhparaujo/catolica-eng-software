#include <stdio.h>
#include <conio.h>
#define TAMANHO 100

int* coloca(int i, int *topo, int *base);
int* retira(int *valor, int *topo, int *base, int *erro);

void main(void) {
	 
	char opcao;
	int fim = 0, valor, erro;
	int *base, *topo, pilha[TAMANHO];
	base = topo = pilha;
	
	while(!fim){
		printf("Digite 1 - para colocar, 2 - para retirar e 3 - para encerrar\n");
		opcao = getch();
		
		switch(opcao){
			case '1':
				printf("Digite valor a ser colocado = ");
				scanf("%d", &valor);
				topo = coloca(valor, topo, base);
				break;
			
			case '2':
				retira(&valor, topo, base, &erro);
				if(erro == 0){
					printf("Valor retirado = %d\n", valor);
					getch();
				}
				break;
		
			case '3':
				printf(" encerra programa\n");
				fim = 1; 
				break; 
		}
	}
}

int* coloca(int valor, int *topo, int *base){
	if(topo == (base+TAMANHO)){
		printf("Pilha cheia");
		getch();
	} else {
		*topo = valor;
		topo++;
	}
	return topo;
}

int* retira(int *valor, int *topo, int *base, int *erro){
	if(topo == base){
		printf("Pilha vazia");
		*erro = 1;
		getch();
	} else {
		topo--;
		*valor = *topo;
		*erro = 0;
	}
	return topo;
}
