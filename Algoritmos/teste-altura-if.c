#include <stdio.h> // biblioteca para funcionar scanf e printf

int main () { // inicio 

	char sexo; // declaracao variavel
	double altura; // declaracao variavel
	
	printf("Escreva M para sexo masculino ou F para sexo feminino: "); // saida para informar usuario
	scanf("%c", &sexo); // entrada de dados
	
	printf("Escreva sua altura: "); // saida para informar usuario
	scanf("%lf", &altura); // entrada de dados
	
	// estrutura if - condicional 
	if (sexo == 'M') { 
		printf("Sexo masculino e ");
	} else if (sexo == 'F') {
		printf("Sexo feminino e ");
	}
	
	// estrutura if - condicional 
	if (altura < 1.60) {
		printf("baixo");
	} else if (altura < 1.75) {
		printf("medio");
	} else {
		printf("alto");
	}

} // fim
