#include <stdio.h>

int main(void){
	
	float vetor[10];
	int x;
	
	for(x = 0; x < 10; x++){
		vetor[x] = x * x + 5;
	}
	for(x = 0; x < 10; x++){
		printf("Vetor [%d] = %2.1f\n", x + 1, vetor[x]);
		//getch();
	}
	
	
}

