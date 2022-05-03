#include <stdio.h>
/* Somar os valores das linhas e multiplicar as colunas */

int main(void) {
	
	int x, y, somatorio = 0; 
	int mat[4][4] = {{5,3,10,14},
	{7,1,11,15},
	{8,2,12,17},
	{9,6,13,18}};
	
	printf("Apresentar a Matriz\n\n");
	// apresentando elementos
	for(x = 0; x < 4; x++) {
		for(y = 0; y < 4; y++)
	printf("%4d", mat[x][y]);
	printf("\n\n");
	
	}

	// calculando a matriz
	for(x = 0; x < 4; x++) {
		for(y = 0; y < 4; y++) {
		somatorio = somatorio + mat[x][y];
			if(y == 3){
				printf("Somatorio das linhas = %d\n", somatorio);
			}
		}
		somatorio = 0;
	}

	printf("\n");

	somatorio = 1;
	for(y = 0; y < 4; y++) {
		for(x = 0; x < 4; x++) {
		somatorio = somatorio * mat[x][y];
			if(x == 3){
				printf("Multiplicacao das colunas = %d\n", somatorio);
			}
		}
		somatorio = 1;
	}

	printf("\n");
	
}
