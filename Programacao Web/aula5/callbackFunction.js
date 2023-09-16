// funcao callback
function printar(callback) {
    callback();
}

// arrow function funcionando como a funcao callback
printar(() => console.log(`oie`));

// forma verbosa
let texto = 'O flu vai ganhar ';
function escrever(){
    console.log(texto += 'a libertadores');
}

printar(escrever);

// forma enxuta
let words = 'Djoko is the ';
printar(() => {words += 'goat';});
console.log(words);


// camelCase - function calcularIdade()
// PascalCase - function CalcularIdade()
