#include <stdio.h> //biblioteca

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Sua idade é: %d", idade);

    if(idade < 18){
        printf("Você é menor de idade.");
    } else {
        printf("Você é maior de idade.");
    }
}