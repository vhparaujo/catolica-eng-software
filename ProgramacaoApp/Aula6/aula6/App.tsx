import { View, FlatList } from 'react-native';
import { useState } from 'react';
import User, { UserType } from './User/index';

export default function App() {

  const [users, setUsers] = useState<UserType[]>(
    [
      { id: 1, nome: 'Leonardo', idade: 25, email: 'leonardo@example.com' },
      { id: 2, nome: 'Maria', idade: 30, email: 'maria@example.com' },
      { id: 3, nome: 'João', idade: 22, email: 'joao@example.com' },
      { id: 4, nome: 'Ana', idade: 28, email: 'ana@example.com' },
      { id: 5, nome: 'Pedro', idade: 35, email: 'pedro@example.com' },
      { id: 6, nome: 'Clara', idade: 27, email: 'clara@example.com' },
      { id: 7, nome: 'Felipe', idade: 24, email: 'felipe@example.com' },
      { id: 8, nome: 'Juliana', idade: 29, email: 'juliana@example.com' },
      { id: 9, nome: 'Lucas', idade: 32, email: 'lucas@example.com' },
      { id: 10, nome: 'Bruna', idade: 26, email: 'bruna@example.com' },
      { id: 11, nome: 'Gabriel', idade: 31, email: 'gabriel@example.com' },
      { id: 12, nome: 'Fernanda', idade: 23, email: 'fernanda@example.com' },
      { id: 13, nome: 'Ricardo', idade: 34, email: 'ricardo@example.com' },
      { id: 14, nome: 'Sofia', idade: 21, email: 'sofia@example.com' },
      { id: 15, nome: 'Daniel', idade: 33, email: 'daniel@example.com' },
      { id: 15, nome: 'teste', idade: 45, email: 'teste@gmail.com'}
    ]
  );

  return (
    <View style={{ flex: 1, marginTop: 50}}> 
      <FlatList data={users} renderItem={({ item }) => <User user={item}/>}>
      </FlatList>
    </View>
  );
}