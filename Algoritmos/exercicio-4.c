/* Faca um programa que leia dois valores inteiros A e B se os
valores forem iguais devera se somar os dois, caso contrario
multiplique A por B. Ao final de qualquer um dos calculos deve-se
atribuir o resultado para uma variavel C e mostrar seu conteudo na
tela */

#include <stdio.h>
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int CALCULO(int a, int b) {

    setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>
    
    int resultado;
    if(a == b){
        resultado = a + b;
        printf("O resultado da soma e: %d\n", resultado);
    } else {
        resultado = a * b;
        printf("O resultado da multiplicacao e: %d\n", resultado);
    }
//return resultado;

}

int main() {

int a, b;

printf("Escreva o valor de a: ");
scanf("%d", &a);
printf("Escreva o valor de b: ");
scanf("%d", &b);
int r = CALCULO(a, b);
 
}