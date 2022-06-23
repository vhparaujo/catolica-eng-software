/* Utilizando ponteiros elabore um programa que calcule o preco final de um produto a partir de um
percentual de ajuste. Os produtos serao informados enquanto o seu preco nao for igual a zero. */

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void) {
	
	double *pPreco, preco, precoFinal;
	double percentual = 0.10;
	
	do{
		printf("Digite o preco do produto: ");
		scanf("%lf", &preco);
		
		pPreco = &preco;
		*pPreco = preco + (preco * percentual);
	
		printf("Com o percentual de reajuste sendo sempre de 10%% o preco final do produto ficou em: %.2lf\n\n", *pPreco);

	} while(preco != 0);
	
}
