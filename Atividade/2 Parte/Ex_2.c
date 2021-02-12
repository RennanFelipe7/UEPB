#include <stdio.h>

int main()
{
    int Matriz[5][5];
    int i,j;
    int Linha = 0;
    int Coluna = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o valor da matriz [%d][%d] : ", (i+1),(j+1));
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("\n");
    printf("Matri Digitada\n");
    printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ",Matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matri Transposta\n");
    printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ",Matriz[Linha][Coluna]);
            Linha +=1;
        }
        Linha = 0;
        Coluna += 1;
        printf("\n");
    }
    return 0;
}
