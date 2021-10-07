#include <iostream>
using namespace std;

struct Funcionario{
  int Matricula;
  string Nome;
  double Salario;
  Funcionario *ProximoFuncionario;

};



void *InserirFuncionarioNoFimDaLista(Funcionario *&funcionario, string NomeNovoFuncionario, double SalarioP, int MatriculaP){
    Funcionario *NovoFuncionario = new Funcionario;
    NovoFuncionario -> Nome = NomeNovoFuncionario;
    NovoFuncionario -> Matricula = MatriculaP;
    NovoFuncionario -> Salario = SalarioP;
    NovoFuncionario -> ProximoFuncionario = NULL;
    if(funcionario == NULL){
        funcionario = NovoFuncionario;
    }else{
        Funcionario *EncontaUltimoFuncionario = funcionario;
        while(EncontaUltimoFuncionario -> ProximoFuncionario != NULL){
            EncontaUltimoFuncionario = EncontaUltimoFuncionario -> ProximoFuncionario;
        }
        EncontaUltimoFuncionario -> ProximoFuncionario = NovoFuncionario;
    }
    return NovoFuncionario;
}
void ImprimeFuncionariosDeUmaListaDeUmVetor(Funcionario *funcionario, int Indice){
  cout<<"\n\nAbaixo estao os funcionarios da tabela de indece "<<Indice;
  while(funcionario != NULL){
    cout<<"\n\nNome = "<<funcionario->Nome;
    cout<<"\n\nSalario = "<<funcionario->Salario;
    cout<<"\n\nMatricula = "<<funcionario->Matricula;
    funcionario = funcionario -> ProximoFuncionario;
    cout<<"\n\n-----------------------------------------";
  }
}

void ExibeMenu(){
  cout<<"\n\n[1] - Inserir Funcionario\n\n[2] - Exibir Funcionarios de uma posicao da tabela\n\n[3] -  Sair";
}

void PreencheMain(Funcionario **vetor){
  int MatriculaDoFuncionarioMain, IndiceASerInserido, Opcao, PosicaoDaTabela;
  string NomeDoFuncionarioMain;
  double SalarioDoFuncionarioMain;
  do{
    ExibeMenu();
    cout<<"\n\nDigite uma opcao : ";
    cin>> Opcao;
    switch(Opcao){
      case 1:{
        do{
          cout<<"\n\nDigite o nome do funcionario : ";
          cin>>NomeDoFuncionarioMain;
          cout<<"\nDigite o salario do funcionario : ";
          cin>>SalarioDoFuncionarioMain;
          cout<<"\nDigite a matricula do funcionario : ";
          cin>>MatriculaDoFuncionarioMain;
          if(MatriculaDoFuncionarioMain != 0){
            IndiceASerInserido = MatriculaDoFuncionarioMain % 25;
            InserirFuncionarioNoFimDaLista(vetor[IndiceASerInserido], NomeDoFuncionarioMain, SalarioDoFuncionarioMain, MatriculaDoFuncionarioMain);
            cout<<"\n\nFuncionario inserido com sucesso na posicao da tabela = "<<IndiceASerInserido;
          }
        }while(MatriculaDoFuncionarioMain != 0);
        break;
      }
      case 2:{
        cout<<"\n\nDigite a posicao da tabela que voce quer ver os funcionarios : ";
        cin>>PosicaoDaTabela;
        while(PosicaoDaTabela >= 25 || PosicaoDaTabela < 0){
          cout<<"\nPosicao da tabela invalida, digite um valor entre 0 e 24";
          cout<<"\n\nDigite a posicao da tabela que voce quer ver os funcionarios : ";
          cin>>PosicaoDaTabela;
        }
        ImprimeFuncionariosDeUmaListaDeUmVetor(vetor[PosicaoDaTabela], PosicaoDaTabela);
        break;
      }
      case 3:
        cout<<"\n\nSaindo da aplicacao";
        break;
      default:
        cout<<"\nOpcao invalida";
        break;
    }
  }while(Opcao != 3);
}

int main() {
  Funcionario **vetor = new Funcionario*[25];
  for(int i = 0; i < 25; i++){
    vetor[i] = NULL;
  }
  PreencheMain(vetor);
} 