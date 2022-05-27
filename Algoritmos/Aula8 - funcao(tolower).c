#include <stdio.h>
#include <ctype.h>


int main(void) {
	
	char palavra[40];
	int i; 
	printf("Digite uma palavra: ");
	gets(palavra);
	
	for(i = 0; palavra[i] != 0; i++){
		palavra[i] = tolower(palavra[i]); // converte para minusculo
	}
	printf("\n\nA palavra foi convertida para minusculo: %s\n\n", palavra);
	system("PAUSE");
	
}
