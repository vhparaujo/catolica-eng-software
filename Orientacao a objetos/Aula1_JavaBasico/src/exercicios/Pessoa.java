package exercicios;

import java.util.*;

//3) Criar a classe Pessoa com as seguintes características:
//
//• atributos: idade e dia, mês e ano de nascimento, nome da pessoa
//
//• métodos: o calculaIdade(), que recebe a data atual em dias, mês e anos e calcula e armazena no atributo idade 
//a idade atual da pessoa o informaIdade(), que retorna o valor da idade, o metodo toString(), que retorna os dados 
//do objeto Pessoa, o ajustaDataDeNascimento(), que recebe dia, mês e ano de nascimento como parâmetros e preenche 
//nos atributos correspondentes do objeto. 
//
//• Criar dois objetos da classe Pessoa, um representando Albert Einstein (nascido em 14/3/1879) e o
//outro representando Isaac Newton (nascido em 4/1/1643)
//
//• Fazer uma classe principal que instancie os objetos, inicialize e mostre quais seriam as idades de 
//Einstein e Newton caso estivessem vivos. 
//
//Alterar o programa do exercício para substituir o método ajustaDataDeNascimento por um construtor.

public class Pessoa {
	
	//Calcula a Idade baseado em java.util.Date

	public int calculaIdade(Date dataNasc){

	Calendar dateOfBirth = new GregorianCalendar();

	dateOfBirth.setTime(dataNasc);

	 

	// Cria um objeto calendar com a data atual

	Calendar today = Calendar.getInstance();

	 

	// Obtém a idade baseado no ano

	int age = today.get(Calendar.YEAR) - dateOfBirth.get(Calendar.YEAR);

	 

	dateOfBirth.add(Calendar.YEAR, age);

	 

	//se a data de hoje é antes da data de Nascimento, então diminui 1(um)

	if (today.before(dateOfBirth)) {

	age--;

	}

	return age;

	}
	

}
