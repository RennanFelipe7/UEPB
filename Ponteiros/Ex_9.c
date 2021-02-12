#include <stdio.h>
#include <string.h>
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
  *media = (p1 + p2 + p3) / 3;
  float Porcentagem_De_Faltas = (faltas * 100) / aulas;
  if(Porcentagem_De_Faltas <= 25){
    if(*media >= 6){
      return 'A';
    }else{
      return 'R';
    }
  }else {
    return 'F';
  }
}
int main(void) {
  float Nota1, Nota2, Nota3, Media;
  int Numero_De_Faltas, Numero_De_Aulas;
  printf("Digite as tres notas do aluno na disciplina : \n");
  scanf("%f %f %f", &Nota1, &Nota2, &Nota3);
  printf("\nQual o numero de faltas do aluno na disciplina : ");
  scanf("%d", &Numero_De_Faltas);
  printf("\nQual o numero total de aulas do aluno na disciplina : ");
  scanf("%d", &Numero_De_Aulas);
  char Resultado = situacao(Nota1, Nota2, Nota3, Numero_De_Faltas, Numero_De_Aulas, &Media);
  printf("\nA media do Aluno foi de : %4.1f", Media);
  printf("\nE sua situação foi : ");
  char R = situacao(Nota1, Nota2, Nota3, Numero_De_Faltas, Numero_De_Aulas, &Media);
  if(R == 'A'){
    printf("APROVADO");
  }else if(R == 'R'){
    printf("REPROVADO");
  }else if(R == 'F'){
    printf("REPROVADO POR FALTAS");
  }

  return 0;
}