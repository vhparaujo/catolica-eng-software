
function multiplicacaoMatrizes(matrizA, matrizB) {
    const linhasA = matrizA.length;
    const colunasA = matrizA[0].length;
    const linhasB = matrizB.length;
    const colunasB = matrizB[0].length;
  
    if (colunasA !== linhasB) {
        console.log("Não é possível calcular");
        return;
     }
  
    const matrizMultiplicada = Array(linhasA);
    for (let i = 0; i < linhasA; i++) {
      matrizMultiplicada[i] = Array(colunasB);
      for (let j = 0; j < colunasB; j++) {
        matrizMultiplicada[i][j] = 0;
        for (let k = 0; k < colunasA; k++) {
          matrizMultiplicada[i][j] += matrizA[i][k] * matrizB[k][j];
        }
      }
    }
  
    return matrizMultiplicada;
  }
  
  // Exemplo de uso
  const matrizA = [
    [1, 3],
    [2, 5]
  ];
  
  const matrizB = [
    [2, 2],
    [0, 1]
  ];
  
  const resultado = multiplicacaoMatrizes(matrizA, matrizB);
  
  console.log("Matriz A:");
  console.table(matrizA);
  
  console.log("Matriz B:");
  console.table(matrizB);
  
  console.log("Resultado da multiplicação:");
  console.table(resultado);
  