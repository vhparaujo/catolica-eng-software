function calculateIMC() {
    const weight = parseFloat(document.getElementById('weight').value);
    const height = parseFloat(document.getElementById('height').value);
    const imc = weight / (height ** 2);
    let category;

    if (imc < 18.5) {
        category = "Abaixo do peso";
    } else if (imc >= 18.5 && imc < 24.9) {
        category = "Peso normal";
    } else if (imc >= 25 && imc < 29.9) {
        category = "Acima do peso";
    } else if (imc >= 30 && imc < 34.9) {
        category = "Obesidade I";
    } else if (imc >= 35 && imc < 39.9) {
        category = "Obesidade II";
    } else {
        category = "Obesidade III";
    }

    document.getElementById('imcResult').innerText = `Seu IMC é de ${imc.toFixed(2)}, o qual é considerado ${category}.`;
}