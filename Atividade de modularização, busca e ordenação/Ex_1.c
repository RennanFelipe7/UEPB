#include <stdio.h>

int PesquisaBinaria (int vet[], int chave, int tam){
     int inf = 0;            
     int sup = tam-1; 
     int meio;
    while (inf <= sup){
        meio = (inf + sup)/2;
        if (chave == vet[meio]){
		    return 1;
        }else
            if (chave < vet[meio]){
                sup = meio-1;
            }else{
	            inf = meio+1;
            }
        }
    return 0; 
}

int Ordena(int Vet[], int Tamanho){
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
    int Tamanho_Do_Vetor = 0; 
    int Vetor[30], Palpite;
    int Contador_De_Numero = 1;
    int Numero = -10;
    int Contador_De_Numeros_No_Vetor = 0;
    while(Numero != 0 && Contador_De_Numeros_No_Vetor < 30){
        printf("Digite o valor do vetor na posição %d : ", Contador_De_Numero);
        scanf("%d", &Numero);
        if (Numero != 0 ){
            Vetor[Tamanho_Do_Vetor] = Numero;
            Tamanho_Do_Vetor++;
            Contador_De_Numeros_No_Vetor++;
            Contador_De_Numero++;
        }
    }
    Ordena(Vetor, Tamanho_Do_Vetor);
    printf("\nDigite o número que você quer verificar se existe ou não no vetor : ");
    scanf("%d", &Palpite);
    if (PesquisaBinaria(Vetor, Palpite, Tamanho_Do_Vetor) == 1){
        printf("\nSeu valor %d existe no vetor", Palpite);
    }else{
        printf("\nSeu valor %d não existe no vetor", Palpite);
    }

    return 0;
}