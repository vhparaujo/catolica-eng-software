package aplicacao;

public class Conta {
	
	// atributos da Conta
	private int agencia;
	private int numero;
	private double saldo;
	private Cliente titular;
	
	public Conta(int agencia, int numero) {
		this.agencia = agencia;
		this.numero = numero;
	}
	
	public int getAgencia() {
		return this.agencia;
	}
	
	public int setAgencia(int agencia) {
		return this.agencia = agencia;
	}
	
	public int getNumero() {
		return this.agencia;
	}
	
	public int setNumero(int numero) {
		return this.numero = numero;
	}
	
	public double getSaldo() {
		return this.saldo;
	}
	
	public void setSaldo(double saldo) {
		if(saldo < 0) {
			System.out.println("Valor invalido");
		} else {
			this.saldo = saldo;
		}
	}
	
	public Cliente getTitular() {
		return this.titular;
	}
	
	
	public void setTitular(Cliente titular) {
		this.titular = titular;
	}
}
