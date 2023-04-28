package Herança.Exercicio3;

public class Operario extends Empregado {
	
	private double valorProducao;
	private double comissao = 0.2;
	
	public double getValorProducao() {
		return valorProducao;
	}
	public void setValorProducao(double valorProducao) {
		this.valorProducao = valorProducao;
	}
	public double getComissao() {
		return comissao;
	}
	public void setComissao(double comissao) {
		this.comissao = comissao;
	}
	
	@Override
	public double calcularSalario() {
		return super.calcularSalario() + this.valorProducao * this.comissao;
	}

}
