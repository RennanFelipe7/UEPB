#include <iostream>
using namespace std;
struct Funcionario{
  string Nome;
  int Matricula;
  double Salario;
  Funcionario *Esquerda, *Direita;
};

Funcionario *InicializaFuncionario(){ 
    return NULL; 
}

void InserirNaArvoreDeNome(Funcionario *&raiz, string NomeP, int MatriculaP, double SalarioP){
  if(raiz == NULL){ 
    raiz = new Funcionario;
    raiz->Nome = NomeP;
    raiz->Matricula = MatriculaP;
    raiz->Salario = SalarioP;
    raiz->Esquerda = NULL;
    raiz->Direita = NULL;
  }
  else if(MatriculaP < raiz->Matricula)
    InserirNaArvoreDeNome(raiz->Esquerda, NomeP, MatriculaP, SalarioP);
  else if(MatriculaP > raiz->Matricula)
    InserirNaArvoreDeNome(raiz->Direita, NomeP, MatriculaP, SalarioP);
  else{
    cout<<"\n\nMatricula ja existe na arvore";
  }
}

int SomaDoSalarioDosFuncionarios(Funcionario *raiz){
  if(raiz == NULL){
    return 0;
  }else{
    return SomaDoSalarioDosFuncionarios(raiz->Esquerda) + SomaDoSalarioDosFuncionarios(raiz->Direita) + raiz->Salario;
  }
  
}

int main() {
  Funcionario *ArvoreDeFuncionarios;
  ArvoreDeFuncionarios = InicializaFuncionario();
  InserirNaArvoreDeNome(ArvoreDeFuncionarios, "Rennan", 5 ,1000);
  InserirNaArvoreDeNome(ArvoreDeFuncionarios, "Joao", 1, 200);
  InserirNaArvoreDeNome(ArvoreDeFuncionarios, "Jose",4, 300);
  InserirNaArvoreDeNome(ArvoreDeFuncionarios, "Rogerio", 2, 400);
  InserirNaArvoreDeNome(ArvoreDeFuncionarios, "Anderson", 3, 700);

  cout<<"\n\nA soma dos salarios dos funcionarios e de : "<<SomaDoSalarioDosFuncionarios(ArvoreDeFuncionarios)<<"  R$";
}