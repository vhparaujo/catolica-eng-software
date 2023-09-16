const diaDaSemana = 7;
let nomeDiaSemana = "";

switch (diaDaSemana) {
    case 0: 
        nomeDiaSemana = "Domingo";
        break;
    case 1: 
        nomeDiaSemana = "Segunda";
        break;
    case 2: 
        nomeDiaSemana = "Terca";
        break;
    case 3: 
        nomeDiaSemana = "Quarta";
        break;
    case 4: 
        nomeDiaSemana = "Quinta";
        break;
    case 5: 
        nomeDiaSemana = "Sexta";
        break;
    case 6: 
        nomeDiaSemana = "Sabado";
        break;
   default: 
    nomeDiaSemana = "Dia nao encontrado";
    break;
    
}

console.log(nomeDiaSemana);

const nomeDiasDaSemana = ["Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"];

for(let index = 0; index < nomeDiasDaSemana.length; index++) {
    nomeDiaSemana = nomeDiasDaSemana[index];
    console.log(nomeDiaSemana);
}

for(const key in nomeDiasDaSemana) {
    const elemento = nomeDiasDaSemana[key];
    console.log(`${key} - ${elemento}`);
}

const carro = {
    modelo: "Celta",
    ano: 2012,
    cor: "Branco"
}

for(const key in carro) {
    const elemento = carro[key];
    console.log(`${key} - ${elemento}`);
}


let i = 0;

while(i < 7) {
    console.log(nomeDiasDaSemana[i]);
    i++;
}

i = 0;

console.log("-----------------");

do {
    console.log(nomeDiasDaSemana[i]);
    i++;
} while(i < 7);

console.log("-----------------");
