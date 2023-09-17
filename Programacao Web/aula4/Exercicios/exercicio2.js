// Fazendo o uso de função construtora e callback, crie um
// programa para incluir notas, calcular a média e informar se um
// aluno foi APROVADO ou REPROVADO.
// Não é necessário utilizar o prompt, mas querendo se desafiar
// nestes sentido mandem ver.

const prompt = require('prompt-sync')();

function Aluno(notas) {
    this.notas = notas.map(parseFloat);

    this.calculaMedia = function() {
        const somatorio = this.notas.reduce((total, nota) => total + nota);
        const media = somatorio / this.notas.length;
        return media;
    };
   
}

function printarResultado(callback){
    const aprovacao = callback();
    if(aprovacao >= 7 && aprovacao <= 10){
        console.log("Aprovado");
    } else {
        console.log("Reprovado");
    }
}

const input = prompt("Escreva suas notas separadas por vírgula: ");
const inputNotas = input.split(',');

const aluno1 = new Aluno(inputNotas);
const mediaAluno1 = aluno1.calculaMedia();

printarResultado(() => mediaAluno1);
