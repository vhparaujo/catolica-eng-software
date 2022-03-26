#include <stdio.h> // biblioteca para leitura do printf e scanf
#include <locale.h> // biblioteca para uso da acentuacao dentro do printf

int main() { // inicio
	
	setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
	
	char opcao; // declaracao das variaveis
	int r, a = 2, b = 5; // declaracao das variaveis
	
	// laco do while
	do {
		printf("Somar\n");
		r = a + b;
		printf("%d\n", r);
		printf("Deseja realizar um novo cálculo? ");
		scanf("%c", &opcao);
		fflush(stdin);
	} while(opcao == 'S' || opcao == 's');
	
} // fim
