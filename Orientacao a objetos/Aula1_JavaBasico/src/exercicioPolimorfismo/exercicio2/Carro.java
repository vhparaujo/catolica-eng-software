package exercicioPolimorfismo.exercicio2;

public class Carro extends Veiculo {
	
	private double km;
	
	public Carro() {
		
	}
	
	public Carro(String modelo, double preco, double km) {
		super(modelo, preco);
		this.km = km;
	}

	public void setKm(double km) {	
		this.km = km;
	}
	
	public void insertDados(String modelo, double preco, double km) {
		if(km > 100000) {
			preco = preco - (preco * 0.08);
			super.setPreco(preco);
		}
		
		super.setModelo(modelo);
		super.setPreco(preco);
		this.km = km;
	}
	
	@Override
	public void printDados() {
		super.printDados();
		System.out.println("Quilometragem: " + this.km);
	}
	
}
