#include <stdio.h>

int main(){

int x, vetor[11], contadorIdades = 0;
float somatorio = 0, media;

for(x = 1; x <= 10; x++){
    printf("Digite idade %d: ", x);
    scanf("%d", &vetor[x]);
    somatorio = somatorio + vetor[x];
        if(vetor[x] > 18){
        contadorIdades++;
        }
}

printf("\n");

printf("Tem %d pessoas com idades maiores que 18 anos.", contadorIdades);
printf("\n\n");

media = somatorio / 10;
printf("Media das idades: %.1f", media);

printf("\n\n");

for(x = 1; x <= 10; x++){
    if(vetor[x] > 18){
      printf("Posicao %d da matriz tem idade maior que 18, sendo %d.\n", x, vetor[x]);
    }
}

printf("\n");

}