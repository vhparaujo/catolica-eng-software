import { useState } from "react";
import {
  StyleSheet,
  Text,
  TouchableOpacity,
  View,
  ImageBackground,
} from "react-native";

export default function App() {
  const [numeroPessoas, setNumeroPessoas] = useState(0);

  const adicionarPessoa = () => {
    setNumeroPessoas(numeroPessoas + 1);
  };

  const removerPessoa = () => {
    if (numeroPessoas <= 0) {
      return;
    } else {
      setNumeroPessoas(numeroPessoas - 1);
    }
  };

  const resetPessoas = () => {
    setNumeroPessoas(0);
  };

  return (
    <View style={styles.container}>
      <ImageBackground
        style={styles.image}
        resizeMode="cover"
        blurRadius={10}
        source={{
          uri: "https://i.pinimg.com/originals/dc/dc/64/dcdc64a1495bfacfca3a4d65cf87dc45.jpg",
        }}
      >
        <Text style={styles.totalPessoas}>N° de pessoas: {numeroPessoas}</Text>
        <View style={styles.botoes}>
          <TouchableOpacity style={styles.removeButton} onPress={removerPessoa}>
            <Text style={styles.buttonText}>Remover</Text>
          </TouchableOpacity>
          <TouchableOpacity style={styles.addButton} onPress={adicionarPessoa}>
            <Text style={styles.buttonText}>Adicionar</Text>
          </TouchableOpacity>
        </View>
        <TouchableOpacity style={styles.resetButton} onPress={resetPessoas}>
          <Text style={styles.buttonText}>Resetar</Text>
        </TouchableOpacity>
      </ImageBackground>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  totalPessoas: {
    fontSize: 34,
    marginBottom: 10,
    color: "#fff",
  },
  addButton: {
    backgroundColor: "green",
    width: 90,
    height: 90,
    borderRadius: 45,
    justifyContent: "center",
    alignItems: "center",
  },
  removeButton: {
    backgroundColor: "red",
    width: 90,
    height: 90,
    borderRadius: 45,
    justifyContent: "center",
    alignItems: "center",
  },
  resetButton: {
    backgroundColor: "gray",
    width: 90,
    height: 90,
    borderRadius: 45,
    justifyContent: "center",
    alignItems: "center",
  },
  buttonText: {
    color: "#fff",
    fontSize: 13,
    fontWeight: "bold",
    margin: 10,
  },
  botoes: {
    flexDirection: "row",
    justifyContent: "space-between",
    width: "60%",
  },
  image: {
    flex: 1,
    justifyContent: "center",
    alignItems: "center",
  },
});
