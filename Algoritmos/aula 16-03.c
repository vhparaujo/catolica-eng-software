#include <stdio.h> // biblioteca para funcionar scanf e printf

void SUBTRACAO (int *v) { // funcao para executar calculo de subtracao
    *v = *v - 2; // calcula de subtracao
    printf("%d\n", *v); // saida do valor da subtracao
}

void IMPRIMIR (){ // funcao para imprimir hello world
   printf("Hello World\n"); // saida hello world
}

int SOMAR () { // funcao para calculo de soma sem parametro
    int a, b, resultado;
    a = 2; 
    b = 3;
    resultado = a + b; 
    return resultado;
}

int SOMA2(int a, int b){ // funcao para somar com declaracao de parametros
    int resultado;
    resultado = a + b;
    return resultado;
}

int main() {

    int a = 10;
    SUBTRACAO(&a); // chamada da funcao
    printf("%d\n", a); // saida do resultado
    
    IMPRIMIR(); // chamada da funcao

    int r = SOMAR(); // chamada da funcao
    printf("%d\n", r); // saida do resultado
    
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    int r2 = SOMA2(n1, n2); // chamada da funcao passando os parametros
    printf("Resultado da soma = %d\n", r2);
    
} // fim 
