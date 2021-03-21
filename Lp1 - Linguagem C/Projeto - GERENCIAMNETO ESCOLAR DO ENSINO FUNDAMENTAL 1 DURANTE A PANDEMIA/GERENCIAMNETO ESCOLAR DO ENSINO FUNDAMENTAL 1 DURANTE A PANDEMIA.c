#include <stdio.h>
#include <string.h>      
#include <stdbool.h>     
#include <stdlib.h>
#include <math.h>
typedef struct Aluno{
  char Nome[40];
  char Data_De_Nascimento[15];
  char Identidade[15];
  char CPF[15];
  char Nome_Do_Pai[40];
  char Nome_Da_Mae[40];
  char Telefone[20];
  char Cidade[20];
  char Bairro[20];
  char Endereco[40];
  char Numero_Endereco[7];
  float Altura;
  float Peso;
  struct Aluno *Ponteiro_Aponta_Proximo_Estrutura;
}Aluno;

Aluno *Cria_Lista_Aluno(){
  return NULL;
}
bool Valida_Opcao(int Opcao, int N_1, int N_2){
    if(Opcao < N_1 || Opcao > N_2){
        return false;
    }
    return true;
}
bool E_Obeso_Ou_Doenca_Cronica(float Altura, float Peso, int Cronica){
  float IMC;
  IMC = Peso / (Altura * Altura);
  if (IMC >= 40 || Cronica == 1){
    return true;   
  }
  return false;
}
void Pega_E_Insere(char Nome[], char Data_Nasc[], char Identidade[], char CPF[], char N_Pai[], char N_Mae[], char Telefone[], char Cidade[], char Bairro[], char Endereco[], char N_Endereco[], float *Altura_P, float *Peso_P, int *Cronica){
  char Nome_Local[40], Data_Nasc_Local[15], Identidade_Local[15], CPF_Local[15], N_Pai_Local[40], N_Mae_Local[40], Telefone_Local[20], Cidade_Local[20], Bairro_Local[20], Endereco_Local[40], N_Endereco_Local[7];
  setbuf(stdin, NULL);
  printf("\n\nDigite o nome do aluno : \n");
  fgets(Nome_Local,40,stdin);
  strcpy(Nome, Nome_Local);
  printf("\n\nDigite a data de nascimento no formato Dia/Mes/Ano do aluno %s", Nome_Local);
  fgets(Data_Nasc_Local,15,stdin);
  strcpy(Data_Nasc, Data_Nasc_Local);
  printf("\n\nDigite o numero da identidade do aluno %s", Nome_Local);
  fgets(Identidade_Local,15,stdin);
  strcpy(Identidade, Identidade_Local);
  printf("\n\nDigite o CPF do aluno %s", Nome_Local);
  fgets(CPF_Local,15,stdin);
  strcpy(CPF, CPF_Local);
  printf("\n\nDigite o nome do pai do aluno %s", Nome_Local);
  fgets(N_Pai_Local,40,stdin);
  strcpy(N_Pai, N_Pai_Local);
  printf("\n\nDigite o nome da mae do aluno %s", Nome_Local);
  fgets(N_Mae_Local,40,stdin);
  strcpy(N_Mae, N_Mae_Local);
  printf("\n\nDigite o telefone do aluno %s", Nome_Local);
  fgets(Telefone_Local,20,stdin);
  strcpy(Telefone, Telefone_Local);
  printf("\n\nDigite a cidade do aluno %s", Nome_Local);
  fgets(Cidade_Local,20,stdin);
  strcpy(Cidade, Cidade_Local);
  printf("\n\nDigite o bairro do aluno %s", Nome_Local);
  fgets(Bairro_Local,20,stdin);
  strcpy(Bairro, Bairro_Local);
  printf("\n\nDigite o endereco do aluno %s", Nome_Local);
  fgets(Endereco_Local,40,stdin);
  strcpy(Endereco, Endereco_Local);
  printf("\n\nDigite o numero do endereco do aluno %s", Nome_Local);
  fgets(N_Endereco_Local,7,stdin);
  strcpy(N_Endereco, N_Endereco_Local);
  printf("\n\nDigite a altura em metros no formato Metros.Centimetros do aluno %s", Nome_Local);
  scanf("%f", *&Altura_P); 
  printf("\n\nDigite o peso em kilograma no formato Kilo.Grama do aluno %s", Nome_Local);
  scanf("%f", *&Peso_P);
  setbuf(stdin, NULL);
  printf("\n\nPossui alguma doenca cronica como doença cardiaca, pulmonares, baixa imunidade, renais, diabetico ou figado o aluno %s", Nome_Local);
  printf("[1] para Sim, [0] para Nao \n");
  scanf("%d", *&Cronica);
  while( ! Valida_Opcao(*Cronica, 0, 1)){
    printf("\n\nOpcao invalida!, Digite novamente uma opcao\n");
    printf("[1] para Sim, [0] para Nao \n");
    scanf("%d", *&Cronica);
  }
  setbuf(stdin, NULL);
}
Aluno * Insere_Aluno_Na_Lista(Aluno *Ponteiro_De_Insere, char *Nome_Parametro, char *Data_Nasc_Parametro, char *Identidade_Parametro, char *CPF_Parametro, char *N_Pai_Parametro, char *N_Mae_Parametro, char *Telefone_Parametro, char *Cidade_Parametro, char *Bairro_Parametro, char *Endereco_Parametro, char *N_Endereco_Parametro, float Altura_P_Parametro, float Peso_P_Parametro){
    if(Ponteiro_De_Insere == NULL){
        Ponteiro_De_Insere = (Aluno *)malloc(sizeof(Aluno));
        strcpy(Ponteiro_De_Insere->Nome,Nome_Parametro);
        strcpy(Ponteiro_De_Insere->Data_De_Nascimento,Data_Nasc_Parametro);
        strcpy(Ponteiro_De_Insere->Identidade,Identidade_Parametro);
        strcpy(Ponteiro_De_Insere->CPF,CPF_Parametro);
        strcpy(Ponteiro_De_Insere->Nome_Do_Pai,N_Pai_Parametro);
        strcpy(Ponteiro_De_Insere->Nome_Da_Mae,N_Mae_Parametro);
        strcpy(Ponteiro_De_Insere->Telefone,Telefone_Parametro);
        strcpy(Ponteiro_De_Insere->Cidade,Cidade_Parametro);
        strcpy(Ponteiro_De_Insere->Bairro,Bairro_Parametro);
        strcpy(Ponteiro_De_Insere->Endereco,Endereco_Parametro);
        strcpy(Ponteiro_De_Insere->Numero_Endereco,N_Endereco_Parametro);
        Ponteiro_De_Insere -> Altura = Altura_P_Parametro;
        Ponteiro_De_Insere -> Peso = Peso_P_Parametro;
        Ponteiro_De_Insere -> Ponteiro_Aponta_Proximo_Estrutura = NULL;
        return Ponteiro_De_Insere;
    }else{
        Aluno *Ponteiro_Lista_Nao_Vazia;
        Ponteiro_Lista_Nao_Vazia = (Aluno *) malloc(sizeof(Aluno));
        strcpy(Ponteiro_Lista_Nao_Vazia->Nome,Nome_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Data_De_Nascimento,Data_Nasc_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Identidade,Identidade_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->CPF,CPF_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Nome_Do_Pai,N_Pai_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Nome_Da_Mae,N_Mae_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Telefone,Telefone_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Cidade,Cidade_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Bairro,Bairro_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Endereco,Endereco_Parametro);
        strcpy(Ponteiro_Lista_Nao_Vazia->Numero_Endereco,N_Endereco_Parametro);
        Ponteiro_Lista_Nao_Vazia -> Altura = Altura_P_Parametro;
        Ponteiro_Lista_Nao_Vazia -> Peso = Peso_P_Parametro;
        Ponteiro_Lista_Nao_Vazia -> Ponteiro_Aponta_Proximo_Estrutura = Ponteiro_De_Insere;
        return Ponteiro_Lista_Nao_Vazia;
    }
}
void Exibe_Turma(Aluno *Elementos_Da_Lista){
    Aluno *Ponteiro_Para_Impressao = Elementos_Da_Lista;
    printf("\nOs alunos dessa turma são : \n\n");
    while(Ponteiro_Para_Impressao != NULL){
        printf("\nAbaixo estara os dados do aluno %s\n",Ponteiro_Para_Impressao -> Nome);
        printf("Data de nascimento: %s\n",Ponteiro_Para_Impressao -> Data_De_Nascimento);
        printf("Identidade: %s\n",Ponteiro_Para_Impressao -> Identidade);
        printf("CPF: %s\n",Ponteiro_Para_Impressao -> Data_De_Nascimento);
        printf("Nome do pai: %s\n",Ponteiro_Para_Impressao -> Nome_Do_Pai);
        printf("Nome da mae: %s\n",Ponteiro_Para_Impressao -> Nome_Da_Mae);
        printf("Telefone: %s\n",Ponteiro_Para_Impressao -> Telefone);
        printf("Cidade: %s\n",Ponteiro_Para_Impressao -> Cidade);
        printf("Bairro: %s\n",Ponteiro_Para_Impressao -> Bairro);
        printf("Endereco: %s\n",Ponteiro_Para_Impressao -> Endereco);
        printf("Numero da casa: %s\n",Ponteiro_Para_Impressao -> Numero_Endereco);
        printf("Peso: %2.1f Kg\n\n",Ponteiro_Para_Impressao -> Peso);
        printf("Altura: %2.1f M\n\n",Ponteiro_Para_Impressao -> Altura);
        Ponteiro_Para_Impressao = Ponteiro_Para_Impressao -> Ponteiro_Aponta_Proximo_Estrutura;
    }
}
void Aloca_Turma(Aluno *Elementos_Da_Lista, int Maximo_Alunos, int Quantas_Turmas, char Matriz_Inicial[Quantas_Turmas][Maximo_Alunos][41]){
  int i,j;
  Aluno *Ponteiro_Para_Impressao = Elementos_Da_Lista;
  for(i = 0; i < Maximo_Alunos; i++){ 
    for(j = 0; j < Quantas_Turmas; j++){ 
      if (Ponteiro_Para_Impressao != NULL){
        strncpy(Matriz_Inicial[j][i], Ponteiro_Para_Impressao -> Nome,40);
        Ponteiro_Para_Impressao = Ponteiro_Para_Impressao -> Ponteiro_Aponta_Proximo_Estrutura;
      }else{
        strcpy(Matriz_Inicial[j][i], "V");
      }
    }
  }
}
void Imprime_Turma_Alocada(int Quantidade_De_Turmas, int Quantidade_De_Alunos, char Matriz[Quantidade_De_Turmas][Quantidade_De_Alunos][41], char Dias_Letivo[5][10], char Horario_Escolar[4][5][20]){
  int i, Dias, j, Aux, Guarda_Dia, h;
  int Dia_Da_Aula = 0;
  char Matriz_Final[Quantidade_De_Turmas][Quantidade_De_Alunos][10];
  printf("\n\nA Alocacao da sua turma ficou da seguinte maneira :\n");
  for(i = 0; i < Quantidade_De_Turmas; i++){ 
    Aux = 0;
    printf("\n\nA semana de numero %d ficou da seguinte forma: \n", (i+1));
    for(Dias = Aux; Dias < 5; Dias++){
      printf("\n\nNa %s feira estarao em sala de aula os alunos : \n\n", Dias_Letivo[Dias]);
      Guarda_Dia = Dias;  
      Dias = 5;             
      for(j = 0; j < Quantidade_De_Alunos; j++){
        if(strncmp(Matriz[Dia_Da_Aula][j],"V",1) != 0){
          printf("%s", Matriz[Dia_Da_Aula][j]);
        }
      }
      printf("\n\nE eles vao estudar as disciplinas\n\n");
      for(h = 0; h < 4; h++){
        printf("%s, ", Horario_Escolar[h][Guarda_Dia]);
      }
      Dia_Da_Aula++;
      if(Dia_Da_Aula == Quantidade_De_Turmas){
        Dia_Da_Aula = 0;
      }
      Aux += 1;
      Dias = Guarda_Dia; 
    }
  }
}
int Cont_Quantidade_Aluno(Aluno *Elementos_Da_Lista){
    int Cont = 0;
    Aluno *Ponteiro_Para_Impressao = Elementos_Da_Lista;
    while(Ponteiro_Para_Impressao != NULL){
        Cont++;
        Ponteiro_Para_Impressao = Ponteiro_Para_Impressao -> Ponteiro_Aponta_Proximo_Estrutura;
    }
  return Cont;
}
bool Verifica_Altura(float Altura, float Distancia_Minima){
  if(Altura < Distancia_Minima){
    return false;
  }
  return true;
}
bool Verifica_Largura(float Largura, float Distancia_Minima){
  if(Largura < Distancia_Minima){
    return false;
  }
  return true;
}
void Imprime_Menu(){
  printf("\n\n\t\t\t\t\t\t\tGERENCIAMNETO ESCOLAR DO ENSINO FUNDAMENTAL 1 DURANTE A PANDEMIA\n\n");
  printf("\n[1] - Vefificar quantidade de pessoas de uma sala\n\n");
  printf("\n[2] - Mostrar como ficara a sala de aula\n\n");
  printf("\n[3] - Cadastar turma\n\n");
  printf("\n[4] - Exibir turma cadastrada\n\n");
  printf("\n[5] - Alocar e imprimir turma alocada\n\n");
  printf("\n[6] - Salvar em arquivo os dados anteriores\n\n");
  printf("\n[7] - Sair\n\n");
}
int Quantidade_Alunos_Sala(float Altura, float Largura, float Distancia_Minima){
  int Cont = 1; 
  float Aux_Largura = Largura;
  Altura -= Distancia_Minima;
  while(Verifica_Altura(Altura, Distancia_Minima / 2)){
    while(Verifica_Largura(Largura, Distancia_Minima / 2)){
      Cont ++;
      Largura -= Distancia_Minima;
    }
    Largura = Aux_Largura;
    Altura -= Distancia_Minima;
  }
  return Cont;
}
void Imprime_Sala(float Altura, float Largura, float Distancia_Minima){
  int Passagem = 1;
  float Aux_Largura = Largura;
  if (Altura >= Distancia_Minima || Largura > Distancia_Minima){
    printf("X \n\n");
  }
  Altura -= Distancia_Minima;
  while(Verifica_Altura(Altura,Distancia_Minima)){
    while(Verifica_Largura(Largura, Distancia_Minima)){ // 3.25
      if (Passagem == 1){
        if (Verifica_Largura(Largura, Distancia_Minima)){
          printf("O  ");
          Largura -= Distancia_Minima;
        }
      }
      if (Passagem == 2){
        if (Verifica_Largura(Largura, Distancia_Minima)){
          printf("X  ");
          Largura -= Distancia_Minima;
        }
        if (Verifica_Largura(Largura, Distancia_Minima)){
          printf("O  ");
          Largura -= Distancia_Minima;
        }
      }
    }
    if(Passagem == 1){
      Passagem = 2;
    }else if (Passagem == 2){
      Passagem = 1;
    }
    printf("\n\n");
    Largura = Aux_Largura;
    Altura -= Distancia_Minima;
  }
}
void Imprime_Sala_No_Arquivo(float Altura, float Largura, float Distancia_Minima, FILE *Arquivo, char Tipo_De_Arquivo[15]){
  FILE *Ponteiro_Para_Impressao;
  Ponteiro_Para_Impressao = fopen(Tipo_De_Arquivo, "w"); 
  fprintf(Ponteiro_Para_Impressao, "Sua sala de aula devera ficar da seguinte forma, onde o simbolo 'X' representa as carteiras onde deverao esta ocupadas e o simbolo 'O' representa as carteiras onde deverao esta vazia\n\n");
  int Passagem = 1;
  float Aux_Largura = Largura;
  if (Altura >= Distancia_Minima || Largura > Distancia_Minima){
    fprintf(Ponteiro_Para_Impressao, "X \n\n"); 
  }
  Altura -= Distancia_Minima;
  while(Verifica_Altura(Altura, Distancia_Minima)){
    while(Verifica_Largura(Largura, Distancia_Minima)){
      if (Passagem == 1){
        if (Verifica_Largura(Largura, Distancia_Minima)){
          fprintf(Ponteiro_Para_Impressao, "O  ");
          Largura -= Distancia_Minima;
        }
      }
      if (Passagem == 2){
        if (Verifica_Largura(Largura, Distancia_Minima)){
          fprintf(Ponteiro_Para_Impressao, "X  ");
          Largura -= Distancia_Minima;
        }
        if (Verifica_Largura(Largura, Distancia_Minima)){
          fprintf(Ponteiro_Para_Impressao, "O  ");
          Largura -= Distancia_Minima;
        }
      }
    }
    fprintf(Ponteiro_Para_Impressao, "\n");
    if(Passagem == 1){
      Passagem = 2;
    }else if (Passagem == 2){
      Passagem = 1;
    }
    fprintf(Ponteiro_Para_Impressao, "\n");
    Largura = Aux_Largura;
    Altura -= Distancia_Minima;
  }
  fflush(Arquivo); 
}
void Imprime_Horario_No_Arquivo(int Quantidade_De_Turmas, int Quantidade_De_Alunos, char Matriz[Quantidade_De_Turmas][Quantidade_De_Alunos][41], char Dias_Letivo[5][10], char Horario_Escolar[4][5][20], FILE *Arquivo, char Tipo_De_Arquivo[15]){
  FILE * Ponteiro_Para_Impressao;
  Ponteiro_Para_Impressao = fopen(Tipo_De_Arquivo, "a"); 
  int i, Dias, j, Aux, Guarda_Dia, h;
  int Dia_Da_Aula = 0;
  char Matriz_Final[Quantidade_De_Turmas][Quantidade_De_Alunos][10];
  fprintf(Ponteiro_Para_Impressao,"\n\nO Horario da sua turma ficou da seguinte maneira :\n");
  for(i = 0; i < Quantidade_De_Turmas; i++){
    Aux = 0;
    fprintf(Ponteiro_Para_Impressao,"\n\nA semana de numero %d ficou da seguinte forma: \n", (i+1));
    for(Dias = Aux; Dias < 5; Dias++){
      fprintf(Ponteiro_Para_Impressao,"\n\nNa %s feira estarao em sala de aula os alunos : \n\n", Dias_Letivo[Dias]);
      Guarda_Dia = Dias;  
      Dias = 5;   
      for(j = 0; j < Quantidade_De_Alunos; j++){
        if(strncmp(Matriz[Dia_Da_Aula][j],"V",1) != 0){
          fprintf(Ponteiro_Para_Impressao,"%s", Matriz[Dia_Da_Aula][j]);
        }
      }
      fprintf(Ponteiro_Para_Impressao,"\n\nE eles vao estudar as disciplinas\n\n");
      for(h = 0; h < 4; h++){
        fprintf(Ponteiro_Para_Impressao,"%s, ", Horario_Escolar[h][Guarda_Dia]);
      }
      Dia_Da_Aula++;
      if(Dia_Da_Aula == Quantidade_De_Turmas){
        Dia_Da_Aula = 0;
      }
      Aux += 1;
      Dias = Guarda_Dia; 
    }    
  }
  fflush(Arquivo); 
}
int main(void){
  bool Cadastrou_Turma = false;
  bool Alocou_Turma = false;
  char Horario_Escolar[4][5][20] = {"Portugues", "Matematica", "Portugues", "Ciencias", "Portugues", 
                                    "Artes", "Geografia", "Historia", "Portugues", "Matematica", 
                                    "Matematica", "Portugues", "Matematica", "Matematica", "Ciencias / Religiao",
                                    "Ciencias", "Historia", "Geografia", "Artes","Educacao Fisica"};
  int i, j;
  Aluno * Aln;
  Aluno * Alunos_Grupo_De_Risco;
  FILE * Arquivo;
  Aln = Cria_Lista_Aluno(); 
  Alunos_Grupo_De_Risco = Cria_Lista_Aluno();
  char Nome_Main[40], Data_Nasc_Main[15], Identidade_Main[15], CPF_Main[15], N_Pai_Main[40], N_Mae_Main[40], Telefone_Main[20], Cidade_Main[20], Bairro_Main[20], Endereco_Main[40], N_Endereco_Main[7], Tipo_De_Arquivo[15];
  float Altura_Main, Peso_Main;
  char Dias_Letivo[5][10] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta"};
  int Cadastra_Outro_ALuno, Quantidade_De_Alunos_Cadastrados, Semanas_Para_Fechar_O_Ciclo, Cronica, Escolha_Tipo_De_Arquivo;
  float Largura, Altura, Distancia_Minima, Guarda_Largura, Guarda_Altura, Guarda_Distancia_Minima; 
  Imprime_Menu();
  int Opcao;
  printf("\nDigite uma opcao : ");
  scanf("%d", &Opcao);
  while ((Opcao == 5 || Opcao == 4) && ! Cadastrou_Turma){
      printf("\n\nImpossivel alocar ou exibir uma turma vazia, primeiro cadastre uma turma e tente novamente\n\n");
      printf("\nDigite uma opcao : ");
      scanf("%d", &Opcao);
  }
  while(Opcao == 6 && ! Alocou_Turma){
    printf("\n\nImpossivel salvar em arquivo uma turma nao alocada, primeiro aloque uma turma e tente novamente\n\n");
    printf("\nDigite uma opcao : ");
    scanf("%d", &Opcao);
  }
  while (! Valida_Opcao(Opcao, 1, 7)){
    printf("\nOpcao invalida, Digite uma opcao : ");
    scanf("%d", &Opcao);
    while ((Opcao == 5 || Opcao == 4) && ! Cadastrou_Turma){
      printf("\n\nImpossivel alocar ou exibir turma vazia, primeiro cadastre uma turma e tente novamente\n\n");
      printf("\nDigite uma opcao : ");
      scanf("%d", &Opcao);
    }
    while(Opcao == 6 && ! Alocou_Turma){
    printf("\n\nImpossivel salvar em arquivo uma turma nao alocada, primeiro aloque uma turma e tente novamente\n\n");
    printf("\nDigite uma opcao : ");
    scanf("%d", &Opcao);
    }
  }
  while (Opcao != 7){
    switch(Opcao){
      case 1:
        printf("\nDigite o valor da Largura e Comprimento da sala de aula e a distancia minima em metros recomendada respectivamete\n");
        scanf("%f %f %f", &Largura, &Altura, &Distancia_Minima);
        printf("\nA quantidade de pessoas que poderao frequentar essa sala sera de %d pessoas", Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima));
        break;
      case 2: 
        printf("\nDigite o valor da Largura e Altura da sala de aula e a distancia minima em metros recomendada respectivamete\n");
        scanf("%f %f %f", &Largura, &Altura, &Distancia_Minima);
        printf("\n");
        Distancia_Minima = Distancia_Minima / 2;
        Imprime_Sala(Altura, Largura, Distancia_Minima);   
        break;   
      case 3:
        do{
            Pega_E_Insere(Nome_Main, Data_Nasc_Main, Identidade_Main, CPF_Main, N_Pai_Main, N_Mae_Main, Telefone_Main, Cidade_Main, Bairro_Main, Endereco_Main, N_Endereco_Main, &Altura_Main, &Peso_Main, &Cronica);
            if( ! E_Obeso_Ou_Doenca_Cronica(Altura_Main, Peso_Main, Cronica)){ 
              Aln = Insere_Aluno_Na_Lista(Aln,Nome_Main, Data_Nasc_Main, Identidade_Main, CPF_Main, N_Pai_Main, N_Mae_Main, Telefone_Main, Cidade_Main, Bairro_Main, Endereco_Main, N_Endereco_Main, Altura_Main, Peso_Main);
            }else{
              Alunos_Grupo_De_Risco = Insere_Aluno_Na_Lista(Alunos_Grupo_De_Risco,Nome_Main, Data_Nasc_Main, Identidade_Main, CPF_Main, N_Pai_Main, N_Mae_Main, Telefone_Main, Cidade_Main, Bairro_Main, Endereco_Main, N_Endereco_Main, Altura_Main, Peso_Main);
            }
            printf("\nDeseja cadastrar outro aluno ? [1] - Sim [2] - Nao\n");
            scanf("%d", &Cadastra_Outro_ALuno);
            while (! Valida_Opcao(Cadastra_Outro_ALuno, 1, 2)){
                printf("\nOpcao invalida, Digite uma opcao : ");
                scanf("%d", &Cadastra_Outro_ALuno);
            }
        }while(Cadastra_Outro_ALuno == 1);
        Cadastrou_Turma = true;
        break;
      case 4:
        printf("\n\nTurma das aulas presenciais\n\n");
        Exibe_Turma(Aln);
        printf("\n\nTurma das aulas remotas\n\n");
        Exibe_Turma(Alunos_Grupo_De_Risco);
        break;
      case 5:{
        printf("\nDigite o valor da Largura e Comprimento da sala de aula e a distancia minima em metros recomendada respectivamete\n");
        scanf("%f %f %f", &Largura, &Altura, &Distancia_Minima);
        Semanas_Para_Fechar_O_Ciclo = ceil ((float) Cont_Quantidade_Aluno(Aln) / ((Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1)));
        printf("\n\nA turma com %d aluno(s) do nao grupo de risco foi dividida em %d grupo(s) para que haja o distanciamento adequado na sala de aula levando em consideracao a area da sala de aula e a distancia minima entre duas carteiras, sera preciso uma quantidade de %d semana(s) para que todos os alunos tenham a mesma quantidade de aula\n\n",Cont_Quantidade_Aluno(Aln), Semanas_Para_Fechar_O_Ciclo, Semanas_Para_Fechar_O_Ciclo);
        printf("\n\nO grupo de alunos do grupo de risco contem uma quantidade de %d aluno(s) e eles deverão assistir as aulas de forma remota\n\n",Cont_Quantidade_Aluno(Alunos_Grupo_De_Risco));
        char Alocacao[Semanas_Para_Fechar_O_Ciclo][Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1][41];
        Aloca_Turma(Aln, (Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1), Semanas_Para_Fechar_O_Ciclo, Alocacao);
        Imprime_Turma_Alocada(Semanas_Para_Fechar_O_Ciclo, (Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1), Alocacao, Dias_Letivo, Horario_Escolar);
        Alocou_Turma = true;
        break;
        }
      case 6:{
        Semanas_Para_Fechar_O_Ciclo = ceil ((float) Cont_Quantidade_Aluno(Aln) / ((Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1)));
        char Alocacao[Semanas_Para_Fechar_O_Ciclo][Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1][41];
        Aloca_Turma(Aln, (Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1), Semanas_Para_Fechar_O_Ciclo, Alocacao);
        printf("\n\nDeseja salvar o arquivo em que formato ? [1] - Word.doc, [2] - Texto.txt\n\n");
        scanf("%d", &Escolha_Tipo_De_Arquivo);
        while( ! Valida_Opcao(Escolha_Tipo_De_Arquivo, 1, 2)){
          printf("\n\nTipo de arquivo invalido, Digite novamente uma opcao\n\n");
          scanf("%d", &Escolha_Tipo_De_Arquivo);
        }
        if(Escolha_Tipo_De_Arquivo == 1){
          strcpy(Tipo_De_Arquivo, "GERENCIAMNETO ESCOLAR DO ENSINO FUNDAMENTAL 1 DURANTE A PANDEMIA.doc");
        }else{
          strcpy(Tipo_De_Arquivo, "GERENCIAMNETO ESCOLAR DO ENSINO FUNDAMENTAL 1 DURANTE A PANDEMIA.txt");
        }
        Imprime_Sala_No_Arquivo(Altura, Largura, Distancia_Minima / 2, Arquivo, Tipo_De_Arquivo); 
        Imprime_Horario_No_Arquivo(Semanas_Para_Fechar_O_Ciclo, (Quantidade_Alunos_Sala(Altura, Largura, Distancia_Minima) - 1),Alocacao,Dias_Letivo, Horario_Escolar, Arquivo, Tipo_De_Arquivo);
        break; 
      }
    }
    Imprime_Menu();
    printf("\nDigite uma opcao : ");
    scanf("%d", &Opcao);
    while ((Opcao == 5 || Opcao == 4) && ! Cadastrou_Turma){
      printf("\n\nImpossivel alocar ou exibir turma vazia, primeiro cadastre uma turma e tente novamente\n\n");
      printf("\nDigite uma opcao : ");
      scanf("%d", &Opcao);
    }
    while(Opcao == 6 && ! Alocou_Turma){
    printf("\n\nImpossivel salvar em arquivo uma turma nao alocada, primeiro aloque uma turma e tente novamente\n\n");
    printf("\nDigite uma opcao : ");
    scanf("%d", &Opcao);
    }
    while (! Valida_Opcao(Opcao, 1, 7)){
      printf("\nOpcao invalida, Digite uma opcao : ");
      scanf("%d", &Opcao);
      while ((Opcao == 5 || Opcao == 4) && ! Cadastrou_Turma){
        printf("\n\nImpossivel alocar ou exibir turma vazia, primeiro cadastre uma turma e tente novamente\n\n");
        printf("\nDigite uma opcao : ");
        scanf("%d", &Opcao);
      }
      while(Opcao == 6 && ! Alocou_Turma){
    printf("\n\nImpossivel salvar em arquivo uma turma nao alocada, primeiro aloque uma turma e tente novamente\n\n");
    printf("\nDigite uma opcao : ");
    scanf("%d", &Opcao);
      }
    }
  }  
  
  return 0;
}