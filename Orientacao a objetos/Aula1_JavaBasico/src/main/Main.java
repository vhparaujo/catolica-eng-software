package main;
import java.util.Locale;
import java.util.Scanner;

import javax.swing.JOptionPane;

public class Main {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		//scan.useLocale(Locale.US);
		
		System.out.println("Hello World");
		
		System.out.println("Digite seu nome: ");
		String nome = scan.nextLine();
		
		System.out.println("Digite sua idade: ");
		int idade = scan.nextInt();
		scan.nextLine();
		
		System.out.println("Digite seu cpf: ");
		String cpf = scan.nextLine();
		
		System.out.println("Nome: " + nome
				+ "\nIdade: " + idade 
				+ "\nCPF: " + cpf);
		
		String nome2 = JOptionPane.showInputDialog("Digite seu nome: ");
		
		//JOptionPane.showMessageDialog(null, "O nome e: " + nome2);
		
		int idadeInt = Integer.parseInt(JOptionPane.showInputDialog("Digite sua idade: "));
		
		double salario = Double.parseDouble(JOptionPane.showInputDialog("Digite seu salario:"));
		
		JOptionPane.showMessageDialog(null, "Nome: " +nome2
										+ "\nidade: " +idadeInt
										+ "\nsalario: " +salario);
		
		scan.close();
		
	}

}
