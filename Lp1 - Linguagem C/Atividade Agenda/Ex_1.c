#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct Agenda{
  char Nome[40];
  char Telefone[15];
  char Celular[15];
  char Email[40];
  struct Agenda *Ponteiro_Aponta_Proximo;
}Agenda;
Agenda *cria_agenda(){
  return NULL;
} 
Agenda *insere_contato(Agenda *Ponteiro_Inicio, char *Nome_Parametro, char *Telefone_Parametro, char *Celular_Parametro, char *Email_Parametro){
   if(Ponteiro_Inicio == NULL){
    Ponteiro_Inicio = (Agenda *) malloc(sizeof(Agenda));
    strcpy(Ponteiro_Inicio->Nome,Nome_Parametro);
    strcpy(Ponteiro_Inicio->Telefone,Telefone_Parametro);
    strcpy(Ponteiro_Inicio->Celular,Celular_Parametro);
    strcpy(Ponteiro_Inicio->Email,Email_Parametro);
    Ponteiro_Inicio ->Ponteiro_Aponta_Proximo = NULL;
    return Ponteiro_Inicio;
  }else{
    Agenda *Vetor_Apontador;
    Vetor_Apontador = (Agenda *) malloc(sizeof(Agenda));
    strcpy(Vetor_Apontador->Nome,Nome_Parametro);
    strcpy(Vetor_Apontador->Telefone,Telefone_Parametro);
    strcpy(Vetor_Apontador->Celular,Celular_Parametro);
    strcpy(Vetor_Apontador->Email,Email_Parametro);
    Vetor_Apontador -> Ponteiro_Aponta_Proximo = Ponteiro_Inicio;
    return Vetor_Apontador;
    }
  }
void lista_contatos(Agenda *Elementos){
  Agenda *Ponteiro_Para_Impressao = Elementos;
  while(Ponteiro_Para_Impressao != NULL){
    printf("\nDados do %s\n", Ponteiro_Para_Impressao->Nome);
    printf("\nTelefone: %s\n",Ponteiro_Para_Impressao->Telefone);
    printf("\nCelular: %s\n",Ponteiro_Para_Impressao->Celular);
    printf("\nEmail: %s\n",Ponteiro_Para_Impressao->Email);
    Ponteiro_Para_Impressao = Ponteiro_Para_Impressao -> Ponteiro_Aponta_Proximo;
  }
}

void *Buscar(struct Agenda *Elementos, char Nome_Parametro[]){
  Agenda *Ponteiro_De_Busca = Elementos;
  int Aux_De_Contem = 0; 
  char Nome_Encontrado[40];
  while(Ponteiro_De_Busca !=NULL){
    if (strcmp(Nome_Parametro,Ponteiro_De_Busca->Nome) == 0){
      Aux_De_Contem = 1;
      strcpy(Nome_Encontrado, Ponteiro_De_Busca -> Nome);
    }
    Ponteiro_De_Busca = Ponteiro_De_Busca -> Ponteiro_Aponta_Proximo;
  }
  if(Aux_De_Contem == 1){
    printf("\nSeu Contato foi achado na Lista");
  }else{
    printf("\nSeu Contato não foi achado na Lista");
  }
}
int main(){
  Agenda * Agnd;
  char Nome_Main[40];
  char Telefone_Main[15];
  char Celular_Main[15];
  char Email_Main[40];
  char Busca[40];
  Agnd = cria_agenda();
  int Opcao = 10;
  while(Opcao != 4){
    printf("\n\n                        Menu de opcoes:\n\n");
    printf("1 - Inserir Contato\n");
    printf("2 - Listar Contatos\n");
    printf("3 - Buscar Contato\n");
    printf("4 - Sair\n");
    
    printf("\nDigite a opcao a ser executada : ");
    scanf("%d",&Opcao);
    while(Opcao < 1 || Opcao > 4){
      printf("\nOpcao invalida, Digite novamente a opcao : ");
      scanf("%d",&Opcao);
            
    }
    switch(Opcao){
      case 1:
        setbuf(stdin, NULL);
        printf("\nDigite o Nome, Telefone, Celular, e Email da pessoa respectivamente:\n\n");
        fgets(Nome_Main,40,stdin);
        fgets(Telefone_Main,15,stdin);
        fgets(Celular_Main,15,stdin);
        fgets(Email_Main,40,stdin);
        Agnd = insere_contato(Agnd, Nome_Main, Telefone_Main, Celular_Main, Email_Main);
        break;
      case 2:
        lista_contatos(Agnd);
        printf("\n");
        break;
      case 3:
        setbuf(stdin, NULL);
        printf("\nQual o contato que voce quer buscar por nome ? ");
        fgets(Busca,40,stdin);
        Buscar(Agnd, Busca);
        break;
    }
  }

  return 0;
}