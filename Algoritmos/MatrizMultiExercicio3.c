/* Elabore um programa que armazene quatro notas de um aluno variando de 0 a 10 sem desprezar as casas
decimais, calcule a média e em seguida exiba o resultado “Aprovado”, “Reprovado” ou “Em recuperação”.
Regras: Aprovado=7.0, Reprovado<=3.0 e em recuperação >3 e <7. */

#include <stdio.h>

int main(){

float somatorio = 0, nota[4], media;
int x, y;
char nome[50];

for(y = 0; y < 4; y++){
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    for(x = 0; x < 4; x++){
        printf("Digite suas 4 notas: ");
        scanf("%f",&nota[x]);
        somatorio = somatorio + nota[x];
        if(nota[x] < 0 || nota[x] > 10){
            printf("Nota invalida");
            printf("\n");
            return 0;
        }
    }


media = somatorio / 4;

printf("\n");

if(media <= 3){
    printf("%s voce foi reprovado por ter tirado media final %.1f", nome, media);
} else if(media > 3 && media < 7){
    printf("%s voce esta em recuperacao por ter tirado media final %.1f", nome, media);
} else {
    printf("%s voce foi aprovado por ter tirado media final %.1f", nome, media);
}

printf("\n\n");

nota[x] = 0, somatorio = 0;


}

printf("\n\n");

}
