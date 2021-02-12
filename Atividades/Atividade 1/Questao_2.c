#include <stdio.h>
#include <string.h> 
int Maior_Acerto(int Lista[], int Tamanho){
    int Maior, i;
    Maior = Lista[0];
    int Indice_Da_Maior_Nota = 0;
    for(i = 1; i < Tamanho; i++){
        if (Lista[i] > Maior){
            Maior = Lista[i];
            Indice_Da_Maior_Nota = i;
        }
    }
    return Indice_Da_Maior_Nota;
}

int Menor_Acerto(int Lista[], int Tamanho){
    int Menor, i;
    Menor = Lista[0];
    int Indice_Da_Menor_Nota = 0;
    for(i = 1; i < Tamanho; i++){
        if (Lista[i] < Menor){
            Menor = Lista[i];
            Indice_Da_Menor_Nota = i;
        }
    }
    return Indice_Da_Menor_Nota;
}

int main()
{
    char Alunos[5][30];
    char Gabarito[10][1];
    char Cartao_Resposta[5][10][1];
    int i, j, C;
    int Questoes_Certas = 0;
    int Acertos[5];
    for(i = 0; i < 5; i++){
        printf("Digite o nome do aluno %d : ", (i+1));
        gets(Alunos[i]);
    }
    printf("\nAgora digite o Gabarito no formato a, b, c, d, e \n\n");
    for(i = 0; i < 10; i++){
        printf("Digite a respota da questao %d : ", (i+1));
        gets(Gabarito[i]);
    }
    printf("\nAgora digite as respostas dos alunos no formato a, b, c, d, e\n\n");
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            printf("Digite a respota do aluno %s na questao de numero %d : ",(Alunos[i]) ,(j+1));
            gets(Cartao_Resposta[i][j]);
            
        }
        printf("\n");
    }
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
             C = strncmp(Gabarito[j], Cartao_Resposta[i][j], 1);
                if(C == 0){
                    Questoes_Certas++;
                }
            }
        Acertos[i] = Questoes_Certas;
        Questoes_Certas = 0;
    }
    printf("\n");
    
    for(i = 0; i < 5; i++){
        printf("O aluno %s acertou uma quantidade de %d acertos \n\n", Alunos[i], Acertos[i]);
    }
    printf("\n");
    printf("O aluno que acerto o maior numeros de questoes foi o %s", Alunos[Maior_Acerto(Acertos, 5)]);
    
    printf("\n\n");
    printf("O aluno que acerto o menor numeros de questoes foi o %s", Alunos[Menor_Acerto(Acertos, 5)]);
    
    return 0;
}
