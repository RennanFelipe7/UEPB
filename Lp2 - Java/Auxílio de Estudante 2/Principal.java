import java.util.ArrayList;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        ArrayList <Estudante> listaDeAlunos = new ArrayList<Estudante>();
        int numeroDeAlunos;
        Scanner Entrada = new Scanner(System.in);
        Scanner EntradaNum = new Scanner(System.in);
        Universidade universidade = new Universidade();
        Endereco enderecoUniversidade = new Endereco();
        Contato contatoUniversidade = new Contato();
        System.out.println("\nDigite as informacoes da universidade : ");
        System.out.print("\nNome : ");
        universidade.setNomeUniversidade(Entrada.nextLine());
        System.out.print("\nCampus : ");
        universidade.setCampus(Entrada.nextLine());
        System.out.println("\nEndereco da universidade");
        System.out.print("\nPais : ");
        enderecoUniversidade.setPais(Entrada.nextLine()); 
        System.out.print("\nEstado : ");
        enderecoUniversidade.setEstado(Entrada.nextLine()); 
        System.out.print("\nCidade : ");
        enderecoUniversidade.setCidade(Entrada.nextLine());
        System.out.print("\nRua : ");
        enderecoUniversidade.setRua(Entrada.nextLine());
        System.out.print("\nNumero : ");
        enderecoUniversidade.setNumero(Entrada.nextLine());
        universidade.setEndereco(enderecoUniversidade); 

        System.out.println("\nContato da univercidade");
        System.out.print("\nEmail : ");
        contatoUniversidade.setEmail(Entrada.nextLine());
        System.out.print("\nTelefone : ");
        contatoUniversidade.setTelefone(Entrada.nextLine());
        System.out.print("\nRede social : ");
        contatoUniversidade.setRedeSocial(Entrada.nextLine());
        universidade.setContato(contatoUniversidade);

        System.out.print("\nQuantos alunos estao matriculados na universidade e vao ser cadastrados ? ");
        numeroDeAlunos = EntradaNum.nextInt();
        for(int a = 0; a < numeroDeAlunos; a++){
            Estudante estudante = new Estudante();
            Disciplina disciplina = new Disciplina();
            Endereco enderecoAluno = new Endereco();
            Contato contatoAluno = new Contato();
            System.out.print("\nDigite o nome do aluno " + (a + 1) + " : ");
            estudante.setNome(Entrada.nextLine());
            System.out.print("\nDigite o sexo do(a) " + estudante.getNome() + " : ");
            estudante.setSexo(Entrada.nextLine());
            System.out.print("\nDigite a idade do(a) " + estudante.getNome() + " : ");
            estudante.setIdade(Entrada.nextLine());
            System.out.print("\nDigite a matricula do(a) " + estudante.getNome() + " : ");
            estudante.setMatricula(Entrada.nextLine());

            System.out.print("\nDigite o endereco do(a) " + estudante.getNome() + " : ");
            System.out.print("\n\nDigite o Pais do(a) " + estudante.getNome() + " : ");
            enderecoAluno.setPais(Entrada.nextLine()); 
            System.out.print("\nDigite o Estado do(a) " + estudante.getNome() + " : ");
            enderecoAluno.setEstado(Entrada.nextLine());
            System.out.print("\nDigite a Cidade do(a) " + estudante.getNome() + " : ");
            enderecoAluno.setCidade(Entrada.nextLine());
            System.out.print("\nDigite a Rua do(a) " + estudante.getNome() + " : ");
            enderecoAluno.setRua(Entrada.nextLine());
            System.out.print("\nDigite o Numero do(a) " + estudante.getNome() + " : ");
            enderecoAluno.setNumero(Entrada.nextLine());
            estudante.setEndereco(enderecoAluno);

            System.out.print("\nDigite o contato do(a) " + estudante.getNome() + " : ");
            System.out.print("\n\nDigite o Email do(a) " + estudante.getNome() + " : ");
            contatoAluno.setEmail(Entrada.nextLine());
            System.out.print("\nDigite o Telefone do(a) " + estudante.getNome() + " : ");
            contatoAluno.setTelefone(Entrada.nextLine());
            System.out.print("\nDigite a Rede social do(a) " + estudante.getNome() + " : ");
            contatoAluno.setRedeSocial(Entrada.nextLine());
            estudante.setContato(contatoAluno);

            System.out.print("\nDigite as notas do aluno(a) " + estudante.getNome() + " : ");
            System.out.println();
            float nUT1[] = new float[4];
            float nUT2[] = new float[4];
            for(int j = 0; j < 4; j ++){
                System.out.print("\nNota " + (j + 1) + " da unidade tematica 1 : ");
                nUT1[j] = EntradaNum.nextFloat();
            }
            disciplina.setNotasUT1(nUT1);
            for(int k = 0; k < 4; k ++){ 
                System.out.print("\nNota " + (k + 1) + " da unidade tematica 2 : ");
                nUT2[k] = EntradaNum.nextFloat();
            }
            disciplina.setNotasUT2(nUT2);
            System.out.println("\nInformacoes da disciplina");
            System.out.print("\nNome da disciplina : ");
            disciplina.setNomeDisciplina(Entrada.nextLine());
            System.out.print("\nQuantidade de faltas na disciplina : ");
            disciplina.setNumeroFaltas(Entrada.nextLine());
            System.out.print("\nNome do professor : ");
            disciplina.setNomeProfessor(Entrada.nextLine());
            System.out.print("\nPeriodo letivo : ");    
            disciplina.setPeriodoLetivo(Entrada.nextLine()); 
            estudante.setDisciplina(disciplina); 
             
            listaDeAlunos.add(estudante);

        }
        System.out.println("\n-----------------------------------------------------------------");
        System.out.println("\nRelatorio Final : ");
        System.out.println("\nDados da Universidade : ");
        System.out.println("\nNome = " + universidade.getNomeUniversidade());
        System.out.println("\nCampus = " + universidade.getCampus());
        
        System.out.println("\nEndereco da universidade : ");
        System.out.println("\nPais = " + universidade.getEndereco().getPais());
        System.out.println("\nEstado = " + universidade.getEndereco().getEstado());
        System.out.println("\nCidade = " + universidade.getEndereco().getCidade());
        System.out.println("\nRua = " + universidade.getEndereco().getRua());
        System.out.println("\nNumero  = " + universidade.getEndereco().getNumero());

        System.out.println("\nContato da universidade : ");
        System.out.println("\nEmail = " + universidade.getContato().getEmail());
        System.out.println("\nTelefone = " + universidade.getContato().getTelefone());
        System.out.println("\nRede social = " + universidade.getContato().getRedeSocial());

        System.out.println("\nDados de todos os estudantes cadastrados, media final e situacao");
        for(int i = 0; i < numeroDeAlunos; i++){
            System.out.println("\nDados pessoais : ");
            System.out.println("\nNome do aluno(a) = " + listaDeAlunos.get(i).getNome());
            System.out.println("\nSexo do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getSexo());
            System.out.println("\nIdade do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getIdade());
            System.out.println("\nMatriula do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getMatricula());

            System.out.println("\nEndereco do aluno(a) : " + listaDeAlunos.get(i).getNome());
            System.out.println("\nPais do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getEndereco().getPais());
            System.out.println("\nEstado do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getEndereco().getEstado());
            System.out.println("\nCidade do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getEndereco().getCidade());
            System.out.println("\nRua do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getEndereco().getRua());
            System.out.println("\nNumero do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getEndereco().getNumero());
           
            System.out.println("\nContatos do aluno(a) : " + listaDeAlunos.get(i).getNome());
            System.out.println("\nEmail do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getContato().getEmail());
            System.out.println("\nTelefone do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getContato().getTelefone());
            System.out.println("\nRede social do aluno(a) " + listaDeAlunos.get(i).getNome() + " = " + listaDeAlunos.get(i).getContato().getRedeSocial());

            System.out.println("\n-------------------------------------------------------------");

            CalculaMediaFinal qualMedia = new CalculaMediaFinal();
            System.out.println("\nMedia final do aluno(a) " + listaDeAlunos.get(i).getNome() + " Foi de " + qualMedia.calculamediafinal(listaDeAlunos.get(i).getDisciplina().getNotasUT1(), listaDeAlunos.get(i).getDisciplina().getNotasUT2()));
            if (qualMedia.calculamediafinal(listaDeAlunos.get(i).getDisciplina().getNotasUT1(), listaDeAlunos.get(i).getDisciplina().getNotasUT2()) < 5){
                System.out.println("\nO aluno(a) " + listaDeAlunos.get(i).getNome() + " foi REPROVADO");
            }else if((qualMedia.calculamediafinal(listaDeAlunos.get(i).getDisciplina().getNotasUT1(), listaDeAlunos.get(i).getDisciplina().getNotasUT2()) >= 5 && qualMedia.calculamediafinal(listaDeAlunos.get(i).getDisciplina().getNotasUT1(), listaDeAlunos.get(i).getDisciplina().getNotasUT2()) < 7)){
                System.out.println("\nO aluno(a) " + listaDeAlunos.get(i).getNome() + " fez PROVA FINAL");
            }else{
                System.out.println("\nO aluno(a) " + listaDeAlunos.get(i).getNome() + " foi APROVADO");
            }
        }
        System.out.println();
        Entrada.close();
        EntradaNum.close();
    }
}
