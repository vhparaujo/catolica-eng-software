#include <stdio.h>

int main() {
	
	int a, b, c, d, diferenca;
	
	printf("Digite os 4 números: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	diferenca = ((a*b) - (c*d));
	
	printf("Diferença: %d", diferenca);
	
}
