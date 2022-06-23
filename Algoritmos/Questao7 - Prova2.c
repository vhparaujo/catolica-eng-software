/* Elabore um programa em C, que Solicite o preco atual do produto e o percentual de reajuste. Em seguida
apresente, no programa principal, o valor original do produto, do novo preco do produto e qual foi o reajuste que ele
sofreu. A leitura do preco, do reajuste e o calculo do novo preco devem ser realizados em uma funcao, que recebera
argumentos por referencia, e disponibilizara ao programa principal as informacoes para serem apresentadas. */

#include <stdio.h>
#include <string.h>
#include <conio.h>

double valores(double *pPreco, double *pPercentual, double *pPrecoFinal){

		printf("Digite o preco do produto: ");
		scanf("%lf", &*pPreco);
				
		printf("Digite o percentual de reajuste do produto em numero inteiro: ");
		scanf("%lf", &*pPercentual);
		
		*pPercentual = *pPercentual / 100;
		*pPrecoFinal = *pPreco + (*pPreco * *pPercentual);
		
}

int main(void) {
	
	double preco, percentual, precoFinal;
	
	valores(&preco, &percentual, &precoFinal);
	printf("O preco inicial do produto e: %.2lf\n", preco);
	printf("O reajuste foi no valor de: %.2lf\n", (precoFinal - preco));
	printf("O preco reajustado do produto e: %.2lf\n", precoFinal);

}
