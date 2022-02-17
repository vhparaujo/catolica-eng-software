#include <stdio.h> // biblioteca para funcionar scanf e printf

int main() { // inicio 

    int idade; // declaração variável idade
    
    printf("Digite sua idade: "); // saída para informar usuário
    scanf("%d",&idade); // entrada de dados
    printf("Sua idade é: %d", idade, "\n"); // saída para informar usuário

    if(idade < 18){ // condicional
        printf("\nVocê é menor de idade."); // saída para informar usuário
    } else {
        printf("\nVocê é maior de idade."); // saída para informar usuário
    }

    printf("\n"); // pular última linha

} // fim 