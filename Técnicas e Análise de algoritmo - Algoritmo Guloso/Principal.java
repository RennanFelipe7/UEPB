import java.util.Arrays;
import java.util.Scanner;


public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.print("\nDigite o valor do troco : ");
        String trocoString = entrada.nextLine();
        int troco = Integer.parseInt(trocoString.replace(",", ""));
        System.out.print("\nDigite a quantidade de moedas disponivel : ");
        int quantidadeDeMoedas = entrada.nextInt();
        int vet[] = new int[quantidadeDeMoedas];
        int vetResultado[] = new int[quantidadeDeMoedas];
        for(int i = 0; i < quantidadeDeMoedas; i++){
            System.out.print("\nDigite a moeda disponivel de numero " + (i+1) + " : ");
            vet[i] = entrada.nextInt();
        }
        for(int i = 0; i < quantidadeDeMoedas; i++){
            vetResultado[i] = 0;
        }
        int indiceDoVetorDeSubtracao = quantidadeDeMoedas - 1;
        Arrays.sort(vet);
        while(troco > 0 && indiceDoVetorDeSubtracao >= 0){
            while(indiceDoVetorDeSubtracao >= 0 && vet[indiceDoVetorDeSubtracao] <= troco){
                troco -= vet[indiceDoVetorDeSubtracao];
                vetResultado[indiceDoVetorDeSubtracao] += 1;
            }
            if(troco > 0){
                indiceDoVetorDeSubtracao --;
            }
        }
        System.out.println("\nSera necessario uma quantidade de : \n");
        for(int i = quantidadeDeMoedas - 1; i >= 0; i--){
            System.out.println(vetResultado[i] + " moedas de " + vet[i] + " centavos");
        }
        if(troco != 0){
            System.out.println("\n\nQuantidade de moedas insuficiente para dar o troco exato, ficou faltando uma quantidade de " + troco + " centavos");
        }
        entrada.close();
    }
}
