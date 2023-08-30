// Na calculadora criada no exercício 01, adicione uma função
// chamada “fatorial”, que seja recursiva, que recebe 1 (um)
// parâmetro numérico e retorna o valor do seu fatorial.
// Exemplo:
// !3 = 3*2*1
// !5 = 5*4*3*2*1

function fatorial(n) {
    if (n <= 1) {
        return "1" 
    } else {
        return `${n}*${fatorial(n - 1)}`;
    }
}

let numero = 5;
console.log(fatorial(numero));