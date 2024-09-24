import { View, Text } from "react-native";

// Define a interface para os props
export type UserType = {
  id: number;
  nome: string;
  idade: number;
  email: string;
};

export default function User({ user }: { user: UserType }) {
  return (
    <View>
      <Text style={{ fontSize: 24 }}>Nome: {user.nome} </Text>
      <Text style={{ fontSize: 24 }}>Idade: {user.idade} </Text>
      <Text style={{ fontSize: 24 }}>Email: {user.email} </Text>
    </View>
  );
}
