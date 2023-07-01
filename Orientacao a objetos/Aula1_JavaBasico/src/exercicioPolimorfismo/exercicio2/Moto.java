package exercicioPolimorfismo.exercicio2;

public class Moto extends Veiculo {
	
	private int ano;
	
	public Moto() {
		
	}

	public Moto(String modelo, double preco, int ano) {
		super(modelo, preco);
		this.ano = ano;
	}
	
	public void setAno(int ano) {
		this.ano = ano;
	}
	
	public void insertDados(String modelo, double preco, int ano) {
		if(ano >= 2008) {
			preco = preco + (preco * 0.1);
			super.setPreco(preco);
		}
		
		super.setModelo(modelo);
		super.setPreco(preco);
		this.ano = ano;
	}
	
	@Override
	public void printDados() {
		super.printDados();
		System.out.println("Ano: " + this.ano);
	}
	
}
