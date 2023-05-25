package exercicios.Testes;

import exercicios.ExercicioDia19.*;

public class TesteRestaurante {

	public static void main(String[] args) {
		
		Restaurante restaurante = new Restaurante("macarrao", 30);
		
		System.out.println(restaurante.PrintData());		
		
		restaurante.Insert("Braga", "Taguatinga", "Brasilia", "DF", "724423212", "6199999999");
		
		System.out.println(restaurante.Print());
		
		
	}

}
