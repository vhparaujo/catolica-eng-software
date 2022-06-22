#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char l1, l2;
	
	printf("Insira um caractere: ");
	scanf("%c", &l1);
	fflush(stdin);
	printf("Insira outro caractere: ");
	scanf("%c", &l2);
	printf("Voce digitou: '%c' e '%c'", l1, l2);
		
	return 0;
	
}
