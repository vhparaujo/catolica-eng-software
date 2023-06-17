package polimorfismo;

public class Pessoa {

	private String nome;
	private double salario;
	
	@Override
	public String toString() {
		return "Pessoa [nome=" + nome + ", salario=" + salario + "]";
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getSalario() {
		return salario;
	}

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public Pessoa(String nome, double salario) {
		super();
		this.nome = nome;
		this.salario = salario;
	}
	
	
	
	
	

}
