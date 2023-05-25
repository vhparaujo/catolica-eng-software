package exercicios.ExercicioDia19;

//2. Crie uma classe chamada Empresa capaz de armazenar os dados de uma empresa 
//(Nome, Endereço, Cidade, Estado, CEP e Fone). 
//Inclua um construtor sem argumentos e um que receba os dados como argumentos e os inicialize. 
//Escreva duas funções, uma para fazer a interface com o usuário da entrada de dados, Insert(), 
//e outra para imprimir os dados, Print(). 
//
//Use a classe Empresa como base para criar a classe Restaurante. Inclua o tipo de comida, 
//o preço médio de um prato, duas funções construtoras, a interface de entrada de dados, 
//InsertData(), e a função que imprima os dados, Print(). 
//Construa um programa para testar a classe Restaurante. 

public class Empresa {
	
	private String nome;
	private String endereco;
	private String cidade;
	private String estado;
	private String cep;
	private String telefone;

	
	public Empresa() {
		
	}

	public Empresa(String nome, String endereco, String cidade, String estado, String cep, String telefone) {
		this.nome = nome;
		this.endereco = endereco;
		this.cidade = cidade;
		this.estado = estado;
		this.cep = cep;
		this.telefone = telefone;
	}

	public void Insert(String nome, String endereco, String cidade, String estado, String cep, String telefone) {
		this.nome = nome;
		this.endereco = endereco;
		this.cidade = cidade;
		this.estado = estado;
		this.cep = cep;
		this.telefone = telefone;
	}
	
	public String Print() {
		return "Nome: " + this.nome + "\nEndereço: " + this.endereco + "\nCidade: " + this.cidade
				+ "\nEstado: "+ this.estado + "\nCep: " + this.cep + "\nTelefone: " + this.telefone;
	}
	
}
