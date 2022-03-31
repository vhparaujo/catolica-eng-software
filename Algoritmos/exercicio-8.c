/*Escreva um programa que leia tres valores inteiros e diferentes e
mostre-os em ordem decrescente.*/

/* 1 - caso a, b, c  |  2 - caso b, a, c  |  3 - caso c, a, b  |  4 - caso a, c, b 
   | 5 - caso b, c, a  |  6 - caso c, b, a 
*/

#include <stdio.h>

int main () { 

int a, b, c;

printf("Escreva 3 valores inteiros: ");
scanf("%d %d %d", &a, &b, &c);

if(a == b || a == c || b == c){
    printf("Erro!! Ha valores iguais.");
} else if(a > b && a > c && b > c){
    printf("%d %d %d", a, b, c);
} else if(b > a && b > c && a > c){
    printf("%d %d %d", b, a, c);
} else if(c > a && c > b && a > b){
    printf("%d %d %d", c, a, b);
} else if(a > b && a > c && c > b){
    printf("%d %d %d", a, c, b);
} else if(b > a && b > c && c > a){
    printf("%d %d %d", b, c, a);
} else if(c > a && c > b && b > a){
    printf("%d %d %d", c, b, a);
}

printf("\n");
 
}



/*       *******Outra implementacao************

 int i, j, a, n, number[30];

printf("Enter the value of N \n");
scanf("%d", &n);
printf("Enter the numbers \n");
for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
for (i = 0; i < n; ++i)
{
    for (j = i + 1; j < n; ++j)
    {
        if (number[i] > number[j])
        {
            a =  number[i];
            number[i] = number[j];
            number[j] = a;
        }
    }
}
printf("The numbers arranged in ascending order are given below \n");
for (i = 0; i < n; ++i)
    printf("%d\n", number[i]); 


    i = i + 1    i++
    i = 1 + i    ++i

    0 = 0 + 1  i++
    0 = 1 + 0  ++i

*/