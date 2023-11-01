
const {somar, subtrair, multiplicar, dividir} = require('../calculadora/calculadora');

function indexView(req, res) {
    res.render('index.html');
}

function calcularView(num1, num2, operator, result, res) {
    res.render('calcular.html', {num1, num2, operator, result, indexView});
}

function calcular(req, res) {
    const {num1, num2, operator} = req.body;

    const numInt1 = Number.parseInt(num1);
    const numInt2 = Number.parseInt(num2);

    if (isNaN(numInt1) || isNaN(numInt2)) {
        res.send('Por favor, insira valores numéricos válidos.');
    } else {
        if (operator === "+") calcularView(numInt1, numInt2, operator, somar(numInt1, numInt2), res);

        if (operator === "-") calcularView(numInt1, numInt2, operator, subtrair(numInt1, numInt2), res);

        if (operator === "*") calcularView(numInt1, numInt2, operator, multiplicar(numInt1, numInt2), res);

        if (operator === "/") calcularView(numInt1, numInt2, operator, dividir(numInt1, numInt2), res);
    }
}

module.exports = {
    indexView,
    calcular
};
