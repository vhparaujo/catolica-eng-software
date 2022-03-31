/* Elabore um algoritmo que calcule o que deve ser pago por um
produto, considerando o preço normal de etiqueta e a escolha da
condicao de pagamento. Utilize os codigos da tabela a seguir para
ler qual a condicao de pagamento escolhida e efetuar o calculo
adequado.
Codigo Condicao de pagamento
1 A vista em dinheiro ou cheque, recebe 10% de desconto
2 A vista no cartao de credito, recebe 15% de desconto
3 Em duas vezes, preco normal de etiqueta sem juros
4 Em duas vezes, preco normal de etiqueta mais juros de 10%. */

#include <stdio.h>
#include <math.h>
#define PRECO 9.99

int main() {

int opcao;
float valor, valorTruncado;

printf("Produto escolhido. Valor do produto: R$ %.2lf\n", PRECO);

printf("Escolha sua forma de pagamento:\n1. A vista em dinheiro ou cheque, 10%% desconto\n2. Credito a vista 15%% desconto\n3. Parcelado 2 vezes sem juros\n4. Parcelado, 10%% de juros.\n");

printf("Opcao: ");
scanf("%d", &opcao);

switch(opcao) {
    case 1: 
        valor = PRECO - (PRECO * 0.1);
        printf("Valor da compra: %.2f", valor);

    ; break;
    case 2: 
        valor = PRECO - (PRECO * 0.15);
        printf("Valor da compra: %.2f", valor);

    ; break;
    case 3: 

        valor = PRECO / 2;
        printf("Valor de cada parcela: %.2f. Valor total da compra: %.2f", valor, PRECO);

    ; break;
    case 4: 
        valor = PRECO + (PRECO * 0.1);
        printf("Valor da compra: %.2f", valor);

    ; break;


}

printf("\n");


}