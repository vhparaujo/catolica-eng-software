#include <stdio.h> // Biblioteca para leitura do printf e scanf

int main() { // inicio
	
	char letra, unicaPalavra[50], duasPalavras[50];
	
	printf("Digite uma letra: ");
	scanf("%c", &letra); // apenas esse pode ser utilizado no switch
	fflush(stdin); // limpar buffer (apenas para char e string)
	
	printf("Digite uma palavra: ");
	scanf("%s", &unicaPalavra);
	fflush(stdin);

	printf("Digite duas palavras: ");
 	fgets(&duasPalavras, 50, stdin); //permite colocar espaco

	printf("Letra: %c\n", letra);
	printf("Unica palavra: %s\n", unicaPalavra);
	printf("Duas palavras: %s", duasPalavras);

	// switch so recebe inteiro e char.
	// switch case
	switch(letra) {
		case 'S': printf("digitou S\n"); break;
		case 's': printf("digitou s\n"); break;
		case 'n': printf("digitou n\n"); break;
		case 'N': printf("digitou N\n"); break;
		default: printf("Letra invalida\n");
	}

} // fim 
