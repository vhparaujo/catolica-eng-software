import { StatusBar } from "expo-status-bar";
import { StyleSheet, Text, View, Image, TextInput, Button } from "react-native";
import { useState } from "react";

function App() {
  const [name, setName] = useState("");
  const [idade, setIdade] = useState(20);

  let nome = "Fluzao";

  function save(name, idade) {
    if (name === '') {
      alert("Digite um nome");
    } else {
     setName('Name: ' + name)
     setIdade('Idade: ' + idade)
    }
  }

  return (
    <View style={{ marginTop: 60, paddingHorizontal: 20 }}>
      {/* <Header title={"Fluzão"}> </Header> */}

      {/* <Imagem 
      largura={350} 
      altura={300}
      /> */}

    

      {/* <Button title="Save" onPress={() => {save('Victor', 20)}}></Button> */}

      <Text style={{ fontSize: 32, color: "green", fontWeight: "bold" }}>
       {'Nome: ' + name}
      </Text>

      <Text style={{ fontSize: 32, color: "green", fontWeight: "bold" }}>
       {idade}
      </Text>

      <TextInput
        style={{ fontSize: 24, color: "green" }}
        placeholder="Digite seu nome"
        value={name}
        onChangeText={setName}
      ></TextInput>

    </View>
  );
}

export default App;

// function Imagem({altura, largura}) {
//   let img = 'https://www.netflu.com.br/wp-content/uploads/2023/04/nota-oficial-escudo-fluminense-e1695773478653.jpg'
//   return (
//     <Image
//       source={{ url: img }}
//       width={largura}
//       height={altura}
//     />
//   )
// }

// function Header({title}) {
//   return (
//     <Text style= {{fontSize: 32, color: 'green', fontWeight: 'bold'}}>
//       {title}
//     </Text>
//   )
// }
