package Herança.Exercicio1;

public class TesteAnimal {

	public static void main(String[] args) {
		
		Peixe peixe = new Peixe();
		Cachorro cachorro = new Cachorro();
		
		peixe.setNome("peixinho");
		peixe.setPeso(35);
		peixe.setTipoHabitat("agua doce");
		System.out.println(peixe);
		
		cachorro.setNome("Marry");
		cachorro.setPeso(70);
		cachorro.setRaca("shitzu");
		System.out.println(cachorro);

	}

}
