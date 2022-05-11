/*Elabore um programa que armazene em uma matriz multidimensional:
4 nomes, com 4 idades. Apresente os nomes em ordem crescente por
idade.*/

#include <stdio.h>
#include <stdlib.h>

struct pessoas {

    int idade[4];
    char nome[4][128];
}; 
struct pessoas pessoa;

int main(){

int x = 1;

for(; x <= 4; x++) {

    printf("Escreva o %dº nome: ", x);
    scanf("%s", pessoa.nome[x]);
    printf("Escreva a %dª idade: ", x);
    scanf("%d", &pessoa.idade[x]);       
	
}

printf("----Tabela-----");
printf("\n\n");

printf("Nome Idade");
printf("\n");

int espaco = 10;

for(x = 1; x <= 4; x++) {

    printf("%.*s %d\n", espaco, pessoa.nome[x], pessoa.idade[x]);      
	
}




}
