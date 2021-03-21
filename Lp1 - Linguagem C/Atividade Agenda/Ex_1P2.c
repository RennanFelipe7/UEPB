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
Agenda * Remove_1_Elemento(Agenda *Agenda_Parametro, char Contato_Para_Remover[]){
  Agenda *Ponteiro_De_Remover = Agenda_Parametro;
  Agenda *Auxiliar = NULL;
  while((Ponteiro_De_Remover != NULL) && strcmp(Contato_Para_Remover, Ponteiro_De_Remover -> Nome) != 0){
    Auxiliar = Ponteiro_De_Remover;
    Ponteiro_De_Remover = (Agenda*)Ponteiro_De_Remover->Ponteiro_Aponta_Proximo;
  }
  if (Ponteiro_De_Remover == NULL){
    return Agenda_Parametro; 
  }
  if (Auxiliar == NULL){
    Agenda_Parametro = (Agenda *) Ponteiro_De_Remover->Ponteiro_Aponta_Proximo;
  }
  else{
    Auxiliar->Ponteiro_Aponta_Proximo = Ponteiro_De_Remover->Ponteiro_Aponta_Proximo;
    free(Ponteiro_De_Remover);
  }
  return Agenda_Parametro;
}
Agenda * Eclui_Toda_Agenda(Agenda *Agenda_Parametro){
  Agenda *Ponteiro_Exclui_tudo = Agenda_Parametro;
  Agenda *Auxiliar;
  while (Ponteiro_Exclui_tudo != NULL){
    Auxiliar = (Agenda*) Ponteiro_Exclui_tudo -> Ponteiro_Aponta_Proximo;
    free(Ponteiro_Exclui_tudo);
    Ponteiro_Exclui_tudo = Auxiliar;
  }
  return Ponteiro_Exclui_tudo;
}
int main(){
  Agenda * Agnd;
  char Nome_Main[40];
  char Exclui_Toda[1];
  char Telefone_Main[15];
  char Celular_Main[15];
  char Email_Main[40];
  char Busca[40];
  char Contato_Para_Remover[40];
  Agnd = cria_agenda();
  int Opcao = 10;
  while(Opcao != 6){
    printf("\n\n                        Menu de opcoes:\n\n");
    printf("1 - Inserir Contato\n");
    printf("2 - Listar Contatos\n");
    printf("3 - Buscar Contato\n");
    printf("4 - Deletar Apenas 1 Contato\n");
    printf("5 - Deletar Toda a Agenda\n");
    printf("6 - Sair\n");
    
    printf("\nDigite a opcao a ser executada : ");
    scanf("%d",&Opcao);
    while(Opcao < 1 || Opcao > 6){
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
      case 4:
        setbuf(stdin, NULL);
        printf("\nQual o contato que voce quer remover ? ");
        fgets(Contato_Para_Remover,40,stdin);
        Agnd = Remove_1_Elemento(Agnd,Contato_Para_Remover);
        printf("\nContato excluido\n");
        break;
      case 5:
        setbuf(stdin, NULL);
        printf("\nDeseja realmente excluir toda a agenda s [Sim] n [Nao] ? ");
        fgets(Exclui_Toda,2,stdin); 
        if (strncmp(Exclui_Toda,"s",1) == 0){
          Agnd = Eclui_Toda_Agenda(Agnd);
          printf("\nExcluida toda a agenda\n");
        }
        break;
    }
  }

  return 0;
}