// #include "truco.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define NUMERO_DE_CARTAS 40
// #define NUM_NAIPES 4
// #define CARTAS_POR_NAIPE 10

// Carta baralho[NUMERO_DE_CARTAS];
// Jogador jogador1, jogador2;

// int rodada = 1, mao_atual = 1;
// int valor_rodada = 1;

// int hierarquiaDeCartas(int valor, char naipe) {
//     if (valor == 4 && naipe == 'P') return 14; // Zap
//     if (valor == 7 && naipe == 'C') return 13; // 7 de Copas
//     if (valor == 1 && naipe == 'E') return 12; // Espadão
//     if (valor == 1 && naipe == 'P') return 11; // Pé
//     if (valor == 7) return 10;
//     if (valor == 6) return 9;
//     if (valor == 5) return 8;
//     if (valor == 4) return 7;
//     if (valor == 3) return 6;
//     if (valor == 2) return 5;
//     if (valor == 12) return 4;
//     if (valor == 11) return 3;
//     if (valor == 10) return 2;
//     return 1;
// }

// void inicializarBaralho() {
//     int valores[] = {1, 2, 3, 4, 5, 6, 7, 10, 11, 12};
//     char naipes[] = {'E', 'C', 'O', 'P'};
//     int index = 0;
//     for (int i = 0; i < NUM_NAIPES; i++) {
//         for (int j = 0; j < CARTAS_POR_NAIPE; j++) {
//             baralho[index].valor = valores[j];
//             baralho[index].naipe = naipes[i];
//             index++;
//         }
//     }
// }

// void embaralharBaralho() {
//     for (int i = 0; i < NUMERO_DE_CARTAS; i++) {
//         int r = rand() % NUMERO_DE_CARTAS;
//         Carta temp = baralho[i];
//         baralho[i] = baralho[r];
//         baralho[r] = temp;
//     }
// }

// void distribuirCartas() {
//     for (int i = 0; i < 3; i++) {
//         jogador1.mao[i] = baralho[i];
//         jogador2.mao[i] = baralho[i + 3];
//     }
// }

// void mostrarMao(Jogador *jogador) {
//     printf("Suas cartas:\n");
//     for (int i = 0; i < 3; i++) {
//         printf("[%d %c] ", jogador->mao[i].valor, jogador->mao[i].naipe);
//     }
//     printf("\n");
// }

// void compararCartas(Carta carta1, Carta carta2) {
//     int valor1 = hierarquiaDeCartas(carta1.valor, carta1.naipe);
//     int valor2 = hierarquiaDeCartas(carta2.valor, carta2.naipe);
    
//     if (valor1 > valor2) {
//         printf("Jogador 1 venceu a mão!\n");
//         jogador1.pontos += valor_rodada;
//     } else if (valor2 > valor1) {
//         printf("Jogador 2 venceu a mão!\n");
//         jogador2.pontos += valor_rodada;
//     } else {
//         printf("Empate na mão!\n");
//     }
// }

// void jogarTurno(Jogador *jogador, int jogador_num) {
//     int opcao;
//     printf("\nJogador %d, escolha sua ação:\n", jogador_num);
//     printf("1 - Jogar carta\n2 - Aumentar\n3 - Desistir\n");
//     scanf("%d", &opcao);
    
//     if (opcao == 1) {
//         int carta_escolhida;
//         printf("Escolha uma carta (1-3): ");
//         scanf("%d", &carta_escolhida);
//         printf("Jogador %d jogou [%d %c]\n", jogador_num, jogador->mao[carta_escolhida - 1].valor, jogador->mao[carta_escolhida - 1].naipe);
//     } else if (opcao == 2) {
//         printf("Jogador %d pediu Truco!\n", jogador_num);
//     } else if (opcao == 3) {
//         printf("Jogador %d desistiu da rodada!\n", jogador_num);
//     }
// }