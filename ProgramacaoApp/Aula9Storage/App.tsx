import { useEffect, useState } from "react";
import {
  Button,
  SafeAreaView,
  StyleSheet,
  Text,
  TextInput,
  View,
} from "react-native";
import AsyncStorage from '@react-native-async-storage/async-storage';

export default function App() {
  const [textInput, setTextInput] = useState("");
  const [name, setName] = useState("");

  useEffect(() => {
    loadData();
  }, []);

  async function loadData() {
    await AsyncStorage.getItem('@name').then((value) => {
      setName(value ?? "teste");
    });
  }

  async function addName() {
    await AsyncStorage.setItem('@name', textInput)
    setName(textInput);
    setTextInput("");
  }

  return (
    <SafeAreaView style={styles.container}>
      <View style={styles.txtForm}>
        <TextInput 
        style={styles.inputText} 
        placeholder="Type your name" 
        onChangeText={(value) => setTextInput(value)}/>
        <Button title="+" onPress={() => addName()} />
      </View>
      <Text style={styles.textName}>{name}</Text>
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: "center",
  },
  inputText: {
    borderWidth: 1,
    width: 350,
    padding: 20,
    borderRadius: 50,
  },
  txtForm: {
    flexDirection: "row",
    alignItems: "center",
    paddingHorizontal: 20,
  },
  textName: {
    marginTop: 20,
    fontSize: 30,
  },
});
