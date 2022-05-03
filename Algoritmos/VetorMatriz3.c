#include <stdio.h>
#define MAX 4

int main(void) {
	
	float soma, notas[MAX];
	int i;
	
	for(i = 0, soma = 0; i < MAX; soma += notas[i++]) {
		printf("Nota %d: ", i + 1);
		scanf("%f", &notas[i]);
		
	}
	
	printf("\n");
	printf("Media: %.1f ", soma / MAX);
	
}

