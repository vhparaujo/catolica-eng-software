// Fazendo o uso de função construtora e callback, crie um
// programa para incluir notas, calcular a média e informar se um
// aluno foi APROVADO ou REPROVADO.
// Não é necessário utilizar o prompt, mas querendo se desafiar
// nestes sentido mandem ver.

const prompt = require('prompt-sync')();

function Aluno(nome, notas) {
    this.notas = notas.map(parseFloat);
    this.nome = nome;

    this.calculaMedia = function() {
        const somatorio = this.notas.reduce((total, nota) => total + nota);
        const media = somatorio / this.notas.length;
        return media;
    };

    this.informarNome = function() {
        return this.nome;
    }
   
}

function printarResultado(callback, callback2){
    const aprovacao = callback();
    const nome = callback2();
    if(aprovacao >= 7 && aprovacao <= 10){
        console.log(`${nome}, sua média foi ${aprovacao}: Aprovado`);
    } else {
        console.log(`${nome}, sua média foi ${aprovacao}: Reprovado`);
    }
}

const input = prompt("Escreva suas notas separadas por vírgula: ");
const inputNotas = input.split(',');

const inputName = prompt("Escreva seu nome: ");

const aluno1 = new Aluno(inputName, inputNotas);
const mediaAluno1 = aluno1.calculaMedia();
const nomeAluno1 = aluno1.informarNome();

printarResultado(() => mediaAluno1,() => nomeAluno1);
