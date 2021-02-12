#include <stdio.h>

int main(){
    int Numeros[100];
    int i, j, Guarda_Anterior;
    for(i = 0; i < 100; i++){
        printf("Digite o valor da posição %d do vetor: ", (i+1));
        scanf("%d", &Numeros[i]);
    }
    for(i = 0; i < 100; i++){
        for(j = 0; j < 99; j++){
            if(Numeros[j] > Numeros[j+1]){
               Guarda_Anterior = Numeros[j];
               Numeros[j] = Numeros[j+1];
               Numeros[j+1] = Guarda_Anterior;
                
            }
        }
    }
    printf("\nImpressão dos numeros 1 por linha: \n\n");
    for(i = 0; i < 100; i++){
        printf("%d \n", Numeros[i]);
    }
    return 0;
}