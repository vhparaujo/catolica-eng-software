/* Escreva um algoritmo que leia o numero de identificacao, as 3
notas obtidas por um aluno nas 3 verificacoes e a media dos
exercicios que fazem parte da avaliacao, e calcule a media de
aproveitamento, usando a formula:
MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7
A atribuicao dos conceitos obedece a tabela abaixo. O algoritmo
deve escrever o numero do aluno, suas notas, a média dos
exercícios, a média de aproveitamento, o conceito correspondente
e a mensagem 'Aprovado' se o conceito for A, B ou C, e
'Reprovado' se o conceito for D ou E.
Média de aproveitamento Conceito:
● >= 90 A
● >= 75 e < 90 B
● >= 60 e < 75 C
● >= 40 e < 60 D
● < 40 E
*/

#include <stdio.h>

int main() {

    int nota1, nota2, nota3, mediaExercicio, mediaAproveitamento, matricula;

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Escreva suas notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    printf("Qual a nota média dos seus exercicios: ");
    scanf("%d", &mediaExercicio);

    mediaAproveitamento = ((nota1 + nota2 * 2 + nota3 * 3 + mediaExercicio) / 7);

    if(mediaAproveitamento >= 90){
        printf("Caro aluno %d sua média de aproveitamento foi: %d sendo assim seu conceitual foi A, estando Aprovado.", matricula, mediaAproveitamento);
    } else if(mediaAproveitamento >= 75){
        printf("Caro aluno %d sua média de aproveitamento foi: %d sendo assim seu conceitual foi B, estando Aprovado.", matricula, mediaAproveitamento);
    } else if(mediaAproveitamento >= 60){
        printf("Caro aluno %d sua média de aproveitamento foi: %d sendo assim seu conceitual foi C, estando Aprovado.", matricula, mediaAproveitamento);
    } else if(mediaAproveitamento >= 40){
        printf("Caro aluno %d sua média de aproveitamento foi: %d sendo assim seu conceitual foi D, estando Reprovado.", matricula, mediaAproveitamento);
    } else if(mediaAproveitamento < 40 && mediaAproveitamento > 0){
        printf("Caro aluno %d sua média de aproveitamento foi: %d sendo assim seu conceitual foi E, estando Reprovado.", matricula, mediaAproveitamento);
    } else if(mediaAproveitamento <= 0){
        printf("Você não existe.");
    }

    printf("\n");

}