package Herança.Exercicio3;

public class Vendedor extends Empregado {
	
	private double valorVendas;
	private double comissaoVendas = 0.3;
	
	public double getValorVendas() {
		return valorVendas;
	}
	public void setValorVendas(double valorVendas) {
		this.valorVendas = valorVendas;
	}
	public double getComissaoVendas() {
		return comissaoVendas;
	}
	public void setComissaoVendas(double comissaoVendas) {
		this.comissaoVendas = comissaoVendas;
	}
	
	@Override
	public double calcularSalario() {
		return super.calcularSalario() + this.valorVendas * this.comissaoVendas;
	}
	
}
