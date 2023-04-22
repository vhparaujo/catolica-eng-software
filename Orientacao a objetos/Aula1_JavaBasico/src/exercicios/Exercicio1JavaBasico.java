package exercicios;

import java.util.Scanner;

public class Exercicio1JavaBasico {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);

		System.out.println("Escreva o numero de carros vendidos: ");
		int carros = scan.nextInt();
		scan.nextLine();

		System.out.println("Escreva qual o valor total de suas vendas: ");
		double valorTotal = scan.nextDouble();
		scan.nextLine();

		System.out.println("Escreva o seu salario mensal: ");
		double salario = scan.nextDouble();
		scan.nextLine();

		System.out.println("Escreva o valor da comissao ganha em cada carro: ");
		double comissao = scan.nextDouble();
		scan.nextLine();

		double valorDasVendas = valorTotal * 0.05;

		double salarioFinal = (carros * comissao) + salario + valorDasVendas;

		System.out.println("O seu salario total foi de: " + salarioFinal);

		scan.close();

	}

}
