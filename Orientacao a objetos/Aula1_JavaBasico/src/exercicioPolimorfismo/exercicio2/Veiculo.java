package exercicioPolimorfismo.exercicio2;

public class Veiculo {
	
	private String modelo;
	private double preco;
	
	public Veiculo() {
		
	}
	
	public Veiculo(String modelo, double preco) {
		this.modelo = modelo;
		this.preco = preco;
	}
	
	public double getPreco() {
		return this.preco;
	}
	
	public void setPreco(double preco) {
		this.preco = preco;
	}
	
	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public void printDados() {
		System.out.println("\nModelo: " + this.modelo + "\nPreco: " + this.preco);
	}
	
}
