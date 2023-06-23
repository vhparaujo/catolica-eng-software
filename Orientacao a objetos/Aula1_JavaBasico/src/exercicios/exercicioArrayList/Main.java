package exercicios.exercicioArrayList;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      
      Curso curso;
      ArrayList<Curso> cursos;
      
      Aluno aluno = new Aluno();
      ArrayList<Double> notas = new ArrayList<>();
      
      Telefone telefone;
      ArrayList<Telefone> telefones;
      
      Professor novoProf = new Professor();
      Endereco endereco;
      
        System.out.println("----------Cadastro do Professor---------");
        System.out.println("Digite o nome do professor: ");
        novoProf.setNome(sc.nextLine());
        System.out.println("Digite o email do Professor: ");
        novoProf.setEmail(sc.nextLine());
        System.out.println("Digite o cpf do Professor: ");
        novoProf.setCpf(sc.nextLine());
      
        endereco = new Endereco();
        System.out.println("Digite a Rua: ");
        endereco.setRua(sc.nextLine());
        System.out.println("Digite a Cidade: ");
        endereco.setCidade(sc.nextLine());
        System.out.println("Digite o Estado: ");
        endereco.setEstado(sc.nextLine());
        
        novoProf.setEndereco(endereco);
        
        telefones = new ArrayList<>();
        System.out.println("Digite os telefones do Professor - maximo 2");
        for(int i =0; i <2; i++){
            telefone = new Telefone();
            System.out.println("Digite o tipo do telefone: ");
            telefone.setTipo(sc.nextLine());
            System.out.println("Digite o DDD: ");
            telefone.setDdd(sc.nextLine());
            System.out.println("Digite o numero: ");
            telefone.setNumero(sc.nextLine());
            
            telefones.add(telefone);
        }
        
        novoProf.setTelefones(telefones);
        
        System.out.println("Digite a titulação: ");
        novoProf.setTitulacao(sc.nextLine());
        System.out.println("Digite o salario: ");
        novoProf.setSalario(sc.nextDouble());
            
        sc.nextLine();
        cursos = new ArrayList<>();
        System.out.println("Digite os cursos do Professor - maximo 2");
        for(int i =0; i <2; i++){
            curso = new Curso();
            System.out.println("Digite o nome do curso: ");
            curso.setNome(sc.nextLine());
            cursos.add(curso);
    }
         novoProf.setCursos(cursos);
         
         
        System.out.println("----------Cadastro do Aluno---------");
        System.out.println("Digite o nome do aluno: ");
        aluno.setNome(sc.nextLine());
        System.out.println("Digite o email do aluno: ");
        aluno.setEmail(sc.nextLine());
        System.out.println("Digite o cpf do aluno: ");
        aluno.setCpf(sc.nextLine());
      
        endereco = new Endereco();
        System.out.println("Digite a Rua: ");
        endereco.setRua(sc.nextLine());
        System.out.println("Digite a Cidade: ");
        endereco.setCidade(sc.nextLine());
        System.out.println("Digite o Estado: ");
        endereco.setEstado(sc.nextLine());
        
        aluno.setEndereco(endereco);
        
        telefones = new ArrayList<>();
        System.out.println("Digite os telefones do aluno - maximo 2");
        for(int i =0; i <2; i++){
            telefone = new Telefone();
            System.out.println("Digite o tipo do telefone: ");
            telefone.setTipo(sc.nextLine());
            System.out.println("Digite o DDD: ");
            telefone.setDdd(sc.nextLine());
            System.out.println("Digite o numero: ");
            telefone.setNumero(sc.nextLine());
            
            telefones.add(telefone);
        }
        
        aluno.setTelefones(telefones);
            
       curso = new Curso();
       System.out.println("Digite o curso do aluno: ");
       curso.setNome(sc.nextLine());
       
       aluno.setCurso(curso);
       
       System.out.println("Digite as notas do aluno: ");
       for(int i = 0; i < 2; i++){
           notas.add(sc.nextDouble());
       }
       
       aluno.setNotas(notas);
       
       //impressao
       novoProf.imprimir();
       aluno.imprimir();
}
}