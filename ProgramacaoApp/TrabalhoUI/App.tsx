import { StatusBar } from "expo-status-bar";
import {
  ImageBackground,
  SafeAreaView,
  StyleSheet,
  Text,
  View,
} from "react-native";

export default function App() {
  const balls = [1, 2, 3, 4, 5];
  const secondBalls = [1, 2, 3, 4];
  const containers = [1, 2, 3];

  return (
    <SafeAreaView style={styles.container}>
      <View style={styles.headerContainer}>
        {balls.map((ball, index) => (
          <View key={index} style={styles.headerBalls}>
            <Text style={styles.textBalls}>{ball}</Text>
          </View>
        ))}
      </View>

      <View style={styles.line} />

      <ImageBackground
        style={styles.image}
        resizeMode="cover"
        borderRadius={10}
        source={require("./assets/carro.png")}
      >
        <View style={styles.container3}>
          <View style={styles.container2}>
            <View style={styles.overlay}>
              <Text style={{ fontSize: 14, color: "black" }}>vhparaujo</Text>
            </View>
            <View style={styles.overlay}>
              <Text style={{ fontSize: 14, color: "black" }}>vhparaujo</Text>
            </View>
          </View>

          <View style={styles.container2}>
            <View></View>
            <View style={styles.overlay}>
              <Text style={{ fontSize: 14, color: "black" }}>vhparaujo</Text>
            </View>
          </View>
        </View>
      </ImageBackground>

      <View style={styles.headerContainer}>
        <Text style={{ fontSize: 20, color: "black" }}>Design</Text>
        <View style={styles.ball}>
          <Text style={{ fontSize: 14, color: "white" }}>V</Text>
        </View>
      </View>

      <View style={styles.headerContainer}>
        {containers.map((index) => (
          <View key={index} style={styles.backgrounds}></View>
        ))}
      </View>

      <View style={styles.headerContainer}>
        {secondBalls.map((ball, index) => (
          <View key={index} style={styles.ball2}>
            <Text style={styles.textBalls}>{ball}</Text>
          </View>
        ))}
      </View>

      <StatusBar style="auto" />
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
  headerContainer: {
    flexDirection: "row",
    justifyContent: "space-between",
    width: "100%",
    padding: 20,
  },
  headerBalls: {
    backgroundColor: "gray",
    width: 40,
    height: 40,
    borderRadius: 20,
    justifyContent: "center",
    alignItems: "center",
  },
  ball: {
    backgroundColor: "gray",
    width: 30,
    height: 30,
    borderRadius: 15,
    justifyContent: "center",
    alignItems: "center",
  },
  ball2: {
    backgroundColor: "gray",
    width: 60,
    height: 60,
    borderRadius: 30,
    justifyContent: "center",
    alignItems: "center",
  },
  textBalls: {
    color: "white",
    fontSize: 18,
  },
  line: {
    width: "90%",
    height: 1,
    backgroundColor: "gray",
    marginBottom: 10,
  },
  image: {
    flex: 1,
    justifyContent: "center",
    alignItems: "center",
    marginHorizontal: 20,
  },
  overlay: {
    width: 80,
    height: 40,
    backgroundColor: "white",
    borderRadius: 20,
    justifyContent: "center",
    alignItems: "center",
  },
  container2: {
    flexDirection: "row",
    justifyContent: "space-between",
    width: "100%",
    padding: 10,
  },
  container3: {
    flexDirection: "column",
    justifyContent: "space-between",
    height: "100%",
    padding: 10,
  },
  backgrounds: {
    width: 100,
    height: 200,
    backgroundColor: "gray",
    borderRadius: 20,
    justifyContent: "center",
    alignItems: "center",
  },
});
