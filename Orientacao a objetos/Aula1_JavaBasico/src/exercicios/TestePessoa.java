package exercicios;

import java.util.Calendar;
import java.util.Locale;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class TestePessoa {

	public static void main(String[] args) {

		Calendar c = Calendar.getInstance();
		c.set(1879, Calendar.MARCH, 14);
		Date data = c.getTime();
		
		Calendar cAtual = Calendar.getInstance();
		Date dataAtual = cAtual.getTime();
		
		SimpleDateFormat dataPreFormatada = new SimpleDateFormat("dd/MM/yyyy");
		String dataFormatada = dataPreFormatada.format(data);
		System.out.println(dataFormatada);
		
		SimpleDateFormat dataAtualPreFormatada = new SimpleDateFormat("dd/MM/yyyy");
		String dataAtualFormatada = dataAtualPreFormatada.format(dataAtual);
		System.out.println(dataAtualFormatada);
		
		String[] teste = dataAtualFormatada.split("/");
		System.out.println(teste[0]);
		
		Pessoa p = new Pessoa();
			p.calculaIdade(data);
		
			System.out.println(p);
	}
}
