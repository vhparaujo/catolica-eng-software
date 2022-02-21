#include <stdio.h> // Biblioteca para leitura do printf e scanf

int main() { // início
	
	int idade; // declaração variável
	printf("Digite sua idade: "); // saída para informar usuário
	scanf("%d", &idade); // entrada de dados
	
	//switch case - outro condicional
	switch(idade) {
		case 0 ... 10: printf("crianca\n"); break; // de 0 a 10
		case 11 ... 17: printf("adolescente\n"); break; // de 11 a 17
		case 18 ... 59: printf("adulto\n"); break; // de 18 a 59
		case 60 ... 100: printf("idoso\n"); break; // de 60 a 100
		case 101 ... 150: printf("zumbi\n"); break; // de 101 a 150
		default: printf("Idade invalida\n"); // caso n�o seja nenhum dos casos
	}

} // fim