// Factory function 
// forma mais verbosa
function criarPessoa(nomePessoa, idade) {
    const pessoa = {
        nome: nomePessoa,
        idade: idade,
        printaAtributos: function(){
            return `Nome: ${this.nome}\nIdade: ${this.idade}`;
        }, 
        calcularAnoNascimento: function(){
            return `Ano de nascimento: ${new Date().getFullYear() - this.idade}`;
        }
    };
    return pessoa;
}

// let marido2 = criarPessoa('Mauricio', 90);
// console.log(marido2.printaAtributos());
// console.log(marido2.calcularAnoNascimento());

// console.log("\n");

// let esposa2 = criarPessoa('Juliana', 80);
// console.log(esposa2.printaAtributos());
// console.log(esposa2.calcularAnoNascimento());

// forma mais enxuta javascript 2015
function pessoa(nome, idade){
    return{
        nome,
        idade,
        printaPessoa() {
            return `Nome: ${this.nome}\nIdade: ${this.idade}`;
        },
        calcularAnoNascimento() {
            return new Date().getFullYear() - this.idade;
        }
    };
}

let marido3 = pessoa('Victor', 20);
console.log(marido3.printaPessoa());
console.log(marido3.calcularAnoNascimento());

let esposa3 = pessoa('Maria Eduarda', 17);
console.log(esposa3.printaPessoa());
console.log(esposa3.calcularAnoNascimento());
