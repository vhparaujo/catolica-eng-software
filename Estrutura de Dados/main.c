#include <stdio.h>

int main(int argc, char *argv[]) {

    int n, i, resultado = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 2; i < n / 2; i++){
        if(n % i == 0){
            resultado++;
            break;
        }
    }

    if(resultado == 0) {
        printf("O numero %d eh primo", n);
    } else {
        printf("O numero %d nao eh primo", n);
    }

    return 0;

}
