import { StatusBar } from "expo-status-bar";
import { StyleSheet, Text, View, Image, TouchableOpacity } from "react-native";
import quotesData from "./quotes.json";
import { useState } from "react";

export default function App() {
  const [currentQuote, setCurrentQuote] = useState(quotesData.quotes[0]);

  const showRandomQuote = () => {
    const randomIndex = Math.floor(Math.random() * quotesData.quotes.length);
    setCurrentQuote(quotesData.quotes[randomIndex]);
  };

  return (
    <View style={styles.container}>
      <Image source={{ uri: currentQuote.image }} style={styles.authorImage} />
      <Text style={styles.quoteText}>"{currentQuote.quote}"</Text>
      <Text style={styles.authorName}>- {currentQuote.author}</Text>
      <TouchableOpacity style={styles.button} onPress={showRandomQuote}>
        <Text style={styles.buttonText}>Nova Citação</Text>
      </TouchableOpacity>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: "center",
    alignItems: "center",
    padding: 16,
    backgroundColor: "#8FE3FF",
  },
  authorImage: {
    width: 150,
    height: 150,
    borderRadius: 75,
    marginBottom: 20,
  },
  quoteText: {
    fontSize: 18,
    fontStyle: "italic",
    textAlign: "center",
    marginBottom: 10,
  },
  authorName: {
    fontSize: 16,
    fontWeight: "bold",
    marginBottom: 20,
  },
  button: {
    backgroundColor: 'green', // Cor do background do botão
    paddingVertical: 10,
    paddingHorizontal: 20,
    borderRadius: 5,
  },
  buttonText: {
    color: '#fff', // Cor do texto do botão
    fontSize: 16,
    fontWeight: 'bold',
  },
});
