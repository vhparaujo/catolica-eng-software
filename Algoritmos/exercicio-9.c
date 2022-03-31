/* O IMC – Indice de Massa Corporal e um criterio da Organizacao
Mundial de Saude para dar uma indicacao sobre a condicao de
peso de uma pessoa adulta. A formula e IMC = peso / ( altura *
altura). Elabore um programa que leia o peso e a altura de um
adulto e mostre sua condicao de acordo com a tabela abaixo.
IMC em adultos Condicao
● Abaixo de 18,5 Abaixo do peso
● Entre 18,5 e 25 Peso normal
● Entre 25 e 30 Acima do peso
● Acima de 30 obeso */

#include <stdio.h>

int main () { 

double peso, altura, imc;

printf("Digite seu peso: ");
scanf("%lf", &peso);

printf("Digite sua altura: ");
scanf("%lf", &altura);

imc = peso / (altura*altura);

if(imc < 18.5) {
    printf("Abaixo do peso. Seu imc e: %.2lf", imc);
} else if(imc < 25) {
    printf("Peso normal. Seu imc e: %.2lf", imc);
} else if(imc < 30){
    printf("Acima do peso. Seu imc e: %.2lf", imc);
} else {
    printf("Obeso. Seu imc e: %.2lf", imc);
}

printf("\n");

}