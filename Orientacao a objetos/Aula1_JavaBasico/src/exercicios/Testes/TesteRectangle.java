package exercicios.Testes;

import exercicios.ExercicioDia19.*;

public class TesteRectangle {

	public static void main(String[] args) {
		
		Rectangle retangulo = new Rectangle();
		
		retangulo.setLength(5.0);
		retangulo.setWidth(10.0);
		
		double perimetro = retangulo.calculaPerimetro();
		double area = retangulo.calculaArea();
		
		System.out.println(perimetro);
		System.out.println(area);
		
	}
}
