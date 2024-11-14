import { Button, StyleSheet, Text, View } from "react-native";
import { useNavigation } from "@react-navigation/native";
import { StackTypes } from "../../../App";

const Detail = () => {

    const navigation = useNavigation<StackTypes>();

  return (
    <View style={styles.container}>
      <Text>Detail Screen</Text>
      <Button title="Go to home" onPress={() => navigation.popToTop()}></Button>
    </View>
  );
};

export default Detail;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
