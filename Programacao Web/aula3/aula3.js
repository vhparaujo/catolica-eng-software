// // Operadores 

// const x = "1";
// const y = 1;
// const z = 2;

// x == y; // x eh igual a y?
// x === y; // x eh igual a y em valor e tipo? 

// console.log(x == y);
// console.log(x === y);
// console.log(x == z);
// console.log(x === z);
// console.log(y === z);
// console.log(y == z);

// console.log(x != z);
// console.log(y != z);
// console.log(y !== z);
// console.log(x !== z);

// const hora = 2;
// let cumprimento = "";

// if (hora < 12 && hora >= 6) {
//     cumprimento = "Bom dia";
// } else if ( hora < 18 && hora >= 12) {
//     cumprimento = "Boa tarde";
// } else {
//     cumprimento = "Boa noite";
// }

// console.log(cumprimento);

// const diaDaSemana = 7;
// let nomeDiaSemana = "";

// switch (diaDaSemana) {
//     case 0: 
//         nomeDiaSemana = "Domingo";
//         break;
//     case 1: 
//         nomeDiaSemana = "Segunda";
//         break;
//     case 2: 
//         nomeDiaSemana = "Terca";
//         break;
//     case 3: 
//         nomeDiaSemana = "Quarta";
//         break;
//     case 4: 
//         nomeDiaSemana = "Quinta";
//         break;
//     case 5: 
//         nomeDiaSemana = "Sexta";
//         break;
//     case 6: 
//         nomeDiaSemana = "Sabado";
//         break;
//    default: 
//     nomeDiaSemana = "Dia nao encontrado";
//     break;
    
// }

// console.log(nomeDiaSemana);

// const nomeDiasDaSemana = ["Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"];

// for(let index = 0; index < nomeDiasDaSemana.length; index++) {
//     nomeDiaSemana = nomeDiasDaSemana[index];
//     console.log(nomeDiaSemana);
// }

// for(const key in nomeDiasDaSemana) {
//     const elemento = nomeDiasDaSemana[key];
//     console.log(`${key} - ${elemento}`);
// }

// const carro = {
//     modelo: "Celta",
//     ano: 2012,
//     cor: "Branco"
// }

// for(const key in carro) {
//     const elemento = carro[key];
//     console.log(`${key} - ${elemento}`);
// }


// let i = 0;

// while(i < 7) {
//     console.log(nomeDiasDaSemana[i]);
//     i++;
// }

// i = 0;

// console.log("-----------------");

// do {
//     console.log(nomeDiasDaSemana[i]);
//     i++;
// } while(i < 7);

// console.log("-----------------");

// function funcao(nome) {
//     let aluno = nome;

//     return console.log(aluno);
// }

// funcao("Victor");


// function saudacao() {
//     console.log("Nice to meet you");
// }
// saudacao();

// function saudacaoPorParametro(s) {
//     return console.log(s);
// }
// saudacaoPorParametro("Ola");

// const calculadora = {
//     somar: function(array) {
//         return array.reduce((p, c) => p + c);
//     },
//     subtrair: function(array) {
//         return array.reduce((p, c) => p - c);
//     },
//     multiplicar: function(array) {
//         return array.reduce((p, c) => p * c);
//     },
//     dividir: function(array) {
//         return array.reduce((p, c) => p / c);
//     }
// }

// console.log("Soma: ", calculadora.somar([10, 5, 2]));
// console.log("Subtracao: ", calculadora.subtrair([10, 5]));
// console.log("Multiplicacao: ", calculadora.multiplicar([10, 5]));
// console.log("Divisao: ", calculadora.dividir([10, 5]));

// const soma = new Function(`a`, `b`, `let x = 10; let resultado = x + a + b; return resultado;`);
// let resultado = soma(5, 4);
// console.log(resultado);

// let operacao;

// function calcular(array, operacao) {
//    switch (operacao) {
//     case "somar":
//         return array.reduce((p, c) => p + c);
//         break;
//     case "subtrair":
//         return array.reduce((p, c) => p - c);
//         break;
//     case "multiplicar":
//         return array.reduce((p, c) => p * c);
//         break;
//     case "dividir":
//         return array.reduce((p, c) => p / c);
//         break;
//    }
// }

// let Victor = "Victor"
// let Teste = "Teste"

// function calcular(array, operacao) {
//     return array.reduce((p, c) => eval(`${p} ${operacao.valueOf()} ${c}`)); 
//  }
// console.log(calcular([10, 5, 5, 6, 5], "+"));

// new Function('array', 'op', 'console.log(array.reduce((p, c) => eval(`${p} ${op} ${c}`)))')([10,2,2], '**');


function contagemRegressiva(n) {
    if(n > 0) {
        console.log(n);
        contagemRegressiva(n-1);
    } else {
        console.log("Feliz ano novo!!!");
    }
}

contagemRegressiva(10);