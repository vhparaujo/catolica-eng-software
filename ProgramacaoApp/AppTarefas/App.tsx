import { useEffect, useState } from "react";
import {
  Button,
  FlatList,
  SafeAreaView,
  StyleSheet,
  Text,
  TextInput,
  TouchableOpacity,
  View,
} from "react-native";
import AsyncStorage from "@react-native-async-storage/async-storage";

export default function App() {
  const [textInput, setTextInput] = useState("");
  const [tasks, setTasks] = useState<string[]>([]);

  useEffect(() => {
    loadData();
  }, []);

  async function loadData() {
    let loadedNames = [];
    let index = 0;

    while (true) {
      const task = await AsyncStorage.getItem(`@task_${index}`);
      if (!task) break;
      loadedNames.push(task);
      index++;
    }
    setTasks(loadedNames);
  }

  async function addTask() {
    const newTasks = [...tasks, textInput];
    setTasks(newTasks);
    const index = newTasks.length - 1;

    await AsyncStorage.setItem(`@task_${index}`, textInput);
    setTextInput("");
  }

  return (
    <SafeAreaView style={styles.container}>
      <Text style={styles.title}>Tarefas</Text>

      <TextInput
        style={styles.inputText}
        placeholder="Add a new task"
        onChangeText={(value) => setTextInput(value)}
      />

      <TouchableOpacity style={styles.buttonStyle} onPress={() => addTask()}>
        <Text style={styles.buttonText}>Adicionar Tarefa</Text>
      </TouchableOpacity>

      <FlatList
        data={tasks}
        renderItem={({ item }) => (
          <View style={styles.listItem}>
            <Text style={styles.item}>{item}</Text>
          </View>
        )}
      />
      
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: "center",
    marginHorizontal: 10,
  },
  title: {
    fontSize: 28,
    fontWeight: "bold",
    marginVertical: 5,
  },
  inputText: {
    borderWidth: 0.5,
    width: "100%",
    padding: 10,
    borderRadius: 10,
    marginBottom: 15,
  },
  buttonStyle: {
    backgroundColor: "#3579F6",
    padding: 10,
    borderRadius: 20,
    width: "100%",
    marginBottom: 15,
  },
  buttonText: {
    color: "#fff",
    fontSize: 16,
    textAlign: "center",
    fontWeight: "bold",
  },
  item: {
    fontSize: 16,
    padding: 10,
    textAlign: "left",
    width: "100%",
  },
  listItem: {
    backgroundColor: "#F0F0F0",
    flexDirection: "row",
    justifyContent: "space-between",
    alignItems: "center",
    padding: 5,
    marginVertical: 5,
    borderRadius: 5,
  },
});
