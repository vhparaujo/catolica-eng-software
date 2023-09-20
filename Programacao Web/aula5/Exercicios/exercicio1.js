// Com base no que aprendemos até aqui, criem um sisteminha simples para calcular o 
// valor de uma compra de supermercado. Como clientes, temos o nosso carrinho de compras e 
// precisamos adicionar itens a ele. Temos que cadastrar os itens (nome do item e preço), 
// fazer o calculo do preço (com ou sem desconto) e retornar o valor total da compra.
// Precisamos utilizar constructor (ou factory) function, além de callback function para a 
// resolução do nosso problema.

const prompt = require('prompt-sync')();

// Constructor function para criar um objeto de Item
function Item(nome, preco) {
    this.nome = nome;
    this.preco = preco;
}

// Função para calcular o valor total da compra com desconto
function calcularTotalComDesconto(carrinho, callback) {
    let total = 0;
    for (const item of carrinho) {
        total += item.preco;
    }

    // Aplicar um desconto de 10% se o total for maior que 100
    if (total > 100) {
        total *= 0.9;
    }

    callback(total);
}

// Função de callback para exibir o valor total da compra
function exibirTotalCompra(total) {
    console.log(`O valor total da compra é: R$ ${total.toFixed(2)}`);
}

// Criar alguns itens e adicioná-los ao carrinho
const item1 = new Item('Arroz', 5.99);
const item2 = new Item('Feijão', 4.65);
const item3 = new Item('Macarrão', 6.56);

const carrinho = [item1, item2, item3];

// Calcular o valor total da compra com desconto e exibir
calcularTotalComDesconto(carrinho, exibirTotalCompra);
