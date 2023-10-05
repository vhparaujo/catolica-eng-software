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
    let agendamento = {
        name: req.body.name,
        address: req.body.address,
        telefone: req.body.telefone,
        date: req.body.date
    };

    let erro_form = false;

    if(agendamento.name == ""){
        erro_form = true;
    }
    if(agendamento.address == ""){
        erro_form = true;
    }
    if(agendamento.telefone == ""){
        erro_form = true;
    }
    if(agendamento.date == ""){
        erro_form = true;
    }

    res.render("dados.html", {agendamento, erro_form});

});

app.listen(PORT, () => console.log(`app rodando na porta ${PORT}`));
