/*Leia o nome completo de 2 pessoas e apresente o primeiro nome
somente em letras maiúsculas e na linha seguinte, com uma tabulação, o
segundo nome em letras minúsculas, solicitando outros nomes caso o
usuário deseje. Somente devem ser usadas funções do padrão ANSI da
linguagem C.*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    char nome1[50], nome2[50], nome3[50];
    int i, opcao;

    printf("Escreva seu primeiro nome: ");
    gets(nome1);

    printf("Escreva seu segundo nome: ");
    gets(nome2);

    for(i = 0; nome1[i] != 0; i++) {
        nome1[i] = toupper(nome1[i]);
    }

    for(i = 0; nome2[i] != 0; i++) {
        nome2[i] = tolower(nome2[i]);
    }

    printf("Primeiro nome em maiusculo: %s\n", nome1);
    printf("Segundo nome em minusculo: %s\n", nome2);

    printf("Caso queira colocar mais um sobrenome digite 1, caso nao, digite 2: ");
    scanf("%d", &opcao);
    getchar();

    switch(opcao){
        case 1:
            printf("Escreva o proximo sobrenome: ");
            gets(nome3);
            printf("Nome completo: %s %s %s\n", nome1, nome2, nome3);
        break;
        case 2: 
            printf("Finalizou!!\n");
        break;

    }
    
}
