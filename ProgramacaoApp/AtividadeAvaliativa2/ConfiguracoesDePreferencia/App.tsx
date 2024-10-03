import Slider from "@react-native-community/slider";
import { Picker } from "@react-native-picker/picker";
import { useState } from "react";
import {
  SafeAreaView,
  StyleSheet,
  Switch,
  Text,
  TouchableOpacity,
} from "react-native";
import { useColorScheme } from "react-native";

export const Colors = {
  light: {
    background: "#fff",
    text: "#000",
  },
  dark: {
    background: "#000",
    text: "#fff",
  },
};

export default function App() {
  const colorScheme = useColorScheme();

  const [appTheme, setTheme] = useState(0);
  const [colorOptions, setColor] = useState([
    { key: 1, nome: "Dark Mode", color: Colors.dark },
    { key: 2, nome: "Light Mode", color: Colors.light },
    { key: 3, nome: "Automático", color: Colors[colorScheme ?? "light"] },
  ]);

  const [localColor, setLocalColor] = useState(Colors.light); // Estado para guardar a cor atual

  const [value, setValue] = useState(12);
  const [isOn, setIsOn] = useState(false);

  const colorMode = colorOptions.map((value, key) => {
    return <Picker.Item key={key} value={key} label={value.nome} />;
  });

  const chooseColor = (themeIndex: number) => {
    const selectedTheme = colorOptions[themeIndex];

    if (selectedTheme.key === 1) {
      setLocalColor(Colors.dark); // Modo escuro
    } else if (selectedTheme.key === 2) {
      setLocalColor(Colors.light); // Modo claro
    } else if (selectedTheme.key === 3) {
      setLocalColor(Colors[colorScheme ?? "light"]); // Automático
    }
    setTheme(themeIndex);
  };

  const resetar = () => {
    setValue(16);
    setIsOn(false);
    chooseColor(1);
  };

  return (
    <SafeAreaView
      style={[
        styles.container,
        {
          backgroundColor: localColor.background,
        },
      ]}
    >
      <Text style={[styles.title, { color: localColor.text }]}>
        Configurações de Preferências
      </Text>

      <Picker
        itemStyle={{ color: localColor.text }}
        selectedValue={appTheme}
        onValueChange={(item) => chooseColor(item)}
      >
        {colorMode}
      </Picker>
      <Text style={{ fontSize: 20, color: localColor.text }}>
        {colorOptions[appTheme].nome}
      </Text>

      <Slider
        minimumValue={12}
        maximumValue={30}
        value={value}
        onValueChange={(value) => setValue(value)}
        step={1}
      />
      <Text style={{ fontSize: 20, color: localColor.text }}>
        {value.toFixed(1)}
      </Text>
      <Text
        style={{ fontSize: value, color: localColor.text }}
      >{`Texto de tamanho: ${value}`}</Text>
      <Switch
        style={styles.switch}
        onValueChange={(item) => setIsOn(item)}
        value={isOn}
        trackColor={{ false: "gray", true: "green" }}
        ios_backgroundColor="#3e3e3e"
      ></Switch>
      <Text style={{ fontSize: 20, color: localColor.text }}>
        {isOn ? "Ligado" : "Desligado"}
      </Text>

      <TouchableOpacity style={styles.botaoResetar} onPress={resetar}>
        <Text style={{ fontSize: 13, color: localColor.text }}>Resetar</Text>
      </TouchableOpacity>
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignContent: "center",
  },
  title: {
    fontSize: 24,
    marginTop: 10,
    marginLeft: 10,
  },
  switch: {
    marginTop: 20,
    marginBottom: 5,
  },
  botaoResetar: {
    backgroundColor: "red",
    width: 60,
    height: 60,
    borderRadius: 30,
    justifyContent: "center",
    alignItems: "center",
    alignContent: "center",
  },
});
