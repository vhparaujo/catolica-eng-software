package Herança.Exercicio2;

public class TesteLoja {

	public static void main(String[] args) {
		
		Empregado empregado = new Empregado();
		Vendedor vendedor = new Vendedor();
		Gerente gerente = new Gerente();
		Cliente cliente = new Cliente();
		
		cliente.setNome("Victor Hugo");
		cliente.setSexo("Masculino");
		cliente.setValorDivida(500);
		cliente.setAnoNascimento(2002);
		
		System.out.println(cliente);
		
		System.out.println("--------------");
		
		gerente.setNome("Hugo");
		gerente.setIdade(30);
		gerente.setMatricula("30985843");
		gerente.setNomeGerencia("Gerencia do Financeiro");
		gerente.setSalario(10000);
		
		System.out.println(gerente);
		
		System.out.println("--------------");
		
		vendedor.setNome("Suarez");
		vendedor.setSalario(4000);
		vendedor.setValorVendas(500000);
		vendedor.setQntVendas(350);
		
		System.out.println(vendedor);

		
	}

}
