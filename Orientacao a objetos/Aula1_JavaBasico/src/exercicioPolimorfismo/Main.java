package exercicioPolimorfismo;

public class Main {

	public static void main(String[] args) {
		
		//Midia midia = new Midia();
		DVD dvd = new DVD();
		CD cd = new CD();
		
		dvd.insereDados(55, 99.90, "Avatar", 7);
		dvd.printDados();
		
		System.out.println("\n---------------\n");
		
		cd.insereDados(44, 49.90, "Michael Jackson", 15);
		cd.printDados();
		
	}

}
