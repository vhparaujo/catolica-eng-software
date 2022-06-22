/* Elabore um programa em C, que Solicite o preço atual do produto e o percentual de reajuste. Em seguida
apresente, no programa principal, o valor original do produto,do novo preço do produto e qual foi o reajuste que ele
sofreu. A leitura do preço, do reajuste e o cálculo do novo preço devem ser realizados em uma função, que receberá
argumentos por referência, e disponibilizará ao programa principal as informações para serem apresentadas. */

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

double valor(double *pPrecoOriginal, double *pPercentual, double *pPreco);

int main(void) {

    double preco, percentual, precoOriginal;

    valor(&precoOriginal, &percentual, &preco);
    printf("Preco original = %.2lf\n", precoOriginal);
    printf("O reajuste foi de = %.2lf\n", (preco - precoOriginal));
    printf("O preco final foi de = %.2lf\n", preco);
}

double valor(double *pPrecoOriginal, double *pPercentual, double *pPreco) {

    printf("Digite o preco atual do produto: ");
    scanf("%lf", &*pPreco);

    *pPrecoOriginal = *pPreco;

    printf("Digite o percentual de ajuste que voce deseja sem o simbolo de %%: ");
    scanf("%lf", &*pPercentual);

    *pPercentual = *pPercentual / 100;
    *pPreco = *pPreco + (*pPercentual * *pPreco);

}
