#include <stdio.h>

struct Aluno{
  char Nome[30];
  int Matricula;
  float N1;
  float N2;
  float N3;
};

int main() {
  struct Aluno Alunos[5];
  float Nota_1[5];
  float Nota_2[5];
  float Nota_3[5];
  float Media[5];
  int i;
  for(i = 0; i < 5; i++){
    setbuf(stdin,NULL);
    printf("Digite o nome do aluno(a) %d: ", (i+1));
    gets(Alunos[i].Nome);
    printf("Digite a matricula do aluno(a) %s: ", Alunos[i].Nome);
    scanf("%d", &Alunos[i].Matricula);
    printf("Digite as 3 notas do aluno(a) %s: \n", Alunos[i].Nome);
    scanf("%f %f %f", &Alunos[i].N1, &Alunos[i].N2, &Alunos[i].N3);
    Nota_1[i] = Alunos[i].N1;
    Nota_2[i] = Alunos[i].N2;
    Nota_3[i] = Alunos[i].N3;
    printf("\n");
  }
  int Indice_Aluno_Maior_1_Nota = 0;
  float Maior_Nota_1 = Nota_1[0];
  for(i = 1; i < 5; i++){      
    if (Nota_1[i] > Maior_Nota_1){
      Maior_Nota_1 = Nota_1[i];
      Indice_Aluno_Maior_1_Nota = i;
    }
  }
  for(i = 0; i < 5; i++){
    Media[i] = (Nota_1[i] + Nota_2[i] + Nota_3[i]) / 3;
  }
  int Indice_Maior_Media = 0;
  int Indice_Menor_Media = 0;
  float Maior_Media = Media[0];
  float Menor_Media = Media[0];
  for(i = 1; i < 5; i++){
    if (Media[i] > Maior_Media){
      Maior_Media = Media[i];
      Indice_Maior_Media = i;
    }
    if (Media[i] < Menor_Media){
      Menor_Media = Media[i];
      Indice_Menor_Media = i;
    }
  }
  printf("O aluno com a maior Primeira nota foi o(a) %s \n\n", Alunos[Indice_Aluno_Maior_1_Nota].Nome);
  printf("O aluno com a maior Media geral foi o(a) %s \n\n", Alunos[Indice_Maior_Media].Nome);
  printf("O aluno com a menor Media geral foi o(a) %s \n\n", Alunos[Indice_Menor_Media].Nome);
  for(i = 0; i < 5; i++){
    if(Media[i] >= 6){
      printf("O aluno %s foi APROVADO com a media %5.2f\n\n", Alunos[i].Nome, Media[i]);
    }else{
      printf("O aluno %s foi REPROVADO com a media %5.2f\n\n", Alunos[i].Nome, Media[i]);
    }
  }
  return 0;
}