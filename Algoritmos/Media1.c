#include <stdio.h>

int main () {

    double a, b, media;
    printf("Digite sua primeira nota: ");
    scanf("%lf", &a);

    printf("Digite sua segunda nota: ");
    scanf("%lf", &b);

    media = ((a*3.5) + (b*7.5)) / 11;

    printf("Sua média é: %.5lf", media);
       
    printf("\n"); //pular última linha


}