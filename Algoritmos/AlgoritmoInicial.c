#include <stdio.h> //biblioteca

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Sua idade é: %d", idade, "\n");

    if(idade < 18){
        printf("\nVocê é menor de idade.");
    } else {
        printf("\nVocê é maior de idade.");
    }

    printf("\n"); //pular última linha
}
