#include <stdio.h> // Biblioteca para leitura do printf e scanf

int main() { // início
	
	int opcao;
	printf("Seleciona sua opcao: \n");
	printf("1. Soma\n2. Produto\n3. Area do Circulo\n4. Bhaskara\n");
	printf("Opção: ");
	scanf("%d", &opcao); // apenas esse pode ser utilizado no switch
	
	int n1, n2, resultado;

	// switch só recebe inteiro e char.
	// switch case
	switch(opcao) {
		case 1:
			printf("Escreva o primeiro valor: ");
			scanf("%d", &n1);

			printf("Escreva o segundo valor: ");
			scanf("%d", &n2);

		    resultado = n1 + n2; // cálculo solicitado
		    printf("SOMA = %d\n", resultado); // saída dos resultados
		; break;
		case 2:
			printf("Escreva o primeiro valor: ");
			scanf("%d", &n1);

			printf("Escreva o segundo valor: ");
			scanf("%d", &n2);

			resultado = n1*n2;
			printf("PRODUTO = %d\n", resultado);
		; break;
		case 3: {
			double raio, area; // declaração das variáveis
			double PI = 3.14159;
			printf("Digite o raio da circunferência: "); // saída para informar usuário
			scanf("%lf", &raio); // entrada de dados

			// pow( , ) serve para calcular potência
			area = (raio*raio) * PI; // cálculo da área da circunferência
			printf("A = %.4lf", area); // saída da área

		; break; }
		case 4: {
			double a, b, c, xPositivo, xNegativo; // declaração das variáveis
			printf("Informe o coeficiente A: "); // saída para informar usuário
			scanf("%lf", &a); // entrada de dados
			printf("Informe o coeficiente B: "); // saída para informar usuário
			scanf("%lf", &b); // entrada de dados
			printf("Informe o coeficiente C: "); // saída para informar usuário
			scanf("%lf", &c); // entrada de dados

			xPositivo = (-(b) + sqrt((b * b) - (4 * a * c))) / (2 * a); // cálculo do x positivo
			xNegativo = (-(b) - sqrt((b * b) - (4 * a * c))) / (2 * a); // cálculo do x negativo

			if (a == 0 || (b * b) - (4 * a * c) < 0) { // condições onde não há resultado de bhaskara
				printf("Impossível calcular"); // saída caso condição verdadeira
			} else { // execução caso falso
				printf("X Positivo = %.5lf\n", xPositivo); // saída para X positivo
				printf("X Negativo = %.5lf", xNegativo); // saída para X negativo
			}

		; break; }

		default: printf("Opção inválida\n");
	}

} // fim