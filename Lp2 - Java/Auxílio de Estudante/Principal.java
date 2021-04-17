import java.util.Scanner;

public class Principal {
    public static void main(String[] args){
        int querParar;
        String nomePessoal, idade, sexo, celular, email, pais, estado, cidade, bairro, rua, disciplina, nomeProfessor, sala, turno;
        float n1, n2, n3, n4;
        Estudante estudante = new Estudante();
        Contato contato = new Contato();
        Endereco endereco = new Endereco();
        Disciplina disciplinaInstancia = new Disciplina();
        UnidadeTematica unidadeTematica1 = new UnidadeTematica();
        UnidadeTematica unidadeTematica2 = new UnidadeTematica();
        CalculaMedia qualMedia = new CalculaMedia();
        Scanner Entrada = new Scanner(System.in);
        do {
            System.out.println("\nDigite os dados do aluno : ");
            System.out.print("\nNome : ");
            nomePessoal = Entrada.nextLine();
            estudante.setNome(nomePessoal);
            System.out.print("\nIdade : ");
            idade = Entrada.nextLine();
            estudante.setIdade(idade);
            System.out.print("\nSexo : ");
            sexo = Entrada.nextLine();
            estudante.setSexo(sexo);
            System.out.print("\nCelular : ");
            celular = Entrada.nextLine();
            contato.setCelular(celular);
            System.out.print("\nE-mail : ");
            email = Entrada.nextLine();
            contato.setEmail(email);
            System.out.print("\nPaís : ");
            pais = Entrada.nextLine();
            endereco.setPais(pais);
            System.out.print("\nEstado : ");
            estado = Entrada.nextLine();
            endereco.setEstado(estado);
            System.out.print("\nCidade : ");
            cidade = Entrada.nextLine();
            endereco.setCidade(cidade);
            System.out.print("\nBairro : ");
            bairro = Entrada.nextLine();
            endereco.setBairro(bairro);
            System.out.print("\nRua : ");
            rua = Entrada.nextLine();
            endereco.setRua(rua);
            System.out.print("\nDisciplina: ");
            disciplina = Entrada.nextLine();
            disciplinaInstancia.setNomeDisciplina(disciplina);
            System.out.print("\nNome do Professor(a): ");
            nomeProfessor = Entrada.nextLine();
            disciplinaInstancia.setNomeProfessor(nomeProfessor);
            System.out.print("\nSala : ");
            sala = Entrada.nextLine();
            disciplinaInstancia.setSala(sala);
            System.out.print("\nTurno : ");
            turno = Entrada.nextLine();
            disciplinaInstancia.setTurno(turno);
            System.out.print("\nNota da prova 1 da unidade 1 : ");
            n1 = Entrada.nextFloat();
            unidadeTematica1.setNota1(n1);
            System.out.print("\nNota da prova 2 da unidade 1 : ");
            n2 = Entrada.nextFloat();
            unidadeTematica1.setNota2(n2);
            System.out.print("\nNota da prova 1 da unidade 2 : ");
            n3 = Entrada.nextFloat();
            unidadeTematica2.setNota1(n3);
            System.out.print("\nNota da prova 2 da unidade 2 : ");
            n4 = Entrada.nextFloat();
            unidadeTematica2.setNota2(n4);
            System.out.println("\n----------------------------------------------\n");
            System.out.println("\nDados Finais do aluno " + estudante.getNome());
            System.out.println("Idade : " + estudante.getIdade());
            System.out.println("Sexo : " + estudante.getSexo());
            System.out.println("Celular : " + contato.getCelular());
            System.out.println("Email : " + contato.getEmail());
            System.out.println("Pais : " + endereco.getPais());
            System.out.println("Estado : " + endereco.getEstado());
            System.out.println("Cidade : " + endereco.getCidade());
            System.out.println("Bairro : " + endereco.getBairro());
            System.out.println("Rua : " + endereco.getRua());
            System.out.println("Disciplina : " + disciplinaInstancia.getNomeDisciplina());
            System.out.println("Nome do Professor : " + disciplinaInstancia.getNomeProfessor());
            System.out.println("Sala : " + disciplinaInstancia.getSala());
            System.out.println("Turno : " + disciplinaInstancia.getTurno());
            System.out.println("Sua media final foi de " +qualMedia.retornaMedia(n1, n2, n3, n4));
            if (qualMedia.retornaMedia(n1, n2, n3, n4) < 5){
                System.out.println("O aluno foi reprovado");
            }else if(qualMedia.retornaMedia(n1, n2, n3, n4) >= 5 && qualMedia.retornaMedia(n1, n2, n3, n4) < 7){
                System.out.println("O aluno fez prova final");
            }else{
                System.out.println("O aluno foi aprovado por media");
            }

            System.out.print("\n\n1 - Continuar   \n\n2 - Sair: ");
            querParar = Entrada.nextInt();
            while(querParar != 1 && querParar != 2){
                System.out.print("\nOpção invalida");
                System.out.print("\n\n1 - Continuar   \n\n2 - Sair: ");
                querParar = Entrada.nextInt();
            }
            Entrada.nextLine();
        } while (querParar == 1);

        Entrada.close();
    }
}
