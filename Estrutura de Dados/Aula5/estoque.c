#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int adicionar_produto(Produto *produtos, int qtdProdutos)
{
    Produto p;
    int existe = 0;
    printf("\n");
    printf("Digite o nome do produto\n");
    scanf("%s", p.nome);
    printf("Digite o ID do produto\n");
    scanf("%d", &p.id);
    printf("Digite a quantidade do produto\n");
    scanf("%d", &p.qtd);

    for(int i = 0; i < qtdProdutos; i++) {
        if(produtos[i].id == p.id){
            printf("ID ja cadastrado\n");
            existe = 1;
        }
    }

   if(!existe){ 
    produtos[qtdProdutos] = p;
    return 1;
   }
   
   return 0;
    
    system("clear");
}

void listar_produtos(Produto *produtos, int qtdProdutos)
{
    printf("\n");
    for (int i = 0; i < qtdProdutos; i++)
    {
        printf("Produto:\nId = %d\nNome = %s\nQtd = %d\n\n", produtos[i].id, produtos[i].nome, produtos[i].qtd);
    }
    
}

void editar_produto(Produto *produtos, int qtdProdutos)
{
    int id;
    int existe = 0;
    listar_produtos(produtos, qtdProdutos);
    printf("\nInforme o ID do produto\n");
    scanf("%d", &id);
    for (int i = 0; i < qtdProdutos; i++)
    {
        if (produtos[i].id == id)
        {
            existe = 1;
            printf("\nInforme a quantidade atual\n");
            scanf("%d", &produtos[i].qtd);
        }
    }
    if(existe == 0){
        printf("Produto com id %d nao encontrado", id);
    }
}

int remover_produto(Produto *produtos, int qtdProdutos){
    int id;
    int removeu = 0;
    //listar_produtos(produtos, qtdProdutos);
    printf("\nInforme o ID do produto\n");
    scanf("%d", &id);

    for(int i = 0; i < qtdProdutos; i++){
        if(produtos[i].id == id){
            produtos[i] = produtos[qtdProdutos - 1];
            removeu = -1;
        }
    }
    return removeu;

}
