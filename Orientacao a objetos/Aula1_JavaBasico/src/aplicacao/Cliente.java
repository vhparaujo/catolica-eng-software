package aplicacao;

public class Cliente {
	
	private String nome;
	private String cpf;
	private String email;

	public String getNome() {
		return this.nome;
	}
	
	public String setNome(String nome) {
		return this.nome = nome;
	}

	public String getCpf() {
		return this.cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public String getEmail() {
		return this.email;
	}

	public void setEmail(String email) {
		this.email = email;
	}
	
}
