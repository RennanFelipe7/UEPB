#include <stdio.h>
int main() {
  int Matriz[10][10];            
  int i, j, Maior_Elemento, Linha_Do_Maior, Coluna_Do_Maior;      
  for(i = 0; i < 10; i++){       
    for(j = 0; j < 10; j++){
      printf("Digite o elemento da posicao[%d][%d] : ", (i+1), (j+1));
      scanf("%d", &Matriz[i][j]);
    }
  }
  Maior_Elemento = Matriz[0][0];         
  for(i = 0; i < 10; i++){                
    for(j = 0; j < 10; j++){              
      if (Matriz[i][j] > Maior_Elemento){
        Maior_Elemento = Matriz[i][j];
        Linha_Do_Maior = i;
        Coluna_Do_Maior = j;
      }  
    }
  }
  printf("\n");
  printf("Maior valor encontrado: %d \n", Maior_Elemento);
  printf("Elementos da coluna: ");
  for(i = 0; i < 10; i++){
    printf("%d ", Matriz[i][Coluna_Do_Maior]);
  }
  printf("\n");
  printf("Elementos da linha: ");
  for(i = 0; i < 10; i++){
    printf("%d ", Matriz[Linha_Do_Maior][i]);
  }
  return 0;
}