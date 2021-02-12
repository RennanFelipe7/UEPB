#include <stdio.h>

int main()
{   
    int Numeros_Pares = 0;
    int i;
    int Numeros_Impares = 0;
    int Cont_De_Indice_Par = 0;
    int Cont_De_Indice_Impar = 0;
    int Vet_Impar[10];
    int Vet_Par[10];
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
    printf("\n");
    for(i = 0; i < Numeros_Impares; i++){
        printf("%d ", Vet_Impar[i]);
    }
    printf("\n");
    for(i = 0; i < Numeros_Pares; i++){
        printf("%d ", Vet_Par[i]);
    }
    
    return 0;
}