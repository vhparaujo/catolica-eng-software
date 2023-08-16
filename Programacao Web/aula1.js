
// const tem escopo de bloco
const idade = 17;

if(idade < 18) {
    const maiorDeIdade = 18;
    console.log("A maior idade eh = " + maiorDeIdade);
}

console.log(idade);

// let tem escopo de bloco
//console.log(nome)
let nome = "Victor";
console.log(nome);

// nao pode ser redeclaradas
nome = "Antonio";
console.log(nome);

// var pode ser redeclarada e reatribuida
// var tem escopo global
console.log(time)
var time = String("fluzao");
console.log(time);

console.log(time.length);
console.log(time.indexOf("u"));

time = 1;
console.log(time);

var time = "city";
console.log(time);

let numero = 20.999999999999999;
let numero2 = 20.999999999999999;
console.log(numero + numero2);

let n = Number(25.65656565);

console.log(n.toPrecision(5));

let andou = Boolean(true);
console.log(andou.valueOf());



// Exercicio01
let num = 20;
let num2 = 36;

let soma = num + num2;
let subtracao = num - num2;
let divisao = num / num2;
let multiplicacao = num * num2;

console.log(`O resultado da soma do numero ${num} com o numero ${num2} eh = ${soma}`);
console.log(`O resultado da subtracao do numero ${num} com o numero ${num2} eh = ${subtracao}`);
console.log(`O resultado da divisao do numero ${num} com o numero ${num2} eh = ${divisao}`);
console.log(`O resultado da multiplicacao do numero ${num} com o numero ${num2} eh = ${multiplicacao}`);
