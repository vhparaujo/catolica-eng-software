#include <stdio.h> // comandos de entrada e saida
#include <locale.h> // aceitar acentuacao
#include <string.h> // comando strcmp
#include <stdlib.h> // comando system
#include <conio.h> 

typedef struct { 
    char raca[50], foto[200], nome[100], telefone[12], email[50];
} anuncios;

typedef struct { 
    char foto[200], local[100], nome[100];
} denuncias;

void mostrarAnuncio(int anunciosFeitos, anuncios *anuncio) {
    for(int i = 0; i < anunciosFeitos - 1; i++ ) {
        system("cls");
        printf("Foto: %s\n", anuncio[i].foto);
        printf("Raca: %s\n", anuncio[i].raca);
        printf("Telefone: %s\n", anuncio[i].telefone);
        printf("Email: %s\n", anuncio[i].email);
        printf("Casa de adocao: %s\n\n", anuncio[i].nome);
        system("pause");
    }
}

void mostrarDenuncia(int denunciasFeitas, denuncias *denuncia) {
    for(int i = 0; i < denunciasFeitas - 1; i++ ) {
        system("cls");
        printf("Foto: %s\n", denuncia[i].foto);
        printf("Local: %s\n", denuncia[i].local);
        printf("Usuario: %s\n", denuncia[i].nome);
        system("pause");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // definir variaveis
    char nome[100] = "a", cpfCnpj[11] = "1", cpfCnpj2[11] = "1", telefone[12] = "1", email1[50] = "1@1", email2[50] = "1@1", senha1[100]  = "123", senha2[100] = "123";
    int menu, usuarioLogado = 0;
    int anunciosFeitos = 2, denunciasFeitas = 2;
    int posicaoParaAnunciar = 1, posicaoParaDenunciar = 1;

    anuncios anuncio[anunciosFeitos];
    strcpy(anuncio[0].raca, "vira-lata");
    strcpy(anuncio[0].foto, "sumido.com");
    strcpy(anuncio[0].nome, "ONG");
    strcpy(anuncio[0].telefone, "xxxxx-xxxx");
    strcpy(anuncio[0].email, "xxxx@xx.com");

    denuncias denuncia[denunciasFeitas];
    strcpy(denuncia[0].foto, "triste.com");
    strcpy(denuncia[0].local, "taguatinga");
    strcpy(denuncia[0].nome, "Pedro");

    // pagina inicial
    printf("=======================================\n");
    printf("RESGATE E ADOCAO DE ANIMAIS! \n");
    printf("=======================================\n");
    printf("========== SOBRE NOS ==========\n\n");
    printf("Somos um grupo do projeto da materia de Projeto Interdisciplinar 2 do curso de Engenharia de Software da Universidade Catolica de Brasilia. Temos como objetivo prestar servico a comunidade. Nosso site e uma proposta em que os usuarios possam tanto anunciar os pets para adocao, quanto divulgar animais perdidos ou em situacoes de abandono.\n\n");
    printf("Telefone: (61) 98613-1546\n");
    printf("E-mail: resgatedeanimais@gmail.com\n");
    printf("Instagram: @resgatedeanimais\n\n");
    system("pause");
    
	// menu principal do sistema
    do{
        system("cls");
        if(usuarioLogado == 0){
            printf("|1| CADASTRO: \n");
            printf("|2| LOGIN: \n");
            printf("|3| VISUALIZAR ANUNCIOS/DENUNCIAS: \n");
        }
        if(usuarioLogado == 1){
            printf("|1| ANUNCIAR/DENUNCIAR: \n");
            printf("|2| VISUALIZAR ANUNCIOS/DENUNCIAS: \n");
            printf("|3| LOGOUT: \n");
        }
        scanf("%d", &menu);
        fflush(stdin);
        
        if(menu != 1 && menu != 2 && menu != 3) {
            printf("Realize seu cadastro para acessar a plataforma, caso ja tenha feito, faça o login.\n");
            system("cls");
            printf("Digite 1 para realizar cadastro.\n");
            printf("Digite 2 para realizar login caso ja tenha cadastro na plataforma.\n");
            printf("Digite 3 caso deseje visualizar anuncios ou denuncias.\n");
            scanf("%d", &menu);
            fflush(stdin);
        }

        if(usuarioLogado == 0 && menu == 3){
            menu = 5;
        }

        if(usuarioLogado == 1 && menu == 2){
            menu = 5;
        }

        if(usuarioLogado == 1 && menu == 3){
            menu = 4;
        }

        if(usuarioLogado == 1 && menu == 1){
            menu = 3;
        }

        switch(menu)  {
            case 1: // cadastro
                menu=1;
                system("cls");

                printf("=== CADASTRO ===\n");

                printf("Nome Completo ou Nome da ONG: ");
                scanf("%s", &nome);
                fflush(stdin);
                printf("CPF ou CNPJ (caso seja ONG): ");
                scanf("%s", &cpfCnpj);
                fflush(stdin);
                printf("Telefone: ");
                scanf("%s", &telefone);
                fflush(stdin);
                printf("E-mail: ");
                scanf("%s", &email1);
                fflush(stdin);
                printf("Confirmar e-mail: ");
                scanf("%s", &email2);
                fflush(stdin);
                do{ 
                    if(strcmp(email1, email2) != 0){
                        printf("Email incompativel, digite novamente: ");
                        scanf("%s", &email1);
                        printf("Confirme novamente: ");
                        scanf("%s", &email2);
                    }
                } while(strcmp(email1, email2) != 0);

                printf("Senha: ");
                scanf("%s", &senha1);
                printf("Confirmar senha: ");
                scanf("%s", &senha2);
                do{ 
                    if(strcmp(senha1, senha2) != 0){
                        printf("Senha incompativel, digite novamente: ");
                        scanf("%s", &senha1);
                        printf("Confirme novamente: ");
                        scanf("%s", &senha2);
                    }
                } while(strcmp(senha1, senha2) != 0);

                system("cls");

                printf("==================================\n");
                printf("CADASTRO REALIZADO!\n");
                printf("==================================\n");

                system("pause");
        
            break;
            case 2: // login

                do{
                    system("cls");

                    printf("=== LOGIN ===\n");

                    printf("CPF/CNPJ: ");
                    scanf("%s", &cpfCnpj2);

                    printf("Senha: ");
                    scanf("%s", &senha1);

                    if(strcmp(cpfCnpj, cpfCnpj2) != 0 || strcmp(senha1, senha2) != 0) {
                        printf("CPF/CNPJ e/ou senha invalidos!!\n");
                        getch();
                    }

                } while(strcmp(cpfCnpj, cpfCnpj2) != 0 || strcmp(senha1, senha2) != 0);
                   
                system("cls");

                printf("==================================\n");
                printf("LOGIN EFETUADO!\n");
                printf("==================================\n\n");

                usuarioLogado = 1;

                system("pause");
                system("cls");
                
            break;
            case 3:
                system("cls");
                printf("|1| ANUNCIAR: \n");
                printf("|2| DENUNCIAR: \n");
                scanf("%d", &menu);

                switch(menu) {

                    case 1: // anunciar animal 

                        do {
                            system("cls");

                            int i = posicaoParaAnunciar;

                            for (i; i < anunciosFeitos; i++) {

                                printf("Ola %s, para anunciar um animal a adocao digite a raca deste e um link da foto do mesmo.\n", nome);
                                strcpy(anuncio[i].nome, nome);
                                printf("Raca: ");
                                scanf("%s", &anuncio[i].raca);
                                printf("Foto: ");
                                scanf("%s", &anuncio[i].foto);

                                strcpy(anuncio[i].email, email2);
                                strcpy(anuncio[i].telefone, telefone);

                                system("cls");

                                printf("Confirme as informacoes para anuncio: \nNome: %s\nEmail: %s\nTelefone: %s\nRaca: %s\nFoto: %s\n", nome, email2, telefone, anuncio[i].raca, anuncio[i].foto);
                                
                                printf("Digite 0 para confirmar: \nDigite 1 para fazer um novo anuncio:\n");
                                scanf("%d", &menu);

                                if(menu == 0) {
                                    system("cls");
                                    printf("=== ANUNCIO REALIZADO!! ===\n\n");
                                    anunciosFeitos++;
                                    posicaoParaAnunciar++;
                                    system("pause");
                                    system("cls");
                                    break; 
                                }

                                system("cls");

                            }
 
                        } while(menu != 0);

                    break;
                    case 2: // denunciar animal abandonado

                       do { 
                            system("cls");

                            int i = posicaoParaDenunciar;

                            for(i; i < denunciasFeitas; i++) {

                                printf("Ola %s, para denunciar um animal abandonado informe o local para resgate e insira um link da foto do mesmo.\n", nome);
                                strcpy(denuncia[i].nome, nome);

                                printf("Local: ");
                                scanf("%s", &denuncia[i].local);
                                printf("Foto: ");
                                scanf("%s", &denuncia[i].foto);

                                system("cls");

                                printf("Confirme as informacoes para denuncia: \nNome: %s\nLocal: %s\nFoto: %s\n", nome, denuncia[i].local, denuncia[i].foto);
                              
                                printf("Digite 0 para confirmar: \nDigite 1 para uma nova denuncia:\n");
                                scanf("%d", &menu);

                                system("cls");

                                if(menu == 0){
                                    system("cls");
                                    printf("=== DENUNCIA REALIZADA!! ===\n\n");
                                    denunciasFeitas++;
                                    posicaoParaDenunciar++;
                                    system("pause");
                                    system("cls");
                                    break;
                                }

                                system("cls");
                            }

                       } while(menu != 0);

                }

            break;
            case 4:
                system("cls");
                printf("LOGOUT EFETUADO!!\n\n");
                system("pause");
                usuarioLogado = 0;

            break;
            case 5:
                system("cls");
                printf("|1| VISUALIZAR ANUNCIOS PARA ADOCAO: \n");
                printf("|2| VISUALIZAR DENUNCIAS PARA RESGATE: \n");
                scanf("%d", &menu);

                if(menu == 1)
                mostrarAnuncio(anunciosFeitos, anuncio);
                if(menu == 2)
                mostrarDenuncia(denunciasFeitas, denuncia);
                
            break;
        }

    } while(menu != 10);
    return 0;

}
