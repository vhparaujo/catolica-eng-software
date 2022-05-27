#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char nome[40];
	
	puts("Digite seu nome: ");
	gets(nome);
	puts("Ola, ");
	puts(nome);
	puts("Puts sempre salta uma linha. ");
	puts(&nome[4]);
	
}

