package exercicios;

//Crie uma classe em Java chamada fatura para uma loja de suprimentos de 
//informática.A classe deve conter quatro variáveis–o número(String),a 
//descrição(String),a quantidade comprada de um item(int)e o preço por 
//item(double).A classe deve ter um construtor e um método get e set para cada 
//variável de instância.Além disso,forneça um método chamado getTotalFatura que 
//calcula o valor da fatura e depois retorna o valor como um double.
//Se o valor não for positivo,ele deve ser configurado como 0. 
//Se o preço por item não for positivo,ele deve ser configurado como 0.0.
//Escreva um aplicativo de teste chamado FaturaTeste(em outro arquivo)que demonstra as capacidades da classe Fatura.

public class Fatura {
	
	private String numero;
	private String descricao;
	private int qtdComprada;
	private double precoItem;
	
	public Fatura(String numero) {
		this.numero = numero;
	}

	public String getNumero() {
		return numero;
	}

	public void setNumero(String numero) {
		this.numero = numero;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public int getQtdComprada() {
		return qtdComprada;
	}

	public void setQtdComprada(int qtdComprada) {
		this.qtdComprada = qtdComprada;
	}

	public double getPrecoItem() {
		return precoItem;
	}

	public void setPrecoItem(double precoItem) {
		if(this.precoItem < 0) {
			this.precoItem = 0;
		} else {
			this.precoItem = precoItem;
		}
	}
	
	public double getTotalFatura() {
		return this.precoItem * this.qtdComprada;
	}

}
