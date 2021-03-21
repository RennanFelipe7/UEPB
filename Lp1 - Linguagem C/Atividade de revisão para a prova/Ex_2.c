#include <stdio.h>
int main(){
  int Quantidade_De_Numeros, Primeiro_Termo_Da_Sequencia;
  int Soma = 0;
  printf("Digite os 2 numeros: 'Quantidade e se e PAR ou IMPAR' e 'Apartir de' : \n");
  scanf("%d %d", &Quantidade_De_Numeros, &Primeiro_Termo_Da_Sequencia);
  int Numeros_A_Somar = Quantidade_De_Numeros;
  while(Numeros_A_Somar > 0){     
    if (Quantidade_De_Numeros % 2 == 0){  
      if (Primeiro_Termo_Da_Sequencia % 2 == 0){  
        Soma += Primeiro_Termo_Da_Sequencia; 
        Primeiro_Termo_Da_Sequencia += 1;     
        Numeros_A_Somar -= 1;
      }else{
        Primeiro_Termo_Da_Sequencia += 1;
      }
    }else{
      if (Primeiro_Termo_Da_Sequencia % 2 != 0){
        Soma += Primeiro_Termo_Da_Sequencia;
        Primeiro_Termo_Da_Sequencia += 1;
        Numeros_A_Somar -= 1;
      }else{
        Primeiro_Termo_Da_Sequencia += 1;
      }
    }
  }
  printf("A sua soma foi de %d", Soma);
  return 0;
}