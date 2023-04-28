package Herança.Exercicio1;

public class Cachorro extends Animal {
	
	private String raca;

	public String getRaca() {
		return raca;
	}

	public void setRaca(String raca) {
		this.raca = raca;
	}
	
	@Override
	public String toString() {
		return super.toString() + "\nRaca: " + this.raca;
	}

}
