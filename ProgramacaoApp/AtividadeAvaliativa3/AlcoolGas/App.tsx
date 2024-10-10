import { StatusBar } from "expo-status-bar";
import { useState } from "react";
import {
  ImageBackground,
  StyleSheet,
  Text,
  TextInput,
  View,
} from "react-native";

export default function App() {
  const [a, setAlcool] = useState("");
  const [g, setGasolina] = useState("");

  const parseNumber = (string: string) => {
    const correctString = string.replace(",", ".");
    const num = parseFloat(correctString);

    if (isNaN(num)) {
      return 0;
    }
    return parseFloat(num.toFixed(2));
  };

  const calculateReturn = (alcool: string, gas: string) => {
    const alcohol = parseNumber(alcool);
    const gasolina = parseNumber(gas);

    const result = alcohol / gasolina;

    if (a === "" || g === "") {
      return "";
    }

    if (result <= 0.7) {
      return "Abasteça com Álcool";
    } else {
      return "Abasteça com Gasolina";
    }
  };

  return (
    <View style={styles.container}>
      <ImageBackground
        style={styles.image}
        resizeMode="cover"
        blurRadius={10}
        source={require("./assets/carro.png")}
      >
        <TextInput
          style={styles.input}
          placeholder="Digite o preço do Alcool (R$)"
          value={a}
          keyboardType="numeric"
          onChangeText={setAlcool}
        ></TextInput>

        <Text style={{ fontSize: 20, color: "red"}}>X</Text>

        <TextInput
          style={styles.input}
          placeholder="Digite o preço da Gasolina (R$)"
          value={g}
          keyboardType="numeric"
          onChangeText={setGasolina}
        ></TextInput>

        <Text style={{ fontSize: 20, color:"white" }}>{calculateReturn(a, g)}</Text>

        <StatusBar style="auto" />
      </ImageBackground>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  input: {
    fontSize: 20,
    backgroundColor: "#D9D9D9",
    borderRadius: 8,
    width: "90%",
    padding: 10,
    marginVertical: 10,
  },
  image: {
    flex: 1,
    justifyContent: "center",
    alignItems: "center",
  },
});
