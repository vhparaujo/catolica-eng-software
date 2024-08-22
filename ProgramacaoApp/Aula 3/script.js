// function imprimir(){
//     document.write(<p>Contando</p>);
// }

// setInterval(() => {
//     document.write('<p>Contando</p>');
// }, 1000);

// let contador = document.getElementById("contador");

// var timer = setInterval(() => {

// });

// setTimeout(() => {
//     contador.innerHTML += 'Hello!<br/>'
// }, 2000);


// var nome = 'Victor';

// if (nome === 'Victor') {
//     var profissao = 'professor' // var acessível dentro e fora de qualquer escopo
//     console.log(profissao);
//     profissao = 9
//     console.log(profissao);
// }

// if (nome === 'Victor') {
//     let cargo = 'CEO' // let acessível somente dentro do escopo
//     console.log(cargo);
//     cargo = 'Manager'
//     console.log(cargo);
//     // console.log(profissao);
//     cargo = 9
//     console.log(cargo);
// }


// if (nome === 'Victor') {
//     const jogador = 'Messi' // const não é acessível nem dentro nem fora do escopo
//     console.log(jogador);
// jogador = 'Cr7'
// console.log(jogador);
// console.log(cargo);
// console.log(profissao);
// }


// let pessoa = {
//     nome: 'Victor',
//     idade: 21,
//     profissao: 'Dev',
// };
// pessoa.nome

// let users = [
//     {nome: 'John', idade: 23, profissao: 'Médico'},
//     {nome: 'Stark', idade: 34, profissao: 'Empresário'},
//     {nome: 'Laurence', idade: 57, profissao: 'Marketeiro'},
// ]

// for (var i = 0; i < users.length; i++) {
//     console.log(`Nome: ${users[i].nome}, idade: ${users[i].idade}`);
// }

// users.forEach(user => {
//     console.log(`Nome: ${user.nome}, idade: ${user.idade}, profissao: ${user.profissao}`);
// });

// let pessoa = {
//     nome: 'Maria Eduarda',
//     idade: 18,
// }

// // desconstrução do objeto
// let { nome, idade } = pessoa  
// console.log(nome)
// console.log(idade)

// spread operator
// let numerosPares = [2, 4, 6, 8, 10];
// let numerosImpares = [...numerosPares, 1, 3, 5, 7, 9]; // spread operator ..., pega somente o conteudo do array anterior e coloca no array

// console.log(numerosImpares);

// let pessoa = {
//     nome: "Messi",
//     idade: 37,
// }

// let jogador = {
//     ...pessoa, // spread operator juntando dois objetos
//     time: 'Fluminense'
// }

// console.log(jogador);

// function user(...info) {
//     // let data = {
//     //     ...info,
//     //     stats: 'ok',
//     //     inicio: '2024',
//     // }
//     console.log(info);
// }

// user('messi', 'cr7', 'neymar');

// Escolhe um numero aleatorio dentre os numeros que o usuario informa
// function gerarNumeros(...numeros) {
//     let index = Math.floor(Math.random() * numeros.length);
//     let number = numeros[index];
//     console.log(number);
// }

// gerarNumeros(2, 4, 3, 6, 7);


//Map
// let nomes = ['Victor', 'Leticia', 'Duda'];

// nomes.map((item, index) => {
//     console.log(`Index: ${index}, items: ${item}`)
// });

/*
() => {}
    parenteses
    seta
    chaves
*/

// function somaRegular(a, b) {
//     let total = a + b;
//     return console.log(total);
// }

// funcao anonima 
// let soma = (b, c) => {
//     let result = b + c;
//     console.log(result);
// }

// soma(2,4);

let listElement = document.querySelector('#app');

let users = [];

function getUsers() {
    fetch('https://reqres.in/api/users?page=2')
        .then((response) => { // só executa se der certo
            return response.json();
        })
        .then((data) => { // pega o dado
            users = data.data
            users.map((user) => {
                let liElement = document.createElement('li');
                let titleElement = document.createElement('strong');
                let imgElement = document.createElement('img');

                let titleText = document.createTextNode(user.first_name);
                titleElement.appendChild(titleText);

                liElement.appendChild(titleElement);

                imgElement.src = user.avatar
                liElement.appendChild(imgElement);

                listElement.appendChild(liElement);
            })
        })
}

getUsers();