package exercicioPolimorfismo;

public class CD extends Midia {
	
	private int numeroMusicas;

	public CD() {
		
	}
	
	public CD(int codigo, double preco, String nome, int numeroMusicas) {
		super(codigo, preco, nome);
		this.numeroMusicas = numeroMusicas;
	}

	public int getNumeroMusicas() {
		return numeroMusicas;
	}

	public void setNumeroMusicas(int numeroMusicas) {
		this.numeroMusicas = numeroMusicas;
	}
	
	@Override
	public String getTipo() {
		CD cd = new CD();
		return cd.getClass().getSimpleName();
	}
	
	@Override
	public String getDetalhes() {
		return super.getDetalhes() + "\nNumero de Musicas: " + getNumeroMusicas();
	}
	
	public void insereDados(int codigo, double preco, String nome, int numeroMusicas) {
		super.insereDados(codigo, preco, nome);
		this.numeroMusicas = numeroMusicas;
	}
	
}
