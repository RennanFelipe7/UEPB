#include <stdio.h>
int main(void) {
  float x, *px;
  printf("Digite o valor de X : ");
  scanf("%f", &x);
  px = &x;
  *px = *px / 5;
  printf("\nO valor de X dividido por 5 usando o Ponteiro PX para essa operacao é : %f", x);

  return 0;
}