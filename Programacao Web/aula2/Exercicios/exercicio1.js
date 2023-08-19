
function matrizTransposta(matriz) {
    const linhas = matriz.length;  // traz o numero de linhas
    const colunas = matriz[0].length; // traz o numero de colunas

    const matrizTransposta = Array(colunas); // cria um array com tamanho 2
    //console.log(matrizTransposta); 

    for(let i = 0; i < colunas; i++) {
        matrizTransposta[i] = Array(linhas); // para cada linha do array anterior, cria um novo array com tamanho 3
        for(let j = 0; j < linhas; j++) {
            matrizTransposta[i][j] = matriz[j][i];
         }

    }

    return matrizTransposta;

}


let matriz = [
[1,2], 
[3,4],
[5,6]
];

const transposta = matrizTransposta(matriz);

console.log("Matriz original");
console.table(matriz);

console.log("Matriz transposta");
console.table(transposta);

// for(let i = 0; i < matriz[0].length; i++) { // para cada linha do array anterior, cria um novo array com tamanho 3
//     for(let j = 0; j < matriz.length; j++) {
//         console.log(matriz[j][i]);
//      }
// }

// console.table(matriz)

