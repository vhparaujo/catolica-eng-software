/* Utilizando ponteiros elabore um programa que calcule o preço final de um produto a partir de um
percentual de ajuste. Os produtos serão informados enquanto o seu preço não for igual a zero. */

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main(void) {

double preco, *pPreco, percentual;
int fim = 0, opcao;


    while(!fim){

        printf("Digite o preco inicial do produto: ");
        scanf("%lf", &preco); 

        pPreco = &preco;

        printf("Digite o percentual de ajuste que voce deseja sem o simbolo de %%: ");
        scanf("%lf", &percentual);

        percentual = percentual / 100;

        *pPreco = preco + (percentual * preco); 

        printf("Preco com ajuste: %.2lf\n", *pPreco);

        printf("Deseja inserir mais produtos? Escreva 1 para sim ou 2 para nao: ");
        scanf("%i", &opcao);

        if(opcao == 1){
            fim = 1;
        } 
        printf("\n");

    }

}
