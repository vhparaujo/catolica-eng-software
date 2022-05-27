#include <stdio.h>
#include <ctype.h>


int main(void) {
	
	char palavra[40];
	int i; 
	printf("Digite uma palavra: ");
	gets(palavra);
	
	for(i = 0; palavra[i] != 0; i++){
		palavra[i] = toupper(palavra[i]); // converte para maiusculo
	}
	printf("\n\nA palavra foi convertida para maiusculo: %s\n\n", palavra);
	system("PAUSE");
	
}

