#include <stdio.h>
struct Aluno{
  float Nota_1;
  float Nota_2;
  float Nota_3;
};

int main(void){
  struct Aluno Aln;
  float *P_N_1, *P_N_2, *P_N_3, *Ponteiro_De_Media;
  printf("Digite as 3 notas do aluno na prova : \n");
  scanf("%f %f %f",&Aln.Nota_1,&Aln.Nota_2,&Aln.Nota_3);
  P_N_1 = &Aln.Nota_1;
  P_N_2 = &Aln.Nota_2;
  P_N_3 = &Aln.Nota_3;
  float Media;
  Media = (*P_N_1 + *P_N_2 + *P_N_3) / 3; 
  Ponteiro_De_Media = &Media;
  if(*Ponteiro_De_Media >= 7){
    printf("Seu aluno foi APROVADO por media, com a media %3.1f", *Ponteiro_De_Media);
  }else{
    printf("Seu aluno NÃO foi aprovado por media");
  }
  

  return 0;
}