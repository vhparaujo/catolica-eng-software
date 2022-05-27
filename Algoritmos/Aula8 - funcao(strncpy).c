#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	char str1[15] = "Curso de C";
	char str2[15];
	
	strncpy(str2, str1, 15);
	str2[8] = '\0'; // armazena como nulo a partir de tal posicao
	printf("STR2 = %s\n", str2);
	//getch();
	
	return 0;
	
}
