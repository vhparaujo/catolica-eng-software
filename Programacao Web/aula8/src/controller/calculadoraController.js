
const calculadora = require('../calculadora/calculadora');


function indexView(req, res) {
    res.render('index.html');
}

function calcular(req, res) {
    let n1 = Number.parseInt(req.body.n1);
    let n2 = Number.parseInt(req.body.n2);
    res.send(`${n1} + ${n2} = ${calculadora.somar(n1, n2)}`);
}

module.exports = {
    indexView,
    calcular
};
