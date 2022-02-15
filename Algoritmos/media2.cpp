#include <stdio.h>

int main () {
    
    double a, b, c, media;
    printf("Digite sua primeira nota: ");
    scanf("%lf", &a);
    
    printf("Digite sua segunda nota: ");
    scanf("%lf", &b);
    
    printf("Digite sua segunda nota: ");
    scanf("%lf", &c);
    
    media = ((a*2) + (b*3) + (c*5)) / 10;
    
    printf("Sua média é: %.1lf", media);
    
}
