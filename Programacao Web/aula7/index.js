const express = require('express');
const mustacheExpress = require('mustache-express'); // framework para renderizacao de pagina html
const app = express();

app.engine('html', mustacheExpress()); // criando a engine para renderizacao
app.set('view engine', 'html'); // setando a engine 'html' para ser usada
app.set('views', __dirname + '/views'); // especificando o caminho das views

const PORT = 8080;

app.get('/', function(req, res) {
    let usuario = {
        nome: 'Victor',
        telefone: 123
    };
    res.render('index.html', {usuario});
});

// app.post('/dados', function(){

// });

// app.get('/hello', function(req, res) {
//     res.send("Hello World");
// });

app.listen(PORT, function(){
    console.log(`app rodando na porta ${PORT}`);
});
