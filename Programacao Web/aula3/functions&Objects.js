
function funcao(nome) {
    let aluno = nome;

    return console.log(aluno);
}

funcao("Victor");


function saudacao() {
    console.log("Nice to meet you");
}
saudacao();

function saudacaoPorParametro(s) {
    return console.log(s);
}
saudacaoPorParametro("Ola");

const calculadora = {
    somar: function(array) {
        return array.reduce((p, c) => p + c);
    },
    subtrair: function(array) {
        return array.reduce((p, c) => p - c);
    },
    multiplicar: function(array) {
        return array.reduce((p, c) => p * c);
    },
    dividir: function(array) {
        return array.reduce((p, c) => p / c);
    }
}

console.log("Soma: ", calculadora.somar([10, 5, 2]));
console.log("Subtracao: ", calculadora.subtrair([10, 5]));
console.log("Multiplicacao: ", calculadora.multiplicar([10, 5]));
console.log("Divisao: ", calculadora.dividir([10, 5]));

const soma = new Function(`a`, `b`, `let x = 10; let resultado = x + a + b; return resultado;`);
let resultado = soma(5, 4);
console.log(resultado);

let operacao;

function calcular(array, operacao) {
   switch (operacao) {
    case "somar":
        return array.reduce((p, c) => p + c);
        break;
    case "subtrair":
        return array.reduce((p, c) => p - c);
        break;
    case "multiplicar":
        return array.reduce((p, c) => p * c);
        break;
    case "dividir":
        return array.reduce((p, c) => p / c);
        break;
   }
}

let Victor = "Victor"
let Teste = "Teste"

function calcular(array, operacao) {
    return array.reduce((p, c) => eval(`${p} ${operacao.valueOf()} ${c}`)); 
 }
console.log(calcular([10, 5, 5, 6, 5], "+"));

new Function('array', 'op', 'console.log(array.reduce((p, c) => eval(`${p} ${op} ${c}`)))')([10,2,2], '**');
