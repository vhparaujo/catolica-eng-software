import { StatusBar } from "expo-status-bar";
import { Button, StyleSheet, Text, TextInput, View } from "react-native";
import { db } from "./firebaseConfig";
import {
  getDoc,
  doc,
  onSnapshot,
  addDoc,
  collection,
  query,
  where,
  getDocs,
} from "firebase/firestore";
import { useEffect, useState } from "react";

export default function App() {
  const [name, setName] = useState("Loading...");
  const [textInputName, setTextInputName] = useState("");
  const [textInputCargo, setTextInputCargo] = useState("");

  const loadData = async () => {
    // const docRef = doc(db, "Users", "1");
    // getDoc(docRef).then((doc) => {
    //   if (doc.exists()) {
    //     setName(doc.data().nome + " - " + doc.data().cargo);
    //   } else {
    //     console.log("Nenhum dado encontrado!");
    //   }
    // });

    onSnapshot(doc(db, "Users", "1"), (doc) => {
      setName(doc.data()?.nome + " - " + doc.data()?.cargo);
    });
  };

  const addData = async (nome: string, cargo: string) => {
    try {
      const usersRef = collection(db, "Users");
      const q = query(
        usersRef,
        where("nome", "==", nome),
        where("cargo", "==", cargo)
      );
      const querySnapshot = await getDocs(q);

      if (!querySnapshot.empty) {
        alert("Usuário com este nome e cargo já existe!");
        return;
      }

      await addDoc(usersRef, { nome, cargo });
      alert("Usuário adicionado com sucesso!");
    } catch (error) {
      console.error("Erro ao adicionar usuário:", error);
      alert("Erro ao adicionar usuário.");
    }
  };

  useEffect(() => {
    loadData();
  }, []);

  return (
    <View style={styles.container}>
      <Text>{name}</Text>
      <TextInput
        onChangeText={setTextInputName}
        value={textInputName}
        placeholder="Escreva seu nome"
      />

      <TextInput
        onChangeText={setTextInputCargo}
        value={textInputCargo}
        placeholder="Escreva seu cargo"
      />
      <Button title="Add User" onPress={() => addData(textInputName, textInputCargo)}></Button>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
