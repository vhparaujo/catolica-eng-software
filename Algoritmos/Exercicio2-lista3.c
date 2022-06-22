/*Desenvolva um programa que solicite o nome de cinco equipamentos
de informática. Compare os cinco nomes fornecidos para verificar se existe
algum solicitado em duplicidade e informe o usuário somente o nome
duplicado.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    int resultado, vetor[25], i, j, h;

    char nomeEquipamentos[5][15];
     
    
    //For para armazenar as 5 palavras
    for(i = 0; i < 5; i++) {

        printf("Digite o nome do equipamento: ");
        gets(nomeEquipamentos[i]);
    }

    int qtdAComparar = 4;
    int qtdNomesIguais;
    int redefineJ = 1;

    for (int i = 0; i < sizeof(nomeEquipamentos); i++) 
    {
        if(i == 1) redefineJ = 2;
        if(i == 2) redefineJ = 3;
        if(i == 3) redefineJ = 4;

        for (int j = redefineJ; j <= qtdAComparar; j++)
        {
            if(i == 4) break;

            resultado = strncmp(nomeEquipamentos[i], nomeEquipamentos[j], strlen(nomeEquipamentos[i]));       
            if(resultado == 0) 
            {
                qtdNomesIguais++;
                printf("O seguinte foi encontrado em duplicidade: %s", nomeEquipamentos[j]);
            }

            // debug
            //printf("%s ", nomeEquipamentos[i]);
            //printf("%s\n", nomeEquipamentos[j]);
            
        }
        if(i == 4) break;

        //debug
        //printf("%d\n", qtdNomesIguais);
        
    }
    
    getchar();
    
}
