package exercicios;

public class TesteFatura {

	public static void main(String[] args) {
		
		Fatura fatura = new Fatura("78654343");
		
		fatura.setPrecoItem(3.50);
		fatura.setQtdComprada(2);
		
		fatura.setDescricao("O produro eh um computador mac que eh usado em sua maioria para programacao");
		
		System.out.println(fatura.getTotalFatura());
		System.out.println(fatura.getDescricao());
	
	}
}
