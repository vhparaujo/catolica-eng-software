package exercicios.ExercicioDia19;

//1. Crie uma classe Rectangle com os atributos length e width,cada um dos quais assume o 
//padrão de 1. Forneça os métodos que calculam o perímetro e a área do retângulo.A classe 
//tem métodos set e get para o comprimento(length)e a largura(width).Os métodos set devem 
//verificar se length e width são,cada um,números de ponto flutuante maiores que 0,0 e 
//menores que 20,0. Escreva um programa para testar a classe Rectangle.

public class Rectangle {

	private double length;
	private double width;

	public double getLength() {
		return this.length;
	}

	public void setLength(double length) {
		if (length > 0 && length < 20) {
			this.length = length;
		} else {
			System.out.println("Valor inválido");
		}
	}

	public double getWidth() {
		return this.width;
	}

	public void setWidth(double width) {
		if (width > 0 && width < 20) {
			this.width = width;
		} else {
			System.out.println("Valor inválido");
		}
	}

	public double calculaPerimetro() {
		return this.width * 2 + this.length * 2;
	}

	public double calculaArea() {
		return this.width * this.length;
	}

}
