import { StyleSheet, Text, View, TouchableOpacity } from 'react-native';
import React, { useState, useEffect } from 'react';

export default function App() {

  const [milissegundos, setMilissegundos] = useState(0);
  const [ativo, setAtivo] = useState(false);

  useEffect(() => {
    let intervalo: NodeJS.Timeout | undefined;

    if (ativo) {
      intervalo = setInterval(() => {
        setMilissegundos((milissegundos) => milissegundos + 10);
      }, 1); // Atualiza a cada 1 milissegundo
    } else {
      clearInterval(intervalo);
    }

    return () => clearInterval(intervalo);
  }, [ativo]);

  const iniciarCronometro = () => {
    setAtivo(true);
  };

  const pausarCronometro = () => {
    setAtivo(false);
  };

  const resetarCronometro = () => {
    setMilissegundos(0);
    setAtivo(false);
  };

  const minutos = Math.floor((milissegundos / 60000) % 60);
  const segundos = Math.floor((milissegundos / 1000) % 60);
  const miliSegundos = Math.floor((milissegundos % 1000) / 10);

  const formatarNumero = (num: number) => (num < 10 ? `0${num}` : num);

  return (
    <View style={styles.container}>
      <Text style={styles.tempo}>
        {formatarNumero(minutos)}:{formatarNumero(segundos)}:{formatarNumero(miliSegundos)}
      </Text>
      <View style={styles.botoes}>
        <TouchableOpacity style={styles.resetButton} onPress={resetarCronometro}>
          <Text style={styles.buttonText}>Reiniciar</Text>
        </TouchableOpacity>
        <TouchableOpacity style={ ativo ? styles.pauseButton : styles.startButton } onPress={ativo ? pausarCronometro : iniciarCronometro}>
          <Text style={styles.buttonText}>{ativo ? "Pausar" : "Iniciar"}</Text>
        </TouchableOpacity>
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#fff',
  },
  tempo: {
    fontSize: 52,
    marginBottom: 10,
  },
  startButton: {
    backgroundColor: 'green',
    width: 90,
    height: 90, 
    borderRadius: 45, 
    justifyContent: 'center',
    alignItems: 'center',
  },
  pauseButton: {
    backgroundColor: 'gray',
    width: 90,
    height: 90, 
    borderRadius: 45, 
    justifyContent: 'center',
    alignItems: 'center',
  },
  resetButton: {
    backgroundColor: 'red',
    width: 90,
    height: 90, 
    borderRadius: 45, 
    justifyContent: 'center',
    alignItems: 'center',
  },
  buttonText: {
    color: '#fff',
    fontSize: 14,
    fontWeight: 'bold',
    margin: 10,
  },
  botoes: {
    flexDirection: 'row',
    justifyContent: 'space-between',
    width: '60%',
  },
});