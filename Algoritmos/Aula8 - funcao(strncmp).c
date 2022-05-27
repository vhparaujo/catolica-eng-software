#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	
	char str1[15] = "Curso de C";
	char str2[15] = "Curso de Java";	
	int retorno;
	
	retorno = strncmp(str1, str2, 10);
	printf("Retorno = %d\n", retorno);
	
}

