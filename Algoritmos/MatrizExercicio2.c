#include <stdio.h>
#include <stdlib.h>

int main(){

int x, v = -1, vetor[v], tam;

printf("Escreva quantos elementos voce deseja: ");
scanf("%d",&v);

/*for(x = 1; x <= 10; x++){
    printf("Digite idade %d: ", x);
    scanf("%d", &vetor[x]);*/
tam = sizeof(vetor[v]);

printf("%d\n", tam);


}