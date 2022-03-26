#include <stdio.h> // biblioteca para funcionar scanf e printf
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int main() { // inicio
	
	setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
	
	int i; // variavel
	
	// laco for para repeticao.
	for(i = 0; i <= 10; i++) {
		printf("Vou tirar nota maxima em todas as disciplinas nesse semestre e em todos os outros.\n");
		
	}

} // fim
