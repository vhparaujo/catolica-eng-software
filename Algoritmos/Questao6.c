/*
Elabore um programa em C, que armazene os valores representados pela matriz na figura abaixo. 
Calcule a media aritmetica dos valores armazenados.
*/

#include <stdio.h>

int main(){
	
	int x, y, matriz[4][4] = { {45, 32, 83, 95}, 
	{26, 14, 37, 42}, 
	{40, 43, 65, 77},
	{74, 79, 48, 55} };
	
	float somatorio = 0, media;
	
	for(x = 0; x < 4; x++){
		for(y = 0; y < 4; y++)
	printf("%4d", matriz[x][y]);
	printf("\n");
		
	}
	
	for(x = 0; x < 4; x++){
		for(y = 0; y < 4; y++)
		somatorio = somatorio + matriz[x][y];
	}
	
	media = somatorio / 16;
	
	printf("Media = %.2f", media);
	
}

