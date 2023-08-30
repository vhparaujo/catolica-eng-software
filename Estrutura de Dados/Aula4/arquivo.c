#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    FILE *fp;

    fp = fopen("teste.txt", "a");

    if(fp == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    char c;

    do{
        c = fgetc(fp);
        printf("%c", c);
    } while(c != EOF);

    //fprintf(fp, "novo texto");

    fclose(fp);
    exit(0);

}