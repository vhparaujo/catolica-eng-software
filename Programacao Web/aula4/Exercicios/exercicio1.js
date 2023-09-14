// Utilizando o prompt, implemente uma função recursiva que
// receba 5 números, separados por vírgula, e printe-os no
// console.
// O critério de saída da função recursiva, será a correta execução
// do programa. Enquanto os 5 valores inseridos não forem
// numéricos, ou houverem menos/mais números e posições. É
// importante mostrar quais destes valores inseridos não são
// numéricos.

const prompt = require(`prompt-sync`)();

function mostrarCincoNumeros() {

    const input = prompt("Digite 5 numeros separados por virgula: ");
    const inputArray = input.split(',');
    const nums = inputArray.map(Number);

    if (nums.length === 5 && nums.every(Number.isFinite)) {
        console.log("Os numeros digitados foram:", nums.join(', '));
    } else {
        console.log("\nPor favor digite somente 5 numeros separados por virgula! ");

        for (let i = 0; i < inputArray.length; i++) {
            if (isNaN(nums[i])) {
                console.log(`Valor não numérico encontrado: ${inputArray[i].trim()}`);
            }
        }

        mostrarCincoNumeros();
    }

}

mostrarCincoNumeros();
