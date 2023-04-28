package Herança.Exercicio1;

public class Animal {
	
	private String nome;
	private double peso;
	
	public String getNome() {
		return this.nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public double getPeso() {
		return this.peso;
	}
	
	public void setPeso(double peso) {
		this.peso = peso;
	}
	
	@Override
	public String toString() {
		return "Nome do animal: " + this.nome + " \nPeso do animal: " + this.peso + "kg";
	}

}
