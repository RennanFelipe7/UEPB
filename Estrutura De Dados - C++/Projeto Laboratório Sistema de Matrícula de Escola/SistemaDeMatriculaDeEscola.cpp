/*
Vamos implementar o sistema de matrículas de uma escola. Neste sistema, 
são armazenadas informações das turmas (nome da turma e série) e dos alunos (nome e matrícula). 
Deve ser oferecido ao usuário um menu com as seguintes opções:

1 - Criar nova turma;
2 - Listar turmas;
3 - Inserir aluno em turma determinada;
4 - Inserir aluno na turma mais vaga;
5 - Listar alunos de turma determinada;
6 - Relatório completo;
0 - Sair. 

Na opção 3, deve ser informada a série e o nome da turma desejada, 
sendo o aluno inserido especificamente nesta turma. Na opção 4, 
deve ser informada a série do aluno, sendo então o aluno inserido na turma da série 
correspondente que contenha menos alunos. Na opção relatório completo, deve-se imprimir 
todas as turmas, com seus respectivos alunos.


Os alunos devem ser mantidos em ordem alfabética em cada turma, e as 
turmas devem ser ordenadas por série, e no caso de turmas da mesma série, ordenadas por 
ordem alfabética do nome da turma.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
  
struct Aluno{
  string NomeAluno;
  int Matricula;
  Aluno *AntAluno, *ProxAluno;
};

struct Turma{ 
  string NomeTurma;
  int SerieTurma; 
  int tam = 0; 
  Aluno *IniTurma, *FimTurma;
  Turma* ProxTurma;
};

Turma* InicializaEscola(){
  return NULL;
}

int TamanhoDaEscola(Turma *trm){
  int Tamanho = 0;
  while(trm != NULL){
    Tamanho++;
    trm = trm -> ProxTurma;
  }
  return Tamanho;
}

void InserirAluno(Turma*trm, string Nome, int Matricula){ 
  Aluno* NovoAluno = new Aluno; 
  NovoAluno->NomeAluno = Nome; 
  NovoAluno -> Matricula = Matricula; 
  NovoAluno->AntAluno = NULL;
  NovoAluno->ProxAluno = NULL;
  if(trm->IniTurma == NULL){
    trm->IniTurma = NovoAluno;
    trm->FimTurma = NovoAluno;
    trm->tam++;
  }else{
    Aluno *PercorreAlunos = trm -> IniTurma;
    if(trm -> tam < 2){
      if(NovoAluno -> NomeAluno > PercorreAlunos -> NomeAluno){
        PercorreAlunos -> ProxAluno = NovoAluno;
        trm -> tam++;
      }else{
        trm -> IniTurma = NovoAluno;
        NovoAluno -> ProxAluno = PercorreAlunos;
        trm -> tam++;
      }
    }else{
      Aluno *PercorreAlunos = trm -> IniTurma;
      Aluno *GuardaPosicao;
      while(PercorreAlunos != NULL && NovoAluno -> NomeAluno > PercorreAlunos -> NomeAluno){
        GuardaPosicao = PercorreAlunos;
        PercorreAlunos = PercorreAlunos -> ProxAluno;
      }
      if(PercorreAlunos == trm -> IniTurma){
        trm -> IniTurma = NovoAluno;
        NovoAluno -> ProxAluno = PercorreAlunos; 
        trm -> tam++;
      }else if(PercorreAlunos == NULL){
        GuardaPosicao -> ProxAluno = NovoAluno;
        trm -> tam++;
      }else{
        GuardaPosicao -> ProxAluno = NovoAluno;
        NovoAluno -> ProxAluno = PercorreAlunos;
        trm -> tam++;
      }
    }
  }
}

void InserirTurma(Turma *&trm, string NomeTurmaP, int SerieTurmaP){
  Turma *novaTurma = new Turma;
  novaTurma -> NomeTurma = NomeTurmaP;
  novaTurma -> SerieTurma = SerieTurmaP;
  novaTurma -> IniTurma = NULL;
  novaTurma -> FimTurma = NULL;
  novaTurma -> ProxTurma = NULL;
  if(trm == NULL){
    trm = novaTurma; 

  }else{
    Turma *PercorreTurma = trm;
    Turma *GuardaPosicao = trm; 
    while(PercorreTurma != NULL && novaTurma -> SerieTurma >= PercorreTurma -> SerieTurma){
      GuardaPosicao = PercorreTurma;                                      
      PercorreTurma = PercorreTurma -> ProxTurma;
    }
    if(novaTurma -> SerieTurma == GuardaPosicao -> SerieTurma){
      if(TamanhoDaEscola(trm) < 2){
        if(novaTurma -> NomeTurma > GuardaPosicao -> NomeTurma){
          GuardaPosicao -> ProxTurma = novaTurma;
        }else{
          novaTurma -> ProxTurma = GuardaPosicao;
          trm = novaTurma;
        }
      }else{
        Turma *PercorreTurmaSerieIguais = trm;
        Turma *GuardaPosicaoSerieIguais = trm; 
        Turma *aux = trm; 
        while(aux != NULL && aux -> SerieTurma != novaTurma -> SerieTurma){
          GuardaPosicaoSerieIguais = aux;
          aux = aux -> ProxTurma;
        }
        PercorreTurmaSerieIguais = aux; 
        while(PercorreTurmaSerieIguais != NULL && novaTurma -> NomeTurma > PercorreTurmaSerieIguais -> NomeTurma && novaTurma -> SerieTurma >= PercorreTurmaSerieIguais -> SerieTurma){
          GuardaPosicaoSerieIguais = PercorreTurmaSerieIguais;
          PercorreTurmaSerieIguais = PercorreTurmaSerieIguais -> ProxTurma;
        }
        if(PercorreTurmaSerieIguais == NULL){
          GuardaPosicaoSerieIguais -> ProxTurma = novaTurma;
        }else if(PercorreTurmaSerieIguais == trm){
          novaTurma -> ProxTurma = PercorreTurmaSerieIguais;
          trm = novaTurma;
        }else{
          GuardaPosicaoSerieIguais -> ProxTurma = novaTurma;
          novaTurma -> ProxTurma = PercorreTurmaSerieIguais;
        }
      }
    }else{
      if(TamanhoDaEscola(trm) < 2){
        if(PercorreTurma == NULL){
          GuardaPosicao -> ProxTurma = novaTurma;
        }else{
          novaTurma -> ProxTurma = PercorreTurma;
          trm = novaTurma;
        }
      }else{
        if(PercorreTurma == trm){
          novaTurma -> ProxTurma = PercorreTurma;
          trm = novaTurma;
        }else if(PercorreTurma == NULL){
          GuardaPosicao -> ProxTurma = novaTurma; 
        }else{
          GuardaPosicao -> ProxTurma = novaTurma;
          novaTurma -> ProxTurma = PercorreTurma;
        }
      }
    }

    
  }
}

void ImprimeTurmas(Turma *trm){
  Turma *PercorreTurmas = trm;
  cout<< "\nAbaixo estao as turmas da escola com sua respectiva serie : \n\n";
  while(PercorreTurmas != NULL){
    cout<<"Turma = " <<PercorreTurmas -> NomeTurma<<"\tSerie = "<<PercorreTurmas -> SerieTurma<<"\n\n";
    PercorreTurmas = PercorreTurmas -> ProxTurma;
  }
}

void ImprimirAlunosDeDeterminadaTurma(Turma *trm, string QualTurma){
  Turma *PercorreTurma = trm;
  while(PercorreTurma != NULL && PercorreTurma -> NomeTurma != QualTurma){
    PercorreTurma = PercorreTurma-> ProxTurma;
  }
  if(PercorreTurma != NULL){
    Aluno *PercorreAluno = PercorreTurma -> IniTurma;
    cout<< "\nAbaixo estao os alunos da turma "<< QualTurma<<" de serie "<<PercorreTurma -> SerieTurma<<"\n\n";
    while(PercorreAluno != NULL){
      cout<< PercorreAluno -> NomeAluno<<"\n";
      PercorreAluno = PercorreAluno -> ProxAluno;
    }
  }else{
    cout<<"\nTurma nao encontrada\n";
  }
}
void RelatorioCompleto(Turma *trm){
  Turma *PercorreTurma = trm;
  while(PercorreTurma != NULL){
    Aluno *PercorreAlunos = PercorreTurma -> IniTurma;
    cout<<"\nAbaixo estao os alunos da turma "<<PercorreTurma -> NomeTurma<< " de serie "<<PercorreTurma -> SerieTurma <<" : \n\n";
    while(PercorreAlunos != NULL){
      cout<<PercorreAlunos -> NomeAluno<<"\n";
      PercorreAlunos = PercorreAlunos -> ProxAluno;
    }
    PercorreTurma = PercorreTurma ->ProxTurma;
  }
}

Turma *BuscarTurma(Turma *trm, string NomeTurmaP, int SerieTurmaP){
  while((trm != NULL) && ((trm->NomeTurma != NomeTurmaP) || (trm -> SerieTurma != SerieTurmaP))) 
    trm = trm->ProxTurma; 
  return trm;
}
Turma *BuscaTurmaMaisVaga(Turma *trm, int Serie){// Aqui
  while (trm != NULL && trm -> SerieTurma != Serie){
    trm = trm -> ProxTurma;
  }
  if(trm == NULL){
    return NULL;
  }else{
    Turma *MenorTurma = trm;
    Turma *TurmaPosterior = MenorTurma -> ProxTurma;
    while(trm -> ProxTurma != NULL && trm -> ProxTurma ->SerieTurma == Serie){
      if(MenorTurma -> tam > TurmaPosterior -> tam){
        MenorTurma = TurmaPosterior;
      }
      TurmaPosterior = TurmaPosterior -> ProxTurma; 
      trm = trm -> ProxTurma;
    }
    return MenorTurma; 
  }
}

bool AlocarAlunoTurma(Turma *trm, string NomeAlunoP, int MatriculaP, string NomeTurmaP, int SerieTurmaP){
  Turma* TurmaASerInserida = BuscarTurma(trm ,NomeTurmaP, SerieTurmaP);
  if(TurmaASerInserida == NULL)
    return false;
  else{
    InserirAluno(TurmaASerInserida, NomeAlunoP, MatriculaP);
    return true;
  }
}

void ImprimeMenu(){
  cout<<"\n[1] - Criar nova turma\n[2] - Listar turmas\n[3] - Inserir aluno em turma determinada\n[4] - Inserir aluno na turma mais vaga\n[5] - Listar alunos de turma determinada\n[6] - Relatório completo\n[0] - Sair\n\nOpcao : ";
}

void PreencheEscola(Turma *trm){
  int Opcao, SerieTurma, MatriculaAluno;
  string NomeTurma, NomeAluno;
  do{
    ImprimeMenu();
    cin>> Opcao;
    switch(Opcao){
      case 1:
        cout<<"\nDigite o nome da turma : ";
        cin>> NomeTurma;
        cout<< "\nDigite a serie da turma : ";
        cin >> SerieTurma;
        InserirTurma(trm, NomeTurma, SerieTurma);
        cout<<"\nTurma inserida com sucesso\n";
        break;
      case 2:
        ImprimeTurmas(trm);
        break;
      case 3:
        cout<< "\nDigite o nome da turma que vai ser inserido o aluno : ";
        cin>> NomeTurma;
        cout<< "\nDigite a serie da turma que vai ser inserido o aluno : ";
        cin>> SerieTurma;
        cout<< "\nDigite o nome do aluno que vai ser inserido na turma : ";
        cin>> NomeAluno;
        cout<< "\nDigite a matricula do aluno que vai ser inserido na turma : ";
        cin>> MatriculaAluno;
        if(AlocarAlunoTurma(trm, NomeAluno, MatriculaAluno, NomeTurma, SerieTurma)){
          cout<< "\nAluno inserido com sucesso na turma\n";
        }else{
          cout<< "\nTurma ou serie nao encontrada\n";
        }
        break;
      case 4:
        cout<< "\nDigite o nome do aluno que vai ser inserido na turma : ";
        cin>> NomeAluno;
        cout<< "\nDigite a matricula do aluno que vai ser inserido na turma : ";
        cin>> MatriculaAluno;
        cout<< "\nDigite a serie da turma que vai ser inserido o aluno : ";
        cin>> SerieTurma;
        if(BuscaTurmaMaisVaga(trm, SerieTurma) == NULL){
          cout<< "\nNao foi possivel inserir aluno na turma, pois nao existe turma com essa serie\n";
        }else{
          InserirAluno(BuscaTurmaMaisVaga(trm, SerieTurma), NomeAluno, MatriculaAluno);
          cout<<"\nAluno Inserido com sucesso\n";
        }
        break;
      case 5:
        cout<< "\nDigite a turma a ser mostrada os alunos: ";
        cin>> NomeTurma;
        ImprimirAlunosDeDeterminadaTurma(trm, NomeTurma);
        break;
      case 6:
        RelatorioCompleto(trm);
        break;
      case 0:
        continue;
      default:
        cout<< "\nOpcao invalida !\n";
        break;
    }
  }while(Opcao != 0);
}

int main(){
  Turma *Escola = InicializaEscola();
  PreencheEscola(Escola); 
}