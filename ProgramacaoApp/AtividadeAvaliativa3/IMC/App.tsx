import { StatusBar } from "expo-status-bar";
import { useState } from "react";
import {
  StyleSheet,
  Text,
  View,
  Image,
  TextInput,
  ScrollView,
} from "react-native";

export default function App() {
  const [peso, setPeso] = useState("");
  const [altura, setAltura] = useState("");

  const parseNumber = (string: string) => {
    const correctString = string.replace(",", ".");
    const num = parseFloat(correctString);

    if (isNaN(num)) {
      return 0;
    }
    return parseFloat(num.toFixed(2));
  };

  const calculateIMC = (peso: number, altura: number) => {
    const imc =  peso / (altura * altura)
    const imcFormatted = imc.toFixed(2);
    
    if (isNaN(imc) || altura <= 0 || peso <= 0) {
      return ""
    }

    if (imc < 18.5) {
      return `Magreza: ${imcFormatted}`
    } else if (imc < 25) {
      return `Normal: ${imcFormatted}`
    } else if (imc < 30) {
      return `Sobrepeso: ${imcFormatted}`
    } else if (imc < 40) {
      return `Obesidade: ${imcFormatted}`
    } else {
      return `Obesidade Grave: ${imcFormatted}`
    }
  }

  return (
    <ScrollView>
      <View style={styles.container}>
        <Text style={styles.title}>Calcule seu IMC</Text>

        <Image
          style={styles.image}
          source={{
            uri: "https://static.wixstatic.com/media/e406d2_6ac039aebdf64ad69ce8c8eb9c79c8fd~mv2.jpg/v1/fill/w_1132,h_644,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/e406d2_6ac039aebdf64ad69ce8c8eb9c79c8fd~mv2.jpg",
          }}
        />

        <TextInput
          style={styles.input}
          placeholder="Digite seu peso(kg)"
          value={peso}
          keyboardType="numeric"
          onChangeText={setPeso}
        ></TextInput>

        <TextInput
          style={styles.input}
          placeholder="Digite sua altura(m)"
          value={altura}
          keyboardType="numeric"
          onChangeText={setAltura}
        ></TextInput>

        <Text style={{fontSize: 18}}>{calculateIMC(parseNumber(peso), parseNumber(altura))}</Text>

        <StatusBar style="auto" />
      </View>
    </ScrollView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
    marginTop: 50,
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
    width: 350,
    height: 200,
    paddingHorizontal: 30,
    marginBottom: 20,
  },
  title: {
    fontSize: 24,
  },
  button: {
    backgroundColor: "blue",
    fontSize: 14,
    borderRadius: 10,
    padding: 10,
  }
});
