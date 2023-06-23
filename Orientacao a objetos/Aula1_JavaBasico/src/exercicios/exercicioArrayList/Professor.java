package exercicios.exercicioArrayList;

import java.util.ArrayList;

public class Professor extends Pessoa{
    private String titulacao;
    private double salario;
    private ArrayList<Curso> cursos;
    
    //metodo construtor 
    public Professor(){
        super();
    }

    public String getTitulacao() {
        return titulacao;
    }

    public void setTitulacao(String titulacao) {
        this.titulacao = titulacao;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public ArrayList<Curso> getCursos() {
        return cursos;
    }

    public void setCursos(ArrayList<Curso> cursos) {
        this.cursos = cursos;
    }
    
    public void imprimir(){
        System.out.println("----------Dados do Professor----------");
        super.imprimir();
        System.out.println("Salario: "+getSalario());
        System.out.println("Titulação: "+getTitulacao());
        for(int i = 0; i<getCursos().size();i++){
            getCursos().get(i).imprimirCurso();
        }
    }
}