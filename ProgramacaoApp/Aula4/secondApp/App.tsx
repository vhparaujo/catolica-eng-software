import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View } from 'react-native';

export default function App() {
  return (
    <View style={styles.container}>
      <Text style={styles.title}>Victor Hugo</Text>
      <Text style={styles.title}>Teste</Text>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    marginHorizontal: 50,
    marginTop: 100
  },
  title: {
    fontSize: 20,
    color: '#F0852E',
    fontWeight: 'bold',
  },
});
