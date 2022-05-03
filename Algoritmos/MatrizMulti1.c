#include <stdio.h>

int main(void) {
	
	const int linha = 4; // numero de linhas
	const int coluna = 2; // numero de colunas
	int x, y; 
	int mat[linha][coluna];
	
	// calculando a matriz
	for(x = 0; x < linha; x++) {
		for(y = 0; y < coluna; y++)
	mat[x][y] = (x * 2) + (y * 3);
	}
		
	printf("Apresentar a Matriz\n\n");

	// apresentando elementos
	for(x = 0; x < linha; x++) {
		for(y = 0; y < coluna; y++)
	printf("%4d", mat[x][y]);
	printf("\n\n");
	
	}
		
}

