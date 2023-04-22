package aplicacao;

import java.util.Scanner;

public class TesteConta {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		Conta conta = new Conta(2222, 252525);
		Cliente cliente = new Cliente();
		
		System.out.println("Digite seu nome: ");
		String nome = scan.nextLine();
		cliente.setNome(nome);
		
		System.out.println("Digite seu email: ");
		String email = scan.nextLine();
		cliente.setEmail(email);
		
		System.out.println("Digite seu cpf: ");
		String cpf = scan.nextLine();
		cliente.setCpf(cpf);
		
		// setando o cliente na conta
		conta.setTitular(cliente);
		
		// setando o saldo do cliente
		conta.setSaldo(1750);
		
		// imprimindo o nome do cliente
		System.out.println("Nome do cliente: " + conta.getTitular().getNome() + "\nCPF do cliente: " + 
		cliente.getCpf() + "\nEmail do cliente: " + cliente.getEmail() + "\nSaldo do cliente: " + conta.getSaldo());
		
	}

}
