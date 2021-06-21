import java.util.ArrayList;
import java.util.Scanner;

public class Principal {
    
    public static void main(String []args){
        Scanner Entrada = new Scanner(System.in);
        int continua, cadastrarOuMostrar;
        ArrayList<Papagaio> papagaio = new ArrayList<>();
        EntradaDados entradaDados = new EntradaDados();
        GravarELerArquivos gravarELerArquivos = new GravarELerArquivos();
        do {
            System.out.print("\n\n[1] - Cadastrar\n\n[2] - Mostrar\n\nOpcao : ");
            cadastrarOuMostrar = Entrada.nextInt();
            Entrada.nextLine();
            if(cadastrarOuMostrar == 1){
                System.out.println("\n\n\t\t\t\t\tCadastro do(s) Papagaio(s)");
                papagaio.add(entradaDados.pedirPapagaioUsuario());
            }else if(cadastrarOuMostrar == 2){
                papagaio = gravarELerArquivos.lerPapagaio();
                gravarELerArquivos.mostrarPapagaio(papagaio);
            }
            System.out.print("\n\nDeseja continuar ?\n\n[1] - Sim\n\n[2] - Nao\n\nContinua : ");
            continua = Entrada.nextInt();
        } while (continua != 2);
        gravarELerArquivos.gravar(papagaio);
        Entrada.close();
    }
    
}
