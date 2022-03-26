#include <stdio.h> // biblioteca para funcionar scanf e printf
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int main() { // inicio
	
	setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
	
	printf("Programa para verificacao de idade!\n");
	int i, idade; // variavel
	
	// laco for para repeticao.
	for(i = 0; i < 3; i++) {
		printf("Digite a idade: "); // saida para informar usuario
		scanf("%d", &idade); // entrada de dados
		if(idade <= 18) // condicional
			printf("Jovem\n"); 
			else printf("Adulto\n");
		
	}

} // fim
