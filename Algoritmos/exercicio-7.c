/*Faca um programa que leia uma variavel e some 5 caso seja par
ou some 8 caso seja ímpar, imprimir o resultado desta operacao*/

#include <stdio.h> 

int main() {

int n, d;

 printf("Escreva um numero: ");
 scanf("%d", &n);

 if(n % 2 == 0) {
     d = n;
     n += 5;
     printf("O numero %d por ser par foi somado com 5 e resultou em: %d", d, n);
 } else {
     d = n;
     n += 8;
     printf("O numero %d por ser impar foi somado com 8 e resultou em: %d", d, n);
 }

 printf("\n");

}