import java.util.InputMismatchException;
import java.util.Scanner;
public class EntradaDados {
    Scanner Entrada = new Scanner(System.in);
    public Papagaio pedirPapagaioUsuario(){
        Papagaio papagaio = new Papagaio();
        System.out.println("\n\nDigite os dados que se pede abaixo do Papagaio");
        System.out.print("\nReino : ");
        papagaio.setReino(Entrada.nextLine());
        System.out.print("\nFilo : ");
        papagaio.setFilo(Entrada.nextLine());
        System.out.print("\nClasse : ");
        papagaio.setClasse(Entrada.nextLine());
        System.out.print("\nOrdem : ");
        papagaio.setOrdem(Entrada.nextLine());
        System.out.print("\nFamilia : ");
        papagaio.setFamilia(Entrada.nextLine());
        System.out.print("\nGenero : ");
        papagaio.setGenero(Entrada.nextLine());
        System.out.print("\nEspecie : ");
        papagaio.setEspecie(Entrada.nextLine());
        System.out.print("\nPlumagem : ");
        papagaio.setPlumagem(Entrada.nextLine());
        System.out.print("\nEle voa : ");
        papagaio.setVoa(Entrada.nextLine());
        System.out.print("\nApelido : ");
        papagaio.setApelido(Entrada.nextLine());
        System.out.print("\nDigite a frase que mais fala o papagaio : ");
        papagaio.setFraseQueMaisFala(Entrada.nextLine());
        boolean digitouNumeroCorreto = false;
        do {
            try {
                System.out.print("\nDigite a expectativa de vida do papagaio : ");
                papagaio.setExpectativaDeVida(Entrada.nextFloat());
                digitouNumeroCorreto = true;
            } catch (InputMismatchException e) {
                System.out.println("\nVALOR INVALIDO, DIGITE NUMEROS");
                Entrada.nextLine();
            }
            
        } while (! digitouNumeroCorreto);
        Entrada.nextLine();
        return papagaio;
    }
}
