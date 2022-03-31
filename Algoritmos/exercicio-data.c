/*Faca um programa em C que leia uma data qualquer (dia, mes e
ano) e calcule a data do proximo dia. Lembre-se que em anos
bissextos o mes de fevereiro tem 29 dias. (Dica: um ano e bissexto
quando for divisivel por 4). */

#include <stdio.h> 

int main () { // inicio
	
	int dia, mes, ano, proximoDia; // declaracao das variaveis
	
	printf("Digite o dia: "); 
	scanf("%d", &dia);
	printf("Digite o mes: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if(dia <= 0 || mes <= 0 || ano <= 0){ // condicao para dias, meses e anos nao poderem ser negativos
		printf("Data inexistente");
		return 0;
	}
	
	if(dia > 31 || mes > 12){ // mes nao pode ter mais de 31 dias e ano nao tem mais que 12 meses
		printf("Data inexistente");
		return 0;
	}
	
	// sequencia de if e else if para condicoes de diferenciacao entre os meses de 30 e 31 dias, alem de validar ano bissexto
	if(ano % 4 == 0 && mes == 2 && dia > 29){
		printf("Nao ha dia %d no mes 2", dia);
		return 0;
	} else if(ano % 4 != 0 && mes == 2 && dia == 29){
		printf("Nao ha dia 29 no mes 2 quando nao for ano bissexto", dia);
		return 0;
	} else if(ano % 4 != 0 && mes == 2 && dia > 29){
		printf("Nao ha dia %d no mes 2", dia);
		return 0;
	} else if(mes == 4 && dia > 30){
		printf("Nao ha dia %d no mes 4", dia);
		return 0;
	} else if(mes == 6 && dia > 30){
		printf("Nao ha dia %d no mes 6", dia);
		return 0;
	} else if(mes == 9 && dia > 30){
		printf("Nao ha dia %d no mes 9", dia);
		return 0;
	} else if(mes == 11 && dia > 30){
		printf("Nao ha dia %d no mes 11", dia);
		return 0;
	}
	
	proximoDia = dia + 1; // variavel que permite mostrar o proximo dia do calendario
	
	// sequencia de if para mostrar usuario proxima data
	if(mes == 1 && dia == 31) {
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(ano % 4 == 0 && mes == 2 && dia == 29){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(ano % 4 != 0 && mes == 2 && dia == 28){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 3 && dia == 31){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 4 && dia == 30){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 5 && dia == 31){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 6 && dia == 30){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 7 && dia == 31){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 8 && dia == 31){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 9 && dia == 30){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 10 && dia == 31){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 11 && dia == 30){
		mes = mes + 1;
		proximoDia = 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else if(mes == 12 && dia == 31){
		mes = 1;
		proximoDia = 1;
		ano = ano + 1;
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	} else {
		printf("Proxima data: %d-%d-%d", proximoDia, mes, ano);
	}
	
}
