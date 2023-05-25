package exercicios.ExercicioDia19;

public class Caminhao extends Veiculo {
	
	private double toneladas;
	private int alturaMaxima;
	private int comprimento;
	
	public Caminhao() {
		this.toneladas = 0;
		this.alturaMaxima = 0;
		this.comprimento = 0;
	}
	
	public Caminhao(double toneladas, int alturaMaxima, int comprimento) {
		this.toneladas = toneladas;
		this.alturaMaxima = alturaMaxima;
		this.comprimento = comprimento;
	}
	
	public void Insert(double toneladas, int alturaMaxima, int comprimento) {
		this.toneladas = toneladas;
		this.alturaMaxima = alturaMaxima;
		this.comprimento = comprimento;
	}
	
	public String PrintCaminhao() {
		return "Toneladas: " + this.toneladas + "\nAlturaMaxima: " + this.alturaMaxima +
				"\nComprimento: " + this.comprimento;
	}
	
}
