#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_CARTAS 40
#define NUM_NAIPES 4
#define CARTAS_POR_NAIPE 10

typedef struct {
    int valor;
    char naipe;
} Carta;

typedef struct {
    Carta mao[3];
    int pontos;
    int vitoriasMao;
} Jogador;

Carta baralho[NUMERO_DE_CARTAS];
Jogador jogador1, jogador2;

int rodada = 1, maoAtual = 1;
int valorRodada = 1;
int aumento[] = {1, 3, 6, 9};
int aumentoAtual = 0;
int ultimaMaoEmpate = 0;
int vencedorPrimeiraMao = 0;

int empate = 0;

int hierarquiaDeCartas(int valor, char naipe) {
    if (valor == 4 && naipe == 'P') return 14; // Zap
    if (valor == 7 && naipe == 'C') return 13; // 7 de Copas
    if (valor == 1 && naipe == 'E') return 12; // Espadão
    if (valor == 1 && naipe == 'P') return 11; // Pé
    if (valor == 7) return 10;
    if (valor == 6) return 9;
    if (valor == 5) return 8;
    if (valor == 4) return 7;
    if (valor == 3) return 6;
    if (valor == 2) return 5;
    if (valor == 12) return 4;
    if (valor == 11) return 3;
    if (valor == 10) return 2;
    return 1;
}

void inicializarBaralho() {
    int valores[] = {1, 2, 3, 4, 5, 6, 7, 10, 11, 12};
    char naipes[] = {'E', 'C', 'O', 'P'};
    int index = 0;
    for (int i = 0; i < NUM_NAIPES; i++) {
        for (int j = 0; j < CARTAS_POR_NAIPE; j++) {
            baralho[index].valor = valores[j];
            baralho[index].naipe = naipes[i];
            index++;
        }
    }
}

void embaralharBaralho() {
    for (int i = 0; i < NUMERO_DE_CARTAS; i++) {
        int r = rand() % NUMERO_DE_CARTAS;
        Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }
}

void distribuirCartas() {
    for (int i = 0; i < 3; i++) {
        jogador1.mao[i] = baralho[i];
        jogador2.mao[i] = baralho[i + 3];
    }
    jogador1.vitoriasMao = 0;
    jogador2.vitoriasMao = 0;
}

void mostrarMao(Jogador *jogador) {
    printf("Suas cartas:\n");
    for (int i = 0; i < 3; i++) {
        if (jogador->mao[i].valor != 0) {
            printf("[%d %c] ", jogador->mao[i].valor, jogador->mao[i].naipe);
        }
    }
    printf("\n");
}

void compararCartas(Carta carta1, Carta carta2) {
    int valor1 = hierarquiaDeCartas(carta1.valor, carta1.naipe);
    int valor2 = hierarquiaDeCartas(carta2.valor, carta2.naipe);

    if (maoAtual == 1) {
        vencedorPrimeiraMao = 0;
    }
    
    if (valor1 > valor2) {
        printf("\nJogador 1 venceu a mao!\n");
        jogador1.vitoriasMao++;
        if (maoAtual == 1) vencedorPrimeiraMao = 1;
    } else if (valor2 > valor1) {
        printf("\nJogador 2 venceu a mao!\n");
        jogador2.vitoriasMao++;
        if (maoAtual == 1) vencedorPrimeiraMao = 2;

    } else {
        printf("\nEmpate na mao!\n");
        if (maoAtual == 3) ultimaMaoEmpate = 1; 
        empate++;
    }
}

void aumentarRodada(int jogadorNum) {
    if (aumentoAtual < 3) {
        printf("Jogador %d pediu Truco! (Rodada passa a valer %d pontos)\n", jogadorNum, aumento[aumentoAtual + 1]);
        printf("Jogador %d, aceita? (1 - Sim, 2 - Nao)\n", jogadorNum == 1 ? 2 : 1);
        int resposta;
        scanf("%d", &resposta);

        if (resposta == 1) {
            aumentoAtual++;
            valorRodada = aumento[aumentoAtual];
            printf("Jogador %d aceitou! A rodada agora vale %d pontos.\n", jogadorNum == 1 ? 2 : 1, valorRodada);
        } else {
            printf("Jogador %d recusou! Jogador %d ganha %d pontos.\n", jogadorNum == 1 ? 2 : 1, jogadorNum, valorRodada);
            if (jogadorNum == 1) jogador1.pontos += valorRodada;
            else jogador2.pontos += valorRodada;
            maoAtual = 4;
        }
    } else {
        printf("Nao pode aumentar mais!\n");
    }
}

void verificarVencedorRodada() {
    if (jogador1.vitoriasMao == 2) {
        printf("\nJogador 1 venceu a rodada!\n");
        jogador1.pontos += valorRodada;
        maoAtual = 4;
    } else if (jogador2.vitoriasMao == 2) {
        printf("\nJogador 2 venceu a rodada!\n");
        jogador2.pontos += valorRodada;
        maoAtual = 4;
    } else if (jogador1.vitoriasMao == 1 && jogador2.vitoriasMao == 1) {
        if (empate == 1) {
            if (hierarquiaDeCartas(jogador1.mao[1].valor, jogador1.mao[1].naipe) >
                hierarquiaDeCartas(jogador2.mao[1].valor, jogador2.mao[1].naipe)) {
                printf("\nJogador 1 venceu a rodada pelo criterio de desempate!\n");
                jogador1.pontos += valorRodada;
            } else if (hierarquiaDeCartas(jogador1.mao[1].valor, jogador1.mao[1].naipe) <
                       hierarquiaDeCartas(jogador2.mao[1].valor, jogador2.mao[1].naipe)) {
                printf("\nJogador 2 venceu a rodada pelo criterio de desempate!\n");
                jogador2.pontos += valorRodada;
            } else {
                printf("\nA rodada terminou sem vencedor!\n");
            }
            maoAtual = 4;
        } else if (empate == 2) {
            printf("\nA terceira mao decidira a rodada!\n");
        } 
    } else if (maoAtual == 3 && jogador1.vitoriasMao == 1 && jogador2.vitoriasMao == 1) {
        if (ultimaMaoEmpate) {
            if (vencedorPrimeiraMao == 1) {
                printf("\nJogador 1 venceu a rodada pois venceu a primeira mão!\n");
                jogador1.pontos += valorRodada;
            } else {
                printf("\nJogador 2 venceu a rodada pois venceu a primeira mão!\n");
                jogador2.pontos += valorRodada;
            }
            maoAtual = 4; 
        }
    }
}

Carta jogarTurno(Jogador *jogador, int jogadorNum) {
    int opcao;
    Carta jogada = {0, ' '};
    
    printf("\nJogador %d, escolha sua acao:\n", jogadorNum);
    printf("1 - Jogar carta\n2 - Aumentar\n3 - Desistir\n");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        int cartasDisponiveis = 0;
        for (int i = 0; i < 3; i++) {
            if (jogador->mao[i].valor != 0) {
                cartasDisponiveis++;
            }
        }
        
        printf("Escolha uma carta (1-%d): ", cartasDisponiveis);
        int cartaEscolhida;
        scanf("%d", &cartaEscolhida);
        int index = cartaEscolhida - 1;

        jogada = jogador->mao[index];
        printf("Jogador %d jogou [%d %c]\n", jogadorNum, jogada.valor, jogada.naipe);
        
        for (int i = index; i < cartasDisponiveis - 1; i++) {
            jogador->mao[i] = jogador->mao[i + 1];
        }

        jogador->mao[cartasDisponiveis - 1].valor = 0;
        jogador->mao[cartasDisponiveis - 1].naipe = ' ';

        return jogada;

    } else if (opcao == 2) {
        aumentarRodada(jogadorNum);
    } else if (opcao == 3) {
        printf("Jogador %d desistiu da rodada!\n", jogadorNum);
    }

    return jogada;
}

int main() {

    srand(time(NULL));

    inicializarBaralho();
    embaralharBaralho();
    distribuirCartas();
    
    printf("Jogo de Truco\n");
    printf("Pontuacao Jogador 1: %d \n", jogador1.pontos);
    printf("Pontuacao Jogador 2: %d\n", jogador2.pontos);
    
    while (jogador1.pontos < 12 && jogador2.pontos < 12) {
        printf("\nRodada %d - Mao %d\n", rodada, maoAtual);
    
        printf("Mao do Jogador 1:\n");
        mostrarMao(&jogador1);
        Carta cartaJogador1 = jogarTurno(&jogador1, 1);
    
        printf("Mao do Jogador 2:\n");
        mostrarMao(&jogador2);
        Carta cartaJogador2 = jogarTurno(&jogador2, 2);
    
        compararCartas(cartaJogador1, cartaJogador2);
    
        maoAtual++;
    
        verificarVencedorRodada();
    
        if (maoAtual > 3) {
            maoAtual = 1;
            rodada++;
            distribuirCartas();
        }
    }
    
    printf("Fim de jogo!\n");
    return 0;
}
