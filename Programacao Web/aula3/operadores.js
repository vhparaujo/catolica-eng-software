// Operadores 

const x = "1";
const y = 1;
const z = 2;

x == y; // x eh igual a y?
x === y; // x eh igual a y em valor e tipo? 

console.log(x == y);
console.log(x === y);
console.log(x == z);
console.log(x === z);
console.log(y === z);
console.log(y == z);

console.log(x != z);
console.log(y != z);
console.log(y !== z);
console.log(x !== z);

const hora = 2;
let cumprimento = "";

if (hora < 12 && hora >= 6) {
    cumprimento = "Bom dia";
} else if ( hora < 18 && hora >= 12) {
    cumprimento = "Boa tarde";
} else {
    cumprimento = "Boa noite";
}

console.log(cumprimento);