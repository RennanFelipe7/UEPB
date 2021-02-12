#include <stdio.h>
#include <stdlib.h>
float *Notas_Baixas(float *Vet,int Total_De_Notas, int *Pont_Numero_De_Notas_Baixas){
    int i;
    int Cont_De_Indice = 0;
    float * Vet_Notas_Baixas;
    *Pont_Numero_De_Notas_Baixas = 0;
    for(i = 0; i < Total_De_Notas; i++){
        if(Vet[i] < 5){
            *Pont_Numero_De_Notas_Baixas += 1;
        }
    }
    Vet_Notas_Baixas = (float *) malloc(*Pont_Numero_De_Notas_Baixas * sizeof(float));
    for(i = 0; i < Total_De_Notas; i++){
        if(Vet[i] < 5){
            Vet_Notas_Baixas[Cont_De_Indice] = Vet[i];
            Cont_De_Indice ++;
        }
    }
    return Vet_Notas_Baixas;
}