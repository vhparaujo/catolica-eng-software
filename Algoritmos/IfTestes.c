#include <stdio.h>

int main() {
	
	int num, opcao;
	
	printf("Escolha quantas vezes deseja repetir");
	scanf("%d", opcao);
	
	do{
		printf("Digite um numero entre 1 e 7 para descobrir o dia da semana: ");
		scanf("%d", &num);
	
		switch(num) {
			case 1:
				printf("\n\nDomingo");
				break;
				
			case 2:
				printf("\n\nSegunda");
				break;
			
			case 3:
				printf("\n\nTerca");
				break;
				
			case 4:
				printf("\n\nQuarta");
				break;
				
			case 5:
				printf("\n\nQuinta");
				break;
				
			case 6:
				printf("\n\nSexta");
				break;
				
			case 7:
				printf("\n\nSabado");
				break;
					
			default: 
			printf("\n\nA semana so tem 7 dias");	
			
		}
	} while(num < opcao);
	
		
}
