package exercicios.ExercicioDia19;

public class Restaurante extends Empresa {
	
	private String comida;
	private double precoMedio;

	public Restaurante(String comida, double precoMedio) {
		this.comida = comida;
		this.precoMedio = precoMedio;
	}

	public void InsertData(String comida, double precoMedio) {
		this.comida = comida;
		this.precoMedio = precoMedio;
	}
	
	public String PrintData() {
		return "Comida: " + this.comida + "\nPreco R$" + precoMedio;
	}
	
}
