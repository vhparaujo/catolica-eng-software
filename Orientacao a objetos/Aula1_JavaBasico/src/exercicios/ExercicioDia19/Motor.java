package exercicios.ExercicioDia19;

public class Motor {
	
	private int cilindrada;
	private int potencia;
	
	public Motor() {
		this.cilindrada = 0;
		this.potencia = 0;
	}

	public Motor(int cilindrada, int potencia) {
		this.cilindrada = cilindrada;
		this.potencia = potencia;
	}
	
	public void InsertMotor(int cilindrada, int potencia) {
		this.cilindrada = cilindrada;
		this.potencia = potencia;
	}
	
	public String PrintMotor() {
		return "Cilindrada: " + this.cilindrada + "\nPotencia: " + this.potencia;
	}
	
}
