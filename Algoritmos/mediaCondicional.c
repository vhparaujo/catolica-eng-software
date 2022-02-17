#include <stdio.h> // biblioteca para funcionar scanf e printf
#define MEDIA 9.5

int main() { // início

    double nota1, nota2, mediaAluno;

    printf("Digite a sua primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%lf", &nota2);

    mediaAluno = (nota1 + nota2) / 2;

    printf("Sua média final foi: %.1lf\n", mediaAluno);

    if(mediaAluno > MEDIA)
        printf("Parabéns! Aprovado!");
        else printf("Tente novamente! Reprovado!");
        

} // fim