const express = require('express');
const mustacheExpress = require('mustache-express'); // framework para renderizacao de pagina html
const app = express();

app.engine('html', mustacheExpress()); // criando a engine para renderizacao
app.set('view engine', 'html'); // setando a engine 'html' para ser usada
app.set('views', __dirname + '/views'); // especificando o caminho das views

const PORT = 8080;

app.use(express.urlencoded({ extended: true }));

app.get('/', (req, res) => res.render('index.html'));

app.post('/dados', (req, res) => {
    const {name, address, telefone, date} = req.body;
    res.render('dados.html', {name, address, telefone, date});
});

app.listen(PORT, () => console.log(`app rodando na porta ${PORT}`));
