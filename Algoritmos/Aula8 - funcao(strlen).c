#include <stdio.h>
#include <string.h>

int main() {
	
	char ch[] = {'a', 'b', 'c', 'd', '\0'}; // \0 armazena como nulo, nao conta.
	printf("Tamanho da string e: %d", strlen(ch));
	
	return 0;
	
}

