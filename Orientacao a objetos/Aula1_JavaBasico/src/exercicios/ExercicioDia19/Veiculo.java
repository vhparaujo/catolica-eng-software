package exercicios.ExercicioDia19;

public class Veiculo extends Motor {
	
	private int peso;
	private int velocidadeMax;
	private double preco;
	
	public Veiculo() {
		
	}

	public Veiculo(int peso, int velocidadeMax, double preco) {
		this.peso = peso;
		this.velocidadeMax = velocidadeMax;
		this.preco = preco;
	}
	
	public void InsertVeiculo(int peso, int velocidadeMax, double preco) {
		this.peso = peso;
		this.velocidadeMax = velocidadeMax;
		this.preco = preco;
	}
	
	public String PrintVeiculo() {
		return "Peso: " + this.peso + "\nVelocidade Maxima: " + this.velocidadeMax + "\nPreco" + this.preco;
	}
	
}
