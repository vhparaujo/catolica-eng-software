package exercicioPolimorfismo.exercicio2;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		Moto moto = new Moto();
		Carro carro = new Carro();
		
		int escolha;
		
		double precoCarro = 0;
		double precoMoto = 0;
		
		do {
			
			System.out.println("Digite 1 para carro ou 2 para moto: ");
			System.out.println("Após concluir o cadastro de todos os veículos, digite 0 para finalizar.");
			escolha = scan.nextInt();
			scan.nextLine();

			switch (escolha) {
			case 1: {

				System.out.println("Digite o modelo do carro: ");
				String modelo = scan.nextLine();
				System.out.println("Digite o preco do carro: ");
				precoCarro = scan.nextDouble();
				carro.setPreco(precoCarro);
				scan.nextLine();
				System.out.println("Digite a quilometragem do carro: ");
				double km = scan.nextDouble();
				scan.nextLine();
				
				carro.insertDados(modelo, carro.getPreco(), km);

				carro.printDados();
				
				System.out.println();
				
				break;

			}
			case 2: {
				
				System.out.println("Digite o modelo da moto: ");
				String modelo = scan.nextLine();
				System.out.println("Digite o preco da moto: ");
				precoMoto = scan.nextDouble();
				moto.setPreco(precoMoto);
				scan.nextLine();
				System.out.println("Digite o ano da moto: ");
				int ano = scan.nextInt();
				scan.nextLine();

				moto.insertDados(modelo, moto.getPreco(), ano);

				moto.printDados();
				
				System.out.println();
				
				break;

			}
			
			default:
				System.out.println("Cadastro concluido!!\n");
			}
			
		} while (escolha != 0);
		
		double precoTotal = carro.getPreco() + moto.getPreco();
		System.out.println("Preco total dos veiculos: R$" + precoTotal);

		scan.close();
	}

}
