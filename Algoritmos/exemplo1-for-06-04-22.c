#include <stdio.h>

int main() {
	
	int i, somatorio = 0;
	
	for (i=0; i < 10; i++){
		printf("%d\n", i);
		somatorio = somatorio + i;
	}
	
	printf("O somatorio do loop e: %d", somatorio);
	
	
	
}
