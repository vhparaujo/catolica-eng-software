/*Faca um programa para receber um número qualquer e informar
na tela se é par ou impar.*/

#include <stdio.h>
#include <locale.h> //biblioteca para uso da acentuacao dentro do printf.

int main() {

setlocale(LC_ALL, "Portuguese"); //habilita a acentuacao para o portugues e esta ligada a biblioteca <locale.h>

 int n;
 printf("Escreva um numero qualquer para saber se ele e par ou impar: ");

 scanf("%d", &n);

 if(n % 2 == 0) {
     printf("O numero %d e par!!!", n);
 } else {
     printf("O %d e impar", n);
 }

 printf("\n");

}
