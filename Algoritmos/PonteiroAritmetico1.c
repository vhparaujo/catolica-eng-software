#include <stdio.h>
#include <conio.h>

int main(void) {
	
	char *pChar, c; // ponteiro para caracter
	int *pInt, i; // ponteiro para inteiro
	float *pFloat, f; // ponteiro para float
	
	// atribui 90 ao ponteiro
	pChar = (char *) 90; // atribui o endereco 90 ao ponteiro
	pChar = pChar + 2; 
	
	// atribui 80 ao ponteiro
	pInt = (int *) 80; // atribui o endereco 80 ao ponteiro
	pInt += 1; 
	
	// atribui 70 ao ponteiro
	pFloat = (float *) 70; // atribui o endereco 70 ao ponteiro
	pFloat += 2; 
	
	printf("\npChar %%c = %c", pChar);
	printf("\npInt %%d = %d", pInt);
	printf("\npFloat %%f = %f", pFloat);
	printf("\n\nFormato para ponteiro\n\n");
	printf("\tPonteiro pChar %%p = %p", pChar);
	printf("\n\tPonteiro pInt %%p = %p", pInt);
	printf("\n\tPonteiro pFloat %%p = %p", pFloat);
	
	getch();

}
