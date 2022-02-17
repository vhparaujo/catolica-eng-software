#include <stdio.h> // biblioteca para funcionar scanf e printf

int main() { // inicio

    int a,b,x; // declaração das variáveis
    
    printf("Digite o primeiro número: "); // saída para informar usuário
    scanf("%d", &a); // entrada de dados

    printf("Digite o segundo número: "); // saída para informar usuário
    scanf("%d", &b); // entrada de dados

    x = a + b; // cálculo solicitado
    printf("X = %d\n", x); // saída dos resultados
    printf("X = %d\n", &x); // saída endereço de memória do tipo inteiro
    printf("X = %x\n", &x); // saída endereço de memória em hexadecimal

} // fim