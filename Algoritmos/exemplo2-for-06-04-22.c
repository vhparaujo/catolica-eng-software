
#include <stdio.h>

int main() {
	
	char nome[30];
	int i, n, idade;
	
	for(i=0; i < 3; i++){
		printf("Digite seu nome: ");
		fgets(nome, 29, stdin);
		//scanf("%s", &nome);
		fflush(stdin);
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		fflush(stdin);
		printf("Nome da pessoa: %s", nome);
		printf("Idade da pessoa: %d\n", idade);
		
	}
	
return 0;
	
}
