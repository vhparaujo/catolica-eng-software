package exercicios.ExercicioDia19;

public class CarroPasseio extends Veiculo {
	
	private String cor;
	private String modelo;
	
	public CarroPasseio() {
		
	}

	public CarroPasseio(String cor, String modelo) {
		this.cor = cor;
		this.modelo = modelo;
	}
	
	public void InsertVeiculo(String cor, String modelo) {
		this.cor = cor;
		this.modelo = modelo;
	}
	
	public String PrintVeiculo() {
		return "Cor: " + this.cor + "\nModelo: " + this.modelo;
	}
	
}
