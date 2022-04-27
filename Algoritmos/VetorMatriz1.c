#include <stdio.h>

int main(void) {
	
	int x, vetor[5];
	
	//armazenar valores na matriz
	for(x = 0; x < 5; x++) {
		printf("Matriz [%d]= ",x+1);
		scanf("%d", &vetor[x]);
	}
	
	printf("\nMatriz\n\n");
	
	//apresentando os valores armazenados
	for(x = 0; x < 5; x++) {
		printf("Posicao %d = %d\n", x+1, vetor[x]);
		getch();
	}
	
	
}

