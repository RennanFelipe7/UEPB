#include <stdio.h>
#include <string.h> 

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
    
    return 0;
}
