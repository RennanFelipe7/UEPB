typedef struct Dados_Pessoa{
    char Nome[30];
    int Idade;
    char Endereco[30];
};

#include <stdio.h>

int main()
{
  struct Dados_Pessoa Pessoa;
  printf("Digite os dados da Pessoa\n\n");
  printf("Digite o nome da pessoa: ");
  gets(Pessoa.Nome);
  printf("Digite a idade do(a) %s: ", Pessoa.Nome);
  scanf("%d", &Pessoa.Idade);
  setbuf(stdin,NULL);
  printf("Digite o endereco do(a) %s: ", Pessoa.Nome);
  gets(Pessoa.Endereco);
  printf("\n");
  printf("Os dados do(a) %s sao:\n", Pessoa.Nome);
  printf("Nome: %s\nIdade: %d\nEndereco: %s ", Pessoa.Nome, Pessoa.Idade, Pessoa.Endereco);
  return 0;
}
