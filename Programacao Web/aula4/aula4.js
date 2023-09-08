// // Default Parameters
// function somar(a = 10, b = 20){
//     return a + b;
// }

// console.log(somar()); // 30
// console.log(somar(40, 50)); // 90 
// console.log(somar(40)); // 60


// // exercicio sem valor default no primeiro parametro
// function impostometro(saldo, imposto = 0.3) {
//     return saldo * imposto;
// }

// console.log(impostometro()); // NaN pois o primeiro parametro nao sabemos o tipo
// console.log(impostometro(10));
// console.log(impostometro(10, 0.5));


// Rest Parameters
// function incluir(...numeros){
//     numeros.forEach(element => {
//         console.log(element);
//     });
// }

// incluir("1",2,3,4,5,false);


// Arrow Function 
const funcao = () => {
    let texto = "Printar ";
    console.log(texto + "Tio Antonio");
}

funcao()

console.log(() => {console.log("Hello World")});
(() => {console.log("Hello world 2")})();

const a = (str) => console.log(str);
a("eae man")

const nomes = ["Victor", "Leo", "Messi"];
nomes.forEach((nome) => {console.log(nome)})

nomes.forEach(function(nome) {
    console.log(nome);
});

const objeto = [
    {
        nome: "German ",
        sobrenome: "Cano",
        data: new Date(1984, 4, 29)
    },
    {
        nome: "Cristiano ",
        sobrenome: "Ronaldo",
        data: new Date(1988, 6, 14)
    }
]

objeto.forEach((pessoa) => {
    console.log(`Nome: ${pessoa.nome}`);
    console.log(`Sobrenome: ${pessoa.sobrenome}`);
    console.log(`Nascimento: ${pessoa.data.toLocaleDateString("pt-BR")}`);
})

const prompt = require(`prompt-sync`)();
let digite = prompt("Digite algo: ");
console.log(digite);
