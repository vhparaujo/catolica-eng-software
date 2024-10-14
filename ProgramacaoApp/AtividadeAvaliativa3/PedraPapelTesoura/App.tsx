import { StatusBar } from "expo-status-bar";
import { useState } from "react";
import {
  StyleSheet,
  Text,
  TouchableOpacity,
  Image,
  SafeAreaView,
  View,
} from "react-native";

export default function App() {
  const jogadas = {
    pedra: require("./assets/pedra.png"),
    papel: require("./assets/papel.png"),
    tesoura: require("./assets/tesoura.png"),
  };

  const [playerChoose, setPlayerChoose] = useState(jogadas.papel);
  const [adversarioChoose, setAdversarioChoose] = useState(jogadas.pedra);
  const [resultado, setResultado] = useState('');

  const randomChoose = () => {
    const choose = [jogadas.pedra, jogadas.papel, jogadas.tesoura];
    const random = Math.floor(Math.random() * 3);
    return choose[random];
  };

  const chooseWinner = (player: any, adversario: any) => {
    if (player === adversario) {
      return "Empate";
    }

    if (
      (player === jogadas.pedra && adversario === jogadas.tesoura) ||
      (player === jogadas.tesoura && adversario === jogadas.papel) ||
      (player === jogadas.papel && adversario === jogadas.pedra)
    ) {
      return "Você ganhou!";
    }

    return "Você perdeu!";
  }

  const jogar = (playerJogada: any) => {
    const adversario = randomChoose(); 
    const resultado = chooseWinner(playerJogada, adversario); 
    setPlayerChoose(playerJogada); 
    setAdversarioChoose(adversario); 
    setResultado(resultado);
  };

  const getResultadoStyle = () => {
    if (resultado === "Você ganhou!") {
      return { color: 'green' };
    } else if (resultado === "Você perdeu!") {
      return { color: 'red' };
    } else {
      return { color: 'orange' };
    }
  };

  return (
    <SafeAreaView style={styles.container}>
      <Text style={styles.title}>Pedra, Papel e Tesoura</Text>

    <View style={styles.game}> 
      <View style={styles.botoesContainer}>
        <View style={styles.botoes}>
          <Text style={styles.players}>Sua jogada:</Text>
          <Image style={styles.image} source={playerChoose}></Image>
        </View>

        <Text>VS</Text>

        <View style={styles.botoes}>
          <Text style={styles.players}>Adversário:</Text>
          <Image style={styles.image} source={adversarioChoose}></Image>
        </View>
      </View>
      <Text style={[styles.resultado, getResultadoStyle()]}>{resultado}</Text>
    </View>

      
      <View style={styles.botoesContainer}>
        <TouchableOpacity
          style={styles.botoes}
          onPress={() => {
            jogar(jogadas.papel);
          }}
        >
          <Image style={styles.image} source={jogadas.papel}></Image>
          <Text>Papel</Text>
        </TouchableOpacity>

        <TouchableOpacity
          style={styles.botoes}
          onPress={() => {
            jogar(jogadas.tesoura);
          }}
        >
          <Image style={styles.image} source={jogadas.tesoura}></Image>
          <Text>Tesoura</Text>
        </TouchableOpacity>

        <TouchableOpacity
          style={styles.botoes}
          onPress={() => {
            jogar(jogadas.pedra);
          }}
        >
          <Image style={styles.image} source={jogadas.pedra}></Image>
          <Text>Pedra</Text>
        </TouchableOpacity>
      </View>

      <StatusBar style="auto" />
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  title: {
    fontSize: 20,
    fontWeight: "bold",
    textAlign: "center",
  },
  botoes: {
    flex: 1,
    alignItems: "center",
    justifyContent: "center",
  },
  image: {
    width: 100,
    height: 100,
    borderRadius: 10,
  },
  botoesContainer: {
    flex: 1,
    flexDirection: "row",
    justifyContent: "space-around",
    alignItems: "center",
  },
  game: {
    flex: 1,
    flexDirection: 'column',
    justifyContent: "space-around",
    alignItems: "center",
  },
  resultado: {
    marginTop: 24,
    fontSize: 18,
    fontWeight: 'bold',
  },
  players: {
    marginTop: 20,
    fontSize: 18,
    fontWeight: 'bold',
  },
});
