package exercicios;

public class TesteLoja {

	public static void main(String[] args) {
		
		Loja loja = new Loja();
		
		loja.adicionaLivros("6 licoes", 29.99, "Mises");
		String livroString = loja.imprimeLivros();
		System.out.println(livroString);
		
		loja.adicionaLivros("Acao Humana", 79.99, "Mises");
		livroString = loja.imprimeLivros();
		System.out.println(livroString);
		
		loja.adicionaCDs("musicas MP3", 5.99, 100);
		String CDString = loja.imprimeCDs();
		System.out.println(CDString);
		
		loja.adicionaDVDs("O homem de aco", 2.99, "120");
		String DVDString = loja.imprimeDVDs();
		System.out.println(DVDString);
		
		
	}
}
