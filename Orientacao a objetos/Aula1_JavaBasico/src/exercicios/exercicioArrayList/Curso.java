package exercicios.exercicioArrayList;

public class Curso {
	
    private String nome;

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public void imprimirCurso() {
        System.out.println("Curso: " + getNome());
    }
    
}
