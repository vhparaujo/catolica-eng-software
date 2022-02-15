#include <stdio.h>

int main() {
	
    int a,b,x;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    x = a + b;
    printf("X = %d ", x);
    printf("X = %d\n", &x);
    printf("X = %x\n", &x);
    
}
