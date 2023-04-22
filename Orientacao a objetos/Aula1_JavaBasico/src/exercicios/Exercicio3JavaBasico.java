package exercicios;

import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Scanner;

public class Exercicio3JavaBasico {

	public static void main(String[] args) {

		double pessoas = 0;
		double mulheres = 0;
		int idade;
		
		Scanner scan = new Scanner(System.in);

		do {
			
			String sexo;
			String corDosOlhos;
			String corDosCabelos;
			double salario;

			System.out.println("Digite seu sexo: ");
			System.out.println("m ou f: ");
			try {
				sexo = scan.nextLine();
			} catch(NoSuchElementException sL) {
				sexo = scan.nextLine();
			}

			Boolean sexoF = Objects.equals(sexo, "f");
			Boolean sexoM = Objects.equals(sexo, "m");

			if (!sexoF && !sexoM) {
				System.out.println("sexo nao encontrado");
			} else {
				System.out.println("sexo cadastrado");
			}

			System.out.println();

			System.out.println("Escreva a cor dos seus olhos: ");
			System.out.println("a - azuis; v - verdes; c - castanho; p - pretos");
			corDosOlhos = scan.nextLine();

			Boolean a = Objects.equals(corDosOlhos, "a");
			Boolean v = Objects.equals(corDosOlhos, "v");
			Boolean c = Objects.equals(corDosOlhos, "c");
			Boolean p = Objects.equals(corDosOlhos, "p");

			if (!a && !v && !c && !p) {
				System.out.println("cor dos olhos invalida");
			} else {
				System.out.println("cor dos olhos cadastrada");
			}

			System.out.println();

			System.out.println("Escreva a cor do seu cabelo: ");
			System.out.println("(l (loiros), c (castanhos), p (pretos), r (ruivos))");
			corDosCabelos = scan.nextLine();

			Boolean l = Objects.equals(corDosCabelos, "l");
			Boolean r = Objects.equals(corDosCabelos, "r");
			Boolean cc = Objects.equals(corDosCabelos, "c");
			p = Objects.equals(corDosCabelos, "p");

			if (!l && !r && !cc && !p) {
				System.out.println("cor do cabelo invalida");
			} else {
				System.out.println("cor do cabelo cadastrada");
			}

			System.out.println();

			System.out.println("Digite sua idade: ");
			idade = scan.nextInt();
			scan.nextLine();

			if (idade < 10 || idade > 100) {
				System.out.println("idade invalida");
			} else {
				System.out.println("idade cadastrada");
			}

			System.out.println();

			System.out.println("Digite seu salario: ");
			salario = scan.nextDouble();
			scan.nextLine();

			if (salario < 0) {
				System.out.println("salario invalido");
			} else {
				System.out.println("salario cadastrado");
			}

			System.out.println();

			if (sexoF && (idade >= 18) && (idade <= 35) && c && cc) {
				mulheres++;
			}

			pessoas++;

		} while (idade != -1);
		
		scan.close();

		System.out.println("A porcentagem de mulheres entre 18 e 35 anos com olhos e cabelo castanhos eh igual a: "
				+ ((mulheres / pessoas) * 100) + "%");

	}

}
