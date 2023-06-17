
package exercicios.exercicioArrayList;

import java.util.ArrayList;

public class Aluno extends Pessoa {
	
    private Curso curso;
    private ArrayList<Double>notas;
    
	public Curso getCurso() {
		return curso;
	}
	public void setCurso(Curso curso) {
		this.curso = curso;
	}
	public ArrayList<Double> getNotas() {
		return notas;
	}
	public void setNotas(ArrayList<Double> notas) {
		this.notas = notas;
	}
	
	
    
}
