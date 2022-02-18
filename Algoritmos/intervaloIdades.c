#include <stdio.h> // Biblioteca para leitura do printf e scanf

int main() { // início

	int idade; // declaraçao da variável
	
	printf("Digite sua idade: "); // saída para informar usuário
	scanf("%d", &idade); // entrada de dados
	
	// condicional - if "dentro" de if
	if(0 <= idade && idade <= 10)
		printf("crianca");
		else if (10 < idade &&  idade < 18)
			printf("adolescente");
			else if (18 <= idade &&  idade < 60)
				printf("adulto");
				else if (60 <= idade &&  idade < 100)
					printf("idoso");
					else if (100 <= idade &&  idade <= 150)
						printf("zumbi");
						else 
							printf("idade invalida");
			
} // fim
