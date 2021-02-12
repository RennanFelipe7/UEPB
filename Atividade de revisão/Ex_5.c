#include <stdio.h>
int Recursiva_Soma (int Vet[], int Tamanho){
  if(Tamanho == 0){
    return 0;
  }else{
    return Vet[Tamanho - 1] + Recursiva_Soma(Vet, Tamanho - 1);

  }
}
int main(){
  int Vetor[10];
  int i;
  int Soma = 0;
  for(i = 0; i < 10; i++){
    printf("Digite o elemento %d do vetor : ", (i+1));
    scanf("%d", &Vetor[i]);
  }
  Soma = Recursiva_Soma(Vetor, 10);
  printf("\nA soma de todos os valores do seu vetor foi de %d", Soma);
  return 0;
}