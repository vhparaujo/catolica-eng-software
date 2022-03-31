/*Encontrar o dobro de um numero caso ele seja positivo e o seu
triplo caso seja negativo, imprimindo o resultado */

#include <stdio.h>

int main() {

int n;

printf("Escreva o numero desejado: ");
scanf("%d", &n);

if(n > 0) {
    n *= 2;
} else if (n < 0){
    n *= 3;
} else {
    printf("O numero e 0.\n");
}

if(n > 0 || n < 0){
    printf("%d\n", n);
}

}