import { Button, StyleSheet, Text, View } from "react-native";
import { Route, useNavigation } from "@react-navigation/native";
import { RouteTypes, StackTypes } from "../../../App";
import { useRoute } from "@react-navigation/native";

const About = () => {

    const navigation = useNavigation<StackTypes>();
    const route = useRoute<RouteTypes>();

    const { name, email } = route.params;

  return (
    <View style={styles.container}>
      <Text>About Screen</Text>
      <Button title="Go to detail" onPress={() => navigation.navigate("Detail")}></Button>
      <Text>{name}</Text>
      <Text>{email}</Text>
    </View>
  );
};

export default About;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
