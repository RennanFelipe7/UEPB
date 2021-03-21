#include <stdio.h>
//#include <string.h>
int main(){
  int N_1, N_2, Soma;
  printf("Digite os numeros correspondentes para ver qual musica ira tocar, na faixa de 0 a 5 : \n");
  scanf("%d %d", &N_1, &N_2);
  while(N_1 < 0 || N_1 > 5 || N_2 < 0 || N_2 > 5){
    printf("\nNumero invalido, Digite novamente os numeros na faixa de 0 a 5 : \n");
    scanf("%d %d", &N_1, &N_2);
  }
  Soma = N_1 + N_2;
  switch(Soma){
    case 0:
    printf("0 - PROXYCITY");
    break;
    case 1:
    printf("1 - P.Y.N.G.");
    break;
    case 2:
    printf("2 - DNSUEY!");
    break;
    case 3:
    printf("3 - SERVERS ");
    break;
    case 4:
    printf("4 - HOST!");
    break;
    case 5:
    printf("5 - CRIPTONIZE");
    break;
    case 6:
    printf("6 - OFFLINE DAY");
    break;
    case 7:
    printf("7 - SALT");
    break;
    case 8:
    printf("8 - ANSWER!");
    break;
    case 9:
    printf("9 - RAR?");
    break;
    case 10:
    printf("10 - WIFI ANTENNAS");
    break;
  }
  return 0;
}