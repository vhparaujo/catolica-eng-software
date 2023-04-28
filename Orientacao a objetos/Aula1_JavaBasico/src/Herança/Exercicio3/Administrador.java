package Herança.Exercicio3;

public class Administrador extends Empregado {

	
	private double ajudaDeCusto;
	
	public double getAjudaDeCusto() {
		return ajudaDeCusto;
	}

	public void setAjudaDeCusto(double ajudaDeCusto) {
		this.ajudaDeCusto = ajudaDeCusto;
	}

	@Override
	public double calcularSalario() {
		return super.calcularSalario() + this.ajudaDeCusto;
	}
	
}
