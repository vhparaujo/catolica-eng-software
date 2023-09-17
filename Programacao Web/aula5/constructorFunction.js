// Constructor Function - Aqui utiliza o Pascal Case

// // REFERENCIAS
// // https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Reference/Classes/constructor

// Forma mais simples, que transforma essa função construtora em uma classe e consequentemente se comporta como um objeto
function Pessoa(nome, idade) {
    this.nome = nome;
    this.idade = idade;
    this.calculaAnoNascimento = function() {
        return new Date().getUTCFullYear() - this.idade;
    };
    this.printaAtributos = function() {
        return `${this.nome} ${this.idade}`;
    };
}

let faustao = new Pessoa('Faustao', 76);
console.log(faustao.printaAtributos());
console.log(faustao.calculaAnoNascimento());

let gugu = new Pessoa('Gugu', 71);
console.log(gugu.printaAtributos());
console.log(gugu.calculaAnoNascimento());


// Forma mais moderna, que surgiu no JavaScript 2015
// utilizando como uma classe mesmo
class Carro {
    constructor(pNome, pAno) {
        this.nome = pNome;
        this.ano = pAno;
    }

    calculaIdadeCarro() {
        return (new Date().getFullYear()) - this.ano;
    }

    printaNomeCarro(){
        return `${this.nome}`;
    }
};

let carro1 = new Carro('Marea', 2000);
let carro2 = new Carro('Fusca', 1989);
console.log(carro1.printaNomeCarro());
console.log(carro1.calculaIdadeCarro());
console.log(carro2.printaNomeCarro());
console.log(carro2.calculaIdadeCarro());