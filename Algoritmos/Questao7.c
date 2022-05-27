/*
Elabore um programa em C, utilizando a estrutura condicional Switch Case, que apresenta as compras de frutas efetuadas por um usuario,
sendo elas identificadas por meio de um numero, onde tem-se: 1 => Abacaxi  2 => Maca  3 => Pera.
*/

#include <stdio.h>

int main(){
	
	int opcao;
	
	printf("Escolha qual fruta deseja: 1, 2 ou 3\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: printf("1 = Abacaxi");
		break;
		case 2: printf("2 = Maca");
		break;
		case 3: printf("3 = Pera");
		break;
	default: printf("Opcao invalida");		
		
	}
	
}

