#include <stdio.h> // Biblioteca para leitura do printf e scanf

int main() { // início

	int idade; // declaração da variável
	
	printf("Digite sua idade: "); // saída para informar usuário
	scanf("%d", &idade); // entrada de dados
	
	// condicional - if "dentro" de if
	if(0 <= idade && idade <= 10)
		printf("crianca");
		else if (idade < 18)
			printf("adolescente");
			else if (idade < 60)
				printf("adulto");
				else if (idade < 100)
					printf("idoso");
					else if (idade <= 150)
						printf("zumbi");
						else 
							printf("idade invalida");
			
} // fim
