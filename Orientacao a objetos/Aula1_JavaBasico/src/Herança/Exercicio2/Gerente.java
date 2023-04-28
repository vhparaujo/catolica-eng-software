package Herança.Exercicio2;

public class Gerente extends Empregado {
	
	private String nomeGerencia;

	public String getNomeGerencia() {
		return nomeGerencia;
	}

	public void setNomeGerencia(String nomeGerencia) {
		this.nomeGerencia = nomeGerencia;
	}
	
	@Override
	public String toString() {
		return "Nome: " + super.getNome() + " \nIdade: " + super.getIdade() + "\nMatricula: "
				+ super.getMatricula() + "\nNome Gerencia: " + this.nomeGerencia + "\nValor INSS gerente R$"
				+ super.valorInss();
	}
	
}
