import java.util.LinkedList;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        LinkedList <Paciente> listaDePaciente = new LinkedList <Paciente>();
        Hospital hospitalDePatos = new Hospital();    
        Scanner Entrada = new Scanner(System.in);
        int opcao;
        GravarELerArquivos gravarELerArquivos = new GravarELerArquivos();
        gravarELerArquivos.criarArquivo(); 
        do {
            System.out.print("\n\n\t\t\tMENU\n\n1 - Cadastrar Paciente\n\n2 - Mostrar Paciente e seus Dados\n\n3 - Proximo a ser Atendido e Excluido da Fila\n\n4 - Recuperar Dados Do arquivo\n\n5 - Encerrar\n\nOpcao : ");
            opcao = Entrada.nextInt();
            while(opcao < 1 || opcao > 5){
                System.out.print("\nOpcao invalida, Digite novamente a opcao : ");
                opcao = Entrada.nextInt();
            }
            switch(opcao){
                case 1:
                    hospitalDePatos.cadastrarPaciente(listaDePaciente);
                    break;
                case 2:
                    hospitalDePatos.mostrarPaciente(listaDePaciente);
                    break;
                case 3:
                    hospitalDePatos.mostrarERetirarOPacienteDaFila(listaDePaciente);
                    break;
                case 4:
                    listaDePaciente = gravarELerArquivos.lerPaciente();
                    System.out.println("\n\nDados recuperados com sucesso ! ");
            }
        } while (opcao != 5);
        gravarELerArquivos.gravarPaciente(listaDePaciente);
        Entrada.close();
    }
    
}