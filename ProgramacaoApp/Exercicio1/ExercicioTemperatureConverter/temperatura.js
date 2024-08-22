function convertTemperature() {
    const temp = parseFloat(document.getElementById('temperature').value);
    const fromScale = document.getElementById('deTemp').value;
    const toScale = document.getElementById('paraTemp').value;

    let convertedTemp;

    if (fromScale === 'celsius') {
        if (toScale === 'fahrenheit') {
            convertedTemp = temp * 9/5 + 32;
        } else if (toScale === 'kelvin') {
            convertedTemp = temp + 273.15;
        } else {
            convertedTemp = temp;
        }
    } else if (fromScale === 'fahrenheit') {
        if (toScale === 'celsius') {
            convertedTemp = (temp - 32) * 5/9;
        } else {
            convertedTemp = temp;
        }
    } else if (fromScale === 'kelvin') {
        if (toScale === 'celsius') {
            convertedTemp = temp - 273.15;
        } else {
            convertedTemp = temp;
        }
    }

    document.getElementById('convertedTemp').innerText = `Temperatura convertida: ${convertedTemp.toFixed(2)} ${toScale}`;
}
