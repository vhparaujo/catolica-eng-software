// Crie uma função que recebe uma String e retorna um Array
// com as palavras distintas da String recebida.

function string(String) {
    const palavras = String.split(" ");
    const arrayDePalavras = [];

    for (const palavra of palavras){
        if(!arrayDePalavras.includes(palavra)) {
            arrayDePalavras.push(palavra);
        }
    }

    return arrayDePalavras;

}

const frase = "O fluzao vai ganhar a liberta, rumo a gloria eterna";
console.log(string(frase));