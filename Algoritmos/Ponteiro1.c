#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	
	// declaracao das variaveis
	int agir = 5;
	int *pAgir = 0;
	
	// demonstracao da troca
	printf("Troca de valores\n\n");
	printf("agir = %d\n", agir);
	
	pAgir = &agir;
	printf("*pAgir(agir) = %d\n", *pAgir);
	
	// primeira troca de valores
	printf("\n-- *pAgir recebe 7 --\n");
	*pAgir = 7;
	printf("*pAgir = %d\n", *pAgir);
	printf("agir = %d\n", agir);
	
	// segunda troca de valores
	printf("\n-- agir recebe 9 --\n");
	agir = 9;
	printf("*pAgir = %d\n", *pAgir);
	printf("agir = %d\n", agir);
	
}
