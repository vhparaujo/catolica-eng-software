const express = require('express');
const app = express();

const PORT = 8080;
app.get('/', (req, res) => {
    res.send("App Web - Aprendendo o Express");
});

app.get('/hello/:n', (req, res) => {
    let nome = req.params.n;
    res.send("Saudacoes do(a)" + nome);
});

app.listen(PORT, function() {
    console.log("App rodando na porta " + PORT);
});

app._router('/', (req, res) => {
    
});
