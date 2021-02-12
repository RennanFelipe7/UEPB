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
int main(){
    int Numero_De_Alunos, i;
    float *Notas;
    printf("Digite a quantidade de alunos da turma : ");
    scanf("%d",&Numero_De_Alunos);
    Notas = (float *) malloc((Numero_De_Alunos * 2) * sizeof(float)); 
    printf("\n");
    int Cont_De_Aluno = 1;
    for(i = 0; i < (Numero_De_Alunos * 2); i+=2){
        printf("Digite a nota 1 do aluno %d : ", Cont_De_Aluno);
        scanf("%f", &Notas[i]);
        printf("Digite a nota 2 do aluno %d : ", Cont_De_Aluno);
        scanf("%f", &Notas[i+1]);
        Cont_De_Aluno ++;
        printf("\n");
    }
    float *Vet_Notas_Baixas;
    int Quantidade_De_Notas_Baixas;
    Vet_Notas_Baixas = Notas_Baixas(Notas,(Numero_De_Alunos * 2), &Quantidade_De_Notas_Baixas);
    printf("Quantidade de notas baixas encontradas : %d", Quantidade_De_Notas_Baixas);
    printf("\n\nAs notas baixas encontradas sao : \n\n");
    for(i = 0; i < Quantidade_De_Notas_Baixas; i++){
        printf("%3.1f ", Vet_Notas_Baixas[i]);
        printf("\n");
    }
    return 0;
}