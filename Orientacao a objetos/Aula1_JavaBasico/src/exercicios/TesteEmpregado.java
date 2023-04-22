package exercicios;

public class TesteEmpregado {

	public static void main(String[] args) {
		
		Empregado empregado = new Empregado("Victor", "Araujo");
		Empregado empregado2 = new Empregado("Hugo", "Pacheco");
		
		empregado.setSalarioMensal(20000);
		empregado2.setSalarioMensal(10000);
		
		double salarioAnualEmpregado = empregado.getSalarioAnual();
		double salarioAnualEmpregado2 = empregado2.getSalarioAnual();
		
		System.out.println("Salario anual do empregado 1: " + salarioAnualEmpregado);
		System.out.println("Salario anual do empregado 2: " + salarioAnualEmpregado2);
		
		System.out.println("Salario anual do empregado 1 com o aumento de 10%: " + (empregado.getSalarioAumentoAnual() 
		+ empregado.getSalarioAnual()));
		System.out.println("Salario anual do empregado 2 com o aumento de 10%: " + (empregado2.getSalarioAumentoAnual()
		+ empregado2.getSalarioAnual()));
		
	}

}
