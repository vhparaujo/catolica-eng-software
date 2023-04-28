package Herança.Exercicio3;

public class Testes {
	
	public static void main(String[] args) {
		
		Fornecedor fornecedor = new Fornecedor();
		Empregado empregado = new Empregado();
		Administrador adm = new Administrador();
		Operario operario = new Operario();
		Vendedor vendedor = new Vendedor();
		
		fornecedor.setNome("Victor");
		fornecedor.setEndereco("Ponte Alta Norte");
		fornecedor.setTelefone("61999999999");
		fornecedor.setValorCredito(500);
		fornecedor.setValorDivida(200);
		
		double saldo = fornecedor.obterSaldo();
		System.out.println(saldo);
		
		empregado.setSalarioBase(2000);
		
		double salario = empregado.calcularSalario();
		System.out.println(salario);
		
		adm.setAjudaDeCusto(500);
		adm.setSalarioBase(2000);
		
		double salarioAdm = adm.calcularSalario();
		System.out.println(salarioAdm);
		
		operario.setSalarioBase(2000);
		operario.setValorProducao(1000);
		double salarioOperario = operario.calcularSalario();
		System.out.println(salarioOperario);
		
		vendedor.setSalarioBase(1000);
		vendedor.setValorVendas(100000);
		double salarioVendedor = vendedor.calcularSalario();
		System.out.println(salarioVendedor);
		
	}

}
