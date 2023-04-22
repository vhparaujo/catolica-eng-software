package exercicios;

//4.Crie classes para uma loja que venda livros, CDs e DVDs. Crie um método que imprima: 
//
//• Para livros: nome, preço e autor;
//
//• Para CDs: nome, preço e número de faixas;
//
//• Para DVDs: nome, preço e duração.
//
//Crie uma classe Loja com o método main() que adicione 5 produtos diferentes (a sua escolha).

public class Loja {
	
	private String nome;
	private String autor;
	private double preco;
	private int numeroFaixas;
	private String duracao;
	
	public void adicionaLivros(String nome, double preco, String autor) {
		this.nome = nome;
		this.preco = preco;
		this.autor = autor;
	}
	
	public String imprimeLivros() {
		return this.nome + ", " + this.preco + ", " + this.autor;
	}
	
	public void adicionaCDs(String nome, double preco, int numeroFaixas) {
		this.nome = nome;
		this.preco = preco;
		this.numeroFaixas = numeroFaixas;
	}
	
	public String imprimeCDs() {
		return this.nome + ", " + this.preco + ", " + this.numeroFaixas;
	}
	
	public void adicionaDVDs(String nome, double preco, String duracao) {
		this.nome = nome;
		this.preco = preco;
		this.duracao = duracao;
	}
	
	public String imprimeDVDs() {
		return this.nome + ", " + this.preco + ", " + this.duracao;
	}
	
}
