#include <stdio.h>

int matriz_identidade(int mat[3][3], int t){
    int i,j;
    for (i = 0; i < t; i++){
        for(j = 0; j < t; j++){
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)){
                return 0;
            }
        }
    }
    return 1;
} 

int main()
{
    int Matriz[3][3], i, j;
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                printf("Digite o elemento da posição [%d][%d] ", (i+1), (j+1));
                scanf("%d", &Matriz[i][j]);
        }
    }
    if (matriz_identidade(Matriz, 3) == 1) {
        printf("\nSua atriz é uma matriz Identidade");
    }else{
        printf("\nSua matriz não é uma matriz Identidade");
    }
    return 0;
}
