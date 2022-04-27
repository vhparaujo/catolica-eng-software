#include <stdio.h>

int main(){

float somatorio = 0, nota[4], media;
int x;

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
    printf("Reprovado por ter tirado media final %.1f", media);
} else if(media > 3 && media < 7){
    printf("Em recuperacao por ter tirado media final %.1f", media);
} else {
    printf("Aprovado por ter tirado media final %.1f", media);
}

printf("\n\n");

}