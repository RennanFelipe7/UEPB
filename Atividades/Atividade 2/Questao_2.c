#include <stdio.h>
#include <stdbool.h>
bool Ordenado_Ou_Nao(int Vet[], int Tamanho){
    int i;
    for(i = 0; i < (Tamanho - 1); i++){
        if(Vet[i] > Vet[i+1]){
            return false;
        }
    }
    return true;
}
int Ordena_Vetor (int Vet[], int Tamanho){
    int i, j, Guarda_Anterior;
    for(i = 0; i < Tamanho; i++){
        for(j = 0; j < (Tamanho - 1); j++){
            if(Vet[j] > Vet[j+1]){
                Guarda_Anterior = Vet[j];
                Vet[j] = Vet[j+1];
                Vet[j+1] = Guarda_Anterior;  
            }    
        }
    }

}
int main(){
    
    int Numeros_Pares = 0;
    int i;
    int Numeros_Impares = 0;
    int Cont_De_Indice_Par = 0;
    int Cont_De_Indice_Impar = 0;
    int Vet_Par[10];
    int Vet_Impar[10];
    int Cont = 0;
    int Numero;
    while(Cont < 15){
        printf("Digite o numero %d : ", (Cont+1));
        scanf("%d", &Numero);
        if(Numero % 2 == 0){
            if (Numeros_Pares < 10){
                Vet_Par[Cont_De_Indice_Par] = Numero;
                Cont_De_Indice_Par++;
                Numeros_Pares++;
            }else{
                for(i = 0; i < 9; i++){
                    Vet_Par[i] = Vet_Par[i+1];
                }
                Vet_Par[9] = Numero;
                  
            }
        }else{
            if(Numeros_Impares < 10){
                Vet_Impar[Cont_De_Indice_Impar] = Numero;
                Cont_De_Indice_Impar++;
                Numeros_Impares++;
            }else{
                for(i = 0; i < 9; i++){
                    Vet_Impar[i] = Vet_Impar[i+1];
                }
                Vet_Impar[9] = Numero;
            }
        }
        Cont++;
    }
    printf("\nVetor de Numeros Impares\n");
    for(i = 0; i < Numeros_Impares; i++){
        printf("%d ", Vet_Impar[i]);
    }
    printf("\n");
    printf("\nVetor de Numeros Pares\n");
    for(i = 0; i < Numeros_Pares; i++){
        printf("%d ", Vet_Par[i]);
    }
    printf("\n");
    if(Ordenado_Ou_Nao(Vet_Impar, Numeros_Impares)){
        printf("\nO Vetor Impar esta ordenado\n");
    }else{
        printf("\nO Vetor Impar não esta ordenado\n");
        printf("Ordenando o vetor de numeros Impares e o imprimindo\n");
        Ordena_Vetor(Vet_Impar, Numeros_Impares);
        for(i = 0; i < Numeros_Impares; i++){
        printf("%d ", Vet_Impar[i]);
        }
    }
    printf("\n");
    if(Ordenado_Ou_Nao(Vet_Par, Numeros_Pares)){
        printf("\nO Vetor Par esta ordenado\n");
    }else{
        printf("\nO Vetor Par não esta ordenado\n");
        printf("Ordenando o vetor de numeros Pares e o imprimindo\n");
        Ordena_Vetor(Vet_Par, Numeros_Pares);
        for(i = 0; i < Numeros_Pares; i++){
        printf("%d ", Vet_Par[i]);
        }
    }
    printf("\n");
    return 0;
}