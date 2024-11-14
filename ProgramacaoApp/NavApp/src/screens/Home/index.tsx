import { Button, ScrollView, StyleSheet, Text, View } from "react-native";
import { NavigationContainer, useNavigation } from "@react-navigation/native";
import { createNativeStackNavigator } from "@react-navigation/native-stack";
import { StackTypes } from "../../../App";

const Home = () => {
  const navigation = useNavigation<StackTypes>();

  return (
    <View style={styles.container}>
      <Text>Home Screen</Text>
      <Button
        title="Go to about"
        onPress={() => navigation.navigate("About", {name: "Victor", email: "teste@gmail.com"})}
      ></Button>
       <Button
        title="Go to detail"
        onPress={() => navigation.navigate("Detail")}
      ></Button>
    </View>
  );
};

export default Home;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
