
#include <stdio.h>

/*nome, matricula, cpf e curso*/
// fgets(str, tamanho, stdin);

int main() {
	
	char nome[20], curso[50], matricula[15], cpf[12];
	int i, n;
	
	printf("Quantas alunos deseja cadastrar? ");
	scanf("%d", &n);
	fflush(stdin);

	for(i=0; i < n; i++){
		printf("Digite seu nome: ");
		fgets(nome, 19, stdin);
		fflush(stdin);
		printf("Digite sua matricula: ");
		fgets(matricula, 14, stdin);
		fflush(stdin);
		printf("Digite seu curso: ");
		fgets(curso, 49, stdin);
		fflush(stdin);
		printf("Digite seu cpf: ");
		fgets(cpf, 11, stdin);
		fflush(stdin);
		printf("Nome do aluno: %s", nome);
		printf("Matricula do aluno: %s", matricula);
		printf("Curso do aluno: %s", curso);
		printf("CPF do aluno: %s\n", cpf);
		
	}
	
return 0;
	
}
