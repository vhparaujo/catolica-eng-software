import { StyleSheet } from "react-native";
import { NavigationContainer, RouteProp } from "@react-navigation/native";
import {
  createNativeStackNavigator,
  NativeStackNavigationProp,
} from "@react-navigation/native-stack";

import Home from "./src/screens/Home";
import About from "./src/screens/About";
import Detail from "./src/screens/Detail";

const Stack = createNativeStackNavigator();

type StackNavigation = {
  Home: undefined;
  About: {
    name: string;
    email: string;
  };
  Detail: undefined;
};

export type RouteTypes = RouteProp<StackNavigation, 'About'>;
export type StackTypes = NativeStackNavigationProp<StackNavigation>;

export default function App() {
  return (
    <NavigationContainer>
      <Stack.Navigator>
        <Stack.Screen
          name="Home"
          component={Home}
          options={
            { title: "Inicio", 
              headerStyle: {backgroundColor: "yellow"} ,
            }
          }
        />
        <Stack.Screen name="About" component={About} />
        <Stack.Screen name="Detail" component={Detail} />
      </Stack.Navigator>
    </NavigationContainer>
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
