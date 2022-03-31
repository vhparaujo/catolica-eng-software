#include <stdio.h> // biblioteca para leitura do printf e scanf
#include <locale.h> // biblioteca para uso da acentuacao dentro do printf.
#include <math.h> // biblioteca matematica

int main() { // inicio

	setlocale(LC_ALL, "Portuguese"); // habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
	
	int opcao; // declaracao das variaveis
	int n1, n2, resultado; // declaracao das variaveis
	int i; // declaracao das variaveis
	
	// laco for para repeticao.
	for(i = 0; i < 4; i++) {
		printf("\nSeleciona sua opcao: \n");
		printf("1. Soma\n2. Produto\n3. Area do Circulo\n4. Bhaskara\n");
		printf("Opção: ");
		scanf("%d", &opcao); // apenas esse pode ser utilizado no switch
	
		// switch so recebe inteiro e char.
		// switch case
		switch(opcao) {
			case 1:
				printf("Escreva o primeiro valor: ");
				scanf("%d", &n1);
	
				printf("Escreva o segundo valor: ");
				scanf("%d", &n2);
	
			    resultado = n1 + n2; // calculo solicitado
			    printf("SOMA = %d\n", resultado); // saida dos resultados
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
				double raio, area; // declaracao das variaveis
				double PI = 3.14159;
				printf("Digite o raio da circunfer�ncia: "); // saida para informar usuario
				scanf("%lf", &raio); // entrada de dados
	
				// pow( , ) serve para calcular potencia
				area = (raio*raio) * PI; // calculo da area da circunferencia
				printf("A = %.4lf\n", area); // saida da area
	
			; break; }
			case 4: {
				double a, b, c, xPositivo, xNegativo; // declaracao das variaveis
				printf("Informe o coeficiente A: "); // saida para informar usuario
				scanf("%lf", &a); // entrada de dados
				printf("Informe o coeficiente B: "); // saida para informar usuario
				scanf("%lf", &b); // entrada de dados
				printf("Informe o coeficiente C: "); // saida para informar usuario
				scanf("%lf", &c); // entrada de dados
	
				xPositivo = (-(b) + sqrt((b * b) - (4 * a * c))) / (2 * a); // calculo do x positivo
				xNegativo = (-(b) - sqrt((b * b) - (4 * a * c))) / (2 * a); // calculo do x negativo
	
				if (a == 0 || (b * b) - (4 * a * c) < 0) { // condicoes onde nao ha resultado de bhaskara
					printf("Impossivel calcular\n"); // saida caso condicao verdadeira
				} else { // execucao caso falso
					printf("X Positivo = %.5lf\n", xPositivo); // saida para X positivo
					printf("X Negativo = %.5lf\n", xNegativo); // saida para X negativo
				}
	
			; break; }
	
			default: printf("Opcao invalida\n");
		}
	
	}

} // fim
