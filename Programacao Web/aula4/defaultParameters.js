// Default Parameters
function somar(a = 10, b = 20){
    return a + b;
}

console.log(somar()); // 30
console.log(somar(40, 50)); // 90 
console.log(somar(40)); // 60

// exercicio sem valor default no primeiro parametro
function impostometro(saldo, imposto = 0.3) {
    return saldo * imposto;
}

console.log(impostometro()); // NaN pois o primeiro parametro nao sabemos o tipo
console.log(impostometro(10));
console.log(impostometro(10, 0.5));
