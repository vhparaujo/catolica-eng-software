/*Elabore um programa que forneça os valores distintos de um vetor inteiro informado pelo usuário.
Verifique com este usuário qual deveria ser a quantidade de elementos para este vetor.*/

#include <stdio.h>

int main() {

int x = 0, v = 15, vetor[v];

printf("Escreva quantos elementos voce deseja: ");
scanf("%d",&v);
fflush(stdin); 

for(x = 0; x < v; x++) {
	printf("Preencha o vetor: ");
    scanf("%d", &vetor[x]);
    fflush(stdin);
    
}

for(x = 0; x < v; x++){
	printf("%d", vetor[x]);
	printf("\n");
	
}
    
return 0;

} 
