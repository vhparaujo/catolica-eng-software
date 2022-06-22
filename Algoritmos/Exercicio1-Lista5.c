/*Criei um programa em C, que use uma macro para retornar o valor da média aritmética de três valores
numéricos informados pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#define MEDIA(v1,v2,v3)((v1 + v2 + v3) / 3)

int main(void) {

    int v1, v2, v3;
    printf("Digite os 3 valores desejados: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    printf("A media dos valores e: %d", MEDIA(v1, v2, v3));

}
