/* Escreva um programa que le dois valores booleanos (logicos) e
entao determina se ambos sao VERDADEIROS ou FALSOS. */

#include <stdio.h>
#include <stdbool.h>

int main() {

//caso 1
bool a = false;
bool b = true;

if(!(a) == b){
    printf("Ambos sao verdadeiros.\n");
} 

if(a == !(b)){
    printf("Ambos sao falsos.\n");
}

//caso 2
bool c = false;
bool d = true;

if(c == false && d == true){
    printf("Ambos sao verdadeiros.\n");
}

if(c == true && d == false) {
    printf("Ambos sao falsos.\n");
}

}
