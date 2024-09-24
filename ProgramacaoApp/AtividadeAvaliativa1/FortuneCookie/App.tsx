import { StatusBar } from "expo-status-bar";
import { StyleSheet, Text, View, Image, TouchableOpacity } from "react-native";
import fortunes from "./fortunes.json";
import { useState } from "react";

export default function App() {
  const [fortune, setFortune] = useState('');
  const [cookieBroken, setCookieBroken] = useState(false);

  const breakCookie = () => {
    const randomIndex = Math.floor(Math.random() * fortunes.fortunes.length);
    setFortune(fortunes.fortunes[randomIndex]);
    setCookieBroken(true);
  };

  const resetCookie = () => {
    setFortune('');
    setCookieBroken(false);
  };

  return (
    <View style={styles.container}>
      <Image
        source={
          cookieBroken
            ? require('./assets/cookie_open.png') // Imagem do biscoito quebrado
            : require('./assets/cookie_closed.png') // Imagem do biscoito fechado
        }
        style={styles.cookieImage}
      />

      {fortune ? (
        <Text style={styles.fortuneText}>{fortune}</Text>
      ) : (
        <Text style={styles.instructions}>
          Toque no biscoito para quebrá-lo e revelar sua sorte!
        </Text>
      )}

      <TouchableOpacity
        style={styles.button}
        onPress={cookieBroken ? resetCookie : breakCookie}
      >
        <Text style={styles.buttonText}>
          {cookieBroken ? 'Abrir Novo Biscoito' : 'Quebrar o Biscoito'}
        </Text>
      </TouchableOpacity>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#f5f5f5',
  },
  cookieImage: {
    width: 400,
    height: 200,
    marginBottom: 20,
    objectFit: 'contain',
  },
  fortuneText: {
    fontSize: 18,
    fontStyle: 'italic',
    textAlign: 'center',
    marginHorizontal: 20,
    marginBottom: 20,
  },
  instructions: {
    fontSize: 16,
    color: '#333',
    textAlign: 'center',
    marginHorizontal: 20,
    marginBottom: 20,
  },
  button: {
    backgroundColor: '#ff9900',
    paddingVertical: 10,
    paddingHorizontal: 20,
    borderRadius: 5,
  },
  buttonText: {
    color: '#fff',
    fontSize: 18,
    fontWeight: 'bold',
  },
});