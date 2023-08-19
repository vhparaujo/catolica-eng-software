// revisao sobre Number

let n1 = Number(); // valor default = 0
console.log(n1)

let n2 = Number(undefined);
console.log(n2);

let n3 = Number(null);
console.log(n3);

let n4 = Number("");
console.log(n4);


// revisao sobre Number
const num_A = 50.34;
const num_B = 2;

console.log(`Resultado da soma entre`, num_A, `e`, num_B, `eh`, num_A + num_B);
console.log(`Resultado da soma entre` + num_A + `e` + num_B + `eh` + num_A + num_B);
console.log(`Resultado da soma entre ${num_A} e ${num_B} eh ${num_A + num_B}`);


// PROPRIEDADES
console.log(Number.MAX_SAFE_INTEGER);
console.log(Number.EPSILON);
console.log(Number.POSITIVE_INFINITY);
console.log(Number.NEGATIVE_INFINITY);

// METODOS
console.log(num_A);
console.log(num_A.toString());

console.log(num_A.toLocaleString('en-US', {style: 'currency', currency: 'USD'}));

console.log(num_A.valueOf());
console.log(Number.isNaN(num_A));

console.log(parseInt(num_A)); 

// Revisao sobre String

let variavel = String("ola");
console.log(variavel);

let variavel2 = new String("oi");
console.log(variavel2);

let nomeCompleto = String("Victor Hugo Pacheco Araujo");
console.log(nomeCompleto.length);

let texto = 'widjsjds ksksndknks \ sdnsknddnkfnfksl \ ksnfksnffnnfknnks isnifnskfnfk nsinifneiodfnefbf \ onofnfnoefnofnefoneofneofn \ enfifffdffen';
console.log(texto);

if(num_A === num_B) {

}

let obj = Object("oi");
console.log(obj.String);
