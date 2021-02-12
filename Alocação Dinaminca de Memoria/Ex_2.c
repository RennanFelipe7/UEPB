#include <stdio.h>
#include <stdlib.h>
int main(void){
  int *Valores, *Par, *Impar;
  int contPar = 0;
  int contImpar = 0;
  int cont_Indice_Par = 0;
  int cont_Indice_Impar = 0;
  Valores = (int *) malloc(15 * sizeof(int));
  int i;
  for(i = 0; i < 15; i++){
    printf("Digite o numero %d do vetor : ",(i+1));
    scanf("%d",&Valores[i]);
  }
  for(i = 0; i < 15; i++){
    if(Valores[i] % 2 == 0){
      contPar ++;
    }else{
      contImpar ++;
    }
  }
  Par = (int *) malloc(contPar * sizeof(int));
  Impar = (int *) malloc(contImpar * sizeof(int));
  for(i = 0; i < 15; i++){
    if(Valores[i] % 2 == 0){
      Par[cont_Indice_Par] = Valores[i];
      cont_Indice_Par ++;
    }else{
      Impar[cont_Indice_Impar] = Valores[i];
      cont_Indice_Impar ++;
    }
  }
  printf("\nOs numeros PARES do seu vetor são : \n\n");
  for(i = 0; i < contPar; i++){
    printf("%d \n", Par[i]);
  }
  printf("\nOs numeros IMPAR do seu vetor são : \n\n");
  for(i = 0; i < contImpar; i++){
    printf("%d \n", Impar[i]);
  }
  return 0;
}