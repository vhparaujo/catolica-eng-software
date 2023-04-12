import java.util.Scanner;

public class Exercicio2JavaBasico {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		
		int valor1 = 0;
		int valor2 = 0;
		int valor3 = 0;
		
		System.out.println("Escolha seu prato: ");
		System.out.println("1 - Vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne");
		int prato = scan.nextInt();
		scan.nextLine();
		
		if (prato == 1) {
			valor1 = 180;
		} else if (prato == 2) {
			valor1 = 230;
		} else if (prato == 3) {
			valor1 = 250;
		} else if (prato == 4) {
			valor1 = 350;
		} else {
			System.out.println("Valor nao permitido");
		}
		
		System.out.println();
		
		System.out.println("Escolha sua sobremesa: ");
		System.out.println("1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate");
		int sobremesa = scan.nextInt();
		scan.nextLine();
		
		if(sobremesa == 1) {
			valor2 = 75;
		} else if(sobremesa == 2) {
			valor2 = 110;
		} else if(sobremesa == 3) {
			valor2 = 170;
		} else if(sobremesa == 4) {
			valor2 = 200;
		} else {
			System.out.println("Valor nao permitido");
		}
		
		System.out.println();
		
		System.out.println("Escolha sua bebida: ");
		System.out.println("1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet");
		int bebida = scan.nextInt();
		scan.nextLine();
		
		if(bebida == 1) {
			valor3 = 20;
		} else if(bebida == 2) {
			valor3 = 70;
		} else if(bebida == 3) {
			valor3 = 100;
		} else if(bebida == 4) {
			valor3 = 65;
		} else {
			System.out.println("Valor nao permitido");
		}
		
		System.out.println();
		
		int caloriasGastas = valor1 + valor2 + valor3;
		System.out.println("Voce gastou " + caloriasGastas + " calorias.");
		
		scan.close();
		
	}

}
