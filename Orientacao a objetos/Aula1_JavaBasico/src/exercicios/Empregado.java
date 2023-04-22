package exercicios;

/*
 * 2. Crie uma classe em Java chamada Empregado que inclui três partes de informações como variáveis de 
 * instância – nome (String), sobrenome (String) e um salário mensal (double). A classe deve ter um construtor, 
 * métodos get e set para cada variável de instância. Escreva um aplicativo de teste chamado 
 * EmpregadoTeste que cria dois objetos Empregado e exibe o salário anual de cada objeto.
 *  Então dê a cada Empregado um aumento de 10% e exiba novamente o salário anual de cada Empregado. 
 */

public class Empregado {
	
	private String nome;
	private String sobrenome;
	private double salarioMensal;
	
	public Empregado(String nome, String sobrenome) {
		this.nome = nome;
		this.sobrenome = sobrenome;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getSobrenome() {
		return this.sobrenome;
	}
	
	public void setSobrenome(String sobrenome) {
		this.sobrenome = sobrenome;
	}
	
	public double getSalarioMensal() {
		return this.salarioMensal;
	}
	
	public void setSalarioMensal(double salarioMensal) {
		this.salarioMensal = salarioMensal;
	}
	
	public double getSalarioAnual() {
		return this.salarioMensal * 12;
	}
	
	public double getSalarioAumentoAnual() {
		return this.salarioMensal * 0.1 * 12;
	}
	
}
