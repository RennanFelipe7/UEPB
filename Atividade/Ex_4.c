#include <stdio.h>

int main(){
    int Valores[100];
    for(int i = 0; i < 100; i++){
        printf("\nDigite agora o valor da posicao %d do vetor: ", (i + 1));
        scanf("%d", &Valores[i]);
    }
    int Menor = Valores[0];
    int Indice_Do_Menor = 0;
    for(int i = 1; i < 100; i++){
        if (Valores[i] < Menor){
            Menor = Valores[i];
            Indice_Do_Menor = i;
        }
    }
    if (Indice_Do_Menor == 0){
        printf("\nMenor valor recebido: %d\n", Menor);
        printf("Indice do menor valor: %d\n", Indice_Do_Menor);
        printf("Valor armazenado na posicao posterior: %d\n", Valores[Indice_Do_Menor + 1]);
    }else if (Indice_Do_Menor == 99){
        printf("\nMenor valor recebido: %d\n", Menor);
        printf("Indice do menor valor: %d\n", Indice_Do_Menor);
        printf("Valor armazenado na posicao anterior: %d\n", Valores[Indice_Do_Menor - 1]);
    }else{
        printf("\nMenor valor recebido: %d\n", Menor);
        printf("Indice do menor valor: %d\n", Indice_Do_Menor);
        printf("Valor armazenado na posicao anterior: %d\n", Valores[Indice_Do_Menor - 1]);
        printf("Valor armazenado na posicao posterior: %d\n", Valores[Indice_Do_Menor + 1]);
    }
    
    
    return 0;
}
