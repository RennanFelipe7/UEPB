#include <stdio.h>
#include <stdbool.h>
bool E_Primo(int Numero){
    for (int i = 2; i < Numero; i++){
        if (Numero % i == 0){
            return false;
        }
    }
    return true;
}
int main(){

  int Numero;
  printf ("Digite um numero para verificar se ele e primo ou nao: ");
  scanf("%d", &Numero);
  while (Numero <= 1){
      printf("\nNumero invalido para saber se e primo ou nao\n\nDigite uma numero maior que 1: ");
      scanf("%d", &Numero);
    }  
  if(E_Primo(Numero)){
      printf("\nSeu numero %d e primo ", Numero);
        
  }else{
      printf("\nSeu numero %d nao e primo ", Numero);
  }
    
  return 0;
}