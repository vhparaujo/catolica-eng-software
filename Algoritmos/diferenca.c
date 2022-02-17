#include <stdio.h> // biblioteca para funcionar scanf e printf.

int main() { // inicio

	int a, b, c, d, diferenca; // declaração das variáveis

	printf("Digite os 4 números: "); // saída para informar usuário
	scanf("%d", &a); // entrada de dados
	scanf("%d", &b); // entrada de dados
	scanf("%d", &c); // entrada de dados
	scanf("%d", &d); // entrada de dados

	diferenca = (a*b) - (c*d); // cálculo da diferença

	printf("Diferença: %d", diferenca); // saída do cálculo

} // fim 