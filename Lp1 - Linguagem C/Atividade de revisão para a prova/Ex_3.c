#include <stdio.h>
int funcaoMaior(int N_1, int N_2, int N_3){
  if(N_1 > N_2 && N_1 > N_3){
    return N_1;
  }else if(N_2 > N_1 && N_2 > N_3){
    return N_2;
  }else{
    return N_3;
  }
}
int main(){
  int N1, N2, N3;
  printf("Digite os 3 numeros para verificar qual é o maior : \n");
  scanf("%d %d %d", &N1, &N2, &N3);
  printf("\nSeu maior numero digitado foi o %d", funcaoMaior(N1, N2, N3));
  return 0;
}