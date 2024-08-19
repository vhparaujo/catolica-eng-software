
let numerosMegaSena = new Set();
let numerosQuina = new Set();
let numerosLotofacil = new Set();

function getRandomNumber(limite) {
    return Math.floor(Math.random() * limite) + 1;
}

function getGame() {
    let tipoDeJogo = document.getElementById('game').value;
    console.log(tipoDeJogo);
    switch (tipoDeJogo) {
        case 'megaSena':
            numerosMegaSena.clear();
            while (numerosMegaSena.size < 6) {
                let number = getRandomNumber(60);
                numerosMegaSena.add(number);
            }
            document.getElementById('result').innerText = "numeros: " + Array.from(numerosMegaSena);
            break;
        case 'quina':
            numerosQuina.clear();
            while (numerosQuina.size < 5) {
                let number = getRandomNumber(80);
                numerosQuina.add(number);
            }
            document.getElementById('result').innerText = "numeros: " + Array.from(numerosQuina);
            break;
        case 'lotofacil':
            numerosLotofacil.clear();
            while (numerosLotofacil.size < 15) {
                let number = getRandomNumber(25);
                numerosLotofacil.add(number);
            }
            document.getElementById('result').innerText = "numeros: " + Array.from(numerosLotofacil);
            break;
    }
}
