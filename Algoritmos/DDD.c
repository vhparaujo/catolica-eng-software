#include <stdio.h> // Biblioteca para leitura do printf e scanf

int main() { // início
	
	int ddd; // declaraçao da variável
	
	printf("Digite seu DDD: "); // Saída para informar usuário
	scanf("%d", &ddd); // entrada de dados
	
	// condicional - if "dentro" de if
	if(ddd == 61) 
		printf("Brasilia");
		else if (ddd == 71)
			printf("Salvador");
			else if (ddd == 11) 
				printf("São Paulo");
				else if (ddd == 21)
					printf("Rio de Janeiro");
					else if (ddd == 32) 
						printf("Juiz de Fora");
						else if (ddd == 19)
							printf("Campinas");
							else if (ddd == 27)
								printf("Vitoria");
								else if (ddd == 31)
									printf("Belo Horizonte");
									else 
										printf("DDD nao encontrado.");
										
} // fim
