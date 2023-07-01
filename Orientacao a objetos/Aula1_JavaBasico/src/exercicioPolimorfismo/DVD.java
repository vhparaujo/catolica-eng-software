package exercicioPolimorfismo;

public class DVD extends Midia {
	
	private int numeroFaixas;

	public DVD() {
		
	}
	
	public DVD(int codigo, double preco, String nome, int numeroFaixas) {
		super(codigo, preco, nome);
		this.numeroFaixas = numeroFaixas;
	}

	public int getNumeroFaixas() {
		return numeroFaixas;
	}

	public void setNumeroFaixas(int numeroFaixas) {
		this.numeroFaixas = numeroFaixas;
	}
	
	@Override
	public String getTipo() {
		Midia dvd = new DVD();
		return dvd.getClass().getSimpleName();
	}
	
	@Override
	public String getDetalhes() {
		return super.getDetalhes() + "\nNumero de faixas: " + getNumeroFaixas();
	}
	
	public void insereDados(int codigo, double preco, String nome, int numeroFaixas) {
		super.insereDados(codigo, preco, nome);
		this.numeroFaixas = numeroFaixas;
	}
	
}
