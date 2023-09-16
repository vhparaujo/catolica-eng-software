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

// teste do prompt 
const prompt = require(`prompt-sync`)();
let digite = prompt("Digite algo: ");
console.log(digite);
