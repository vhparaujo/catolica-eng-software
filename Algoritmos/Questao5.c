/*
Elabore um programa em C, que armazene 4 numeros em um vetor, calcule a media aritmetica dos 4 numeros fornecidos pelo usuario.
*/

#include <stdio.h>

int main(){

	int x;
	float vetor[4], somatorio = 0, media;
	
	for(x = 1; x <= 4; x++){
		printf("Digite o %d numero: ", x);
		scanf("%f", &vetor[4]);
		somatorio = somatorio + vetor[4];
	}
	
	media = somatorio / 4;
	
	printf("Media dos 4 numeros: %.2f", media);
	
	
}
