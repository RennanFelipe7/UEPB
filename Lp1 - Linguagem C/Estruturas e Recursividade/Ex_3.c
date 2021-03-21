#include <stdio.h>

struct Aluno{
  char Nome[30];
  int Matricula;
  char Curso[20];
};

int main() {
  struct Aluno Alunos[5];
  int i;
  for(i = 0; i < 5; i++){
    printf("Digite o nome do aluno %d: ", (i+1));
    gets(Alunos[i].Nome);
    printf("Digite a matricula do aluno(a) %s: ", Alunos[i].Nome);
    scanf("%d", &Alunos[i].Matricula);
    setbuf(stdin,NULL);
    printf("Digite o curso do aluno(a) %s : ", Alunos[i].Nome);
    gets(Alunos[i].Curso);
    printf("\n");
  }
  for(i = 0; i < 5; i++){
    printf("Dados do aluno %s \n\n", Alunos[i].Nome);
    printf("Sua matricula e: %d\n", Alunos[i].Matricula);
    printf("Seu curso e: %s\n", Alunos[i].Curso);
    printf("\n");
  }
  return 0;
}