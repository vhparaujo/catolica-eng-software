/*Elabore um programa que armazene em uma matriz multidimensional: 4 produtos com 4 preços.
Apresente os produtos com os preços com 5% de reajuste. */

#include <stdio.h>
#include <stdlib.h>

struct produtos {

    int preco[4];
    char produto[4][128];
}; 
struct produtos item;


float ajuste (int preco){
    float reajuste;
    reajuste = preco * 0.05;
    return preco + reajuste;
}

int main(){

int x = 1;

for(; x <= 4; x++) {

    printf("Escreva o %dº produto: ", x);
    scanf("%s", item.produto[x]);
    printf("Escreva a %dª preco: ", x);
    scanf("%d", &item.preco[x]);       
	
}

printf("----Tabela-----");
printf("\n\n");

printf("Prduto Preco");
printf("\n");

int espaco = 10;
float valorFinal;

for(x = 1; x <= 4; x++) {

    valorFinal = ajuste(item.preco[x]);
    printf("%.*s %.2f\n", espaco, item.produto[x], valorFinal);      
	
}




}
