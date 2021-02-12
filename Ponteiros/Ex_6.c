#include <stdio.h>
void Troca_Valores(int *a, int *b){
  int Aux;
  Aux = *a;
  *a = *b;
  *b = Aux;  
}
int main(void) {
  int x, y;
  printf("Digite o valor de X : ");
  scanf("%d", &x);
  printf("\nDigite o valor de Y : ");
  scanf("%d", &y);
  printf("\n\nOs valores de X e Y ANTES da chamada da função são X = %d, Y = %d", x, y);
  Troca_Valores(&x,&y);
  printf("\n\nOs valores de X e Y DEPOIS da chamada da função são X = %d, Y = %d", x, y);

  return 0;
}