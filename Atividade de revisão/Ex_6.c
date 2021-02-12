#include <stdio.h>
#include <string.h>
typedef struct{
  char Titulo[30];
  char Autor[30];
  int Ano;
}Livro;
int main(){
  Livro Livros[5];
  int i;
  char Busca[30];
  for(i = 0; i < 5; i++){
    setbuf(stdin, NULL);
    printf("Digite o titulo do livro %d : ", (i+1));
    fgets(Livros[i].Titulo, 30, stdin);
    printf("Digite o autor do livro %d : ", (i+1));
    fgets(Livros[i].Autor, 30, stdin);
    printf("Digite o ano do livro %d : ", (i+1));
    scanf("%d", &Livros[i].Ano);
    printf("\n");
  }
  setbuf(stdin, NULL);
  printf("Qual o Titulo que voce deseja buscar ? ");
  fgets(Busca, 30, stdin);
  int Resultado_Da_Busca;
  char Titulo[30], Autor[30];
  int Ano;
  for(i = 0; i < 5; i++){
    Resultado_Da_Busca = strcmp(Busca, Livros[i].Titulo);
    if(Resultado_Da_Busca == 0){
      strcpy(Titulo, Livros[i].Titulo);
      strcpy(Autor, Livros[i].Autor);
      Ano = Livros[i].Ano;
      i = 10;
    }
  }
  if (Resultado_Da_Busca == 0){
      printf("Seu titulo foi encontrado e as informacoes sao : \n");
      printf("Titulo : %s", Titulo);
      printf("Autor : %s", Autor);
      printf("Ano : %d", Ano);
    }else{
      printf("Seu titulo nao foi achado");
    }
  return 0;
}