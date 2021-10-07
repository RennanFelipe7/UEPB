/*
O projeto consiste em criar uma lista encadeada de funcionários contendo nome e matrícula como dados. 
Considerando a possibilidade de que a lista contenha uma quantidade muito grande de elementos, 
a realização de pesquisas sequenciais pode ter desempenho abaixo do aceitável. Dessa forma, 
árvores binárias de pesquisa serão utilizadas como índices em operações de busca.
Devem ser criadas duas árvores de pesquisa: uma organizada por nome, outra por matrícula. 
As árvores não devem conter informações, e sim uma referência para a posição da lista que representam. 
O seguinte menu de opções deve ser oferecido ao usuário:


1 - Inserir elemento no fim da lista;
2 - Buscar elemento na lista por matrícula;
3 - Buscar elemento na lista por nome;
4 - Imprimir todos os elementos por ordem de matrícula;
5 - Imprimir todos os elementos por ordem de nome;
6 - Balancear árvores;
0 - Sair
*/

#include <iostream>
using namespace std;

struct Funcionario{
    string Nome;
    int Matricula;
    Funcionario *ProxFuncionario;
};

Funcionario *InicializaFuncionario(){ 
    return NULL; 
}

struct Arvore{
  Funcionario *PosicaoNaLista; 
  Arvore *Esquerda, *Direita;
};

void InicializaArvore(Arvore *&raiz){
    raiz = NULL;
}

void ImprimirCentral(Arvore *raiz){ 
  if(raiz!=NULL){                   
    ImprimirCentral(raiz->Esquerda); 
    cout<<"\n\n-------------------------------------------------------------------";
    cout<<"\n\nNome = " <<raiz->PosicaoNaLista->Nome<<"\n"; 
    cout<<"\n\nMatricula = " <<raiz->PosicaoNaLista->Matricula<<"\n";     
    cout<<"\n-------------------------------------------------------------------\n\n";                   
    ImprimirCentral(raiz->Direita);
  }
}

bool NaoExisteOFuncionarioArvoreNome(Arvore *raiz, string NomeAProcurar){
  if(raiz == NULL){
    return true;
  }else{
    if(NomeAProcurar < raiz->PosicaoNaLista->Nome){
      return NaoExisteOFuncionarioArvoreNome(raiz->Esquerda, NomeAProcurar);
    }else if(NomeAProcurar > raiz->PosicaoNaLista->Nome){
      return NaoExisteOFuncionarioArvoreNome(raiz->Direita, NomeAProcurar);
    }else{
      return false;
    }
  }
}

bool NaoExisteOFuncionarioArvoreMatricula(Arvore *raiz, int MatriculaAProcurar){
  if(raiz == NULL){
    return true;
  }else{
    if(MatriculaAProcurar < raiz->PosicaoNaLista->Matricula){
      return NaoExisteOFuncionarioArvoreMatricula(raiz->Esquerda, MatriculaAProcurar);
    }else if(MatriculaAProcurar > raiz->PosicaoNaLista->Matricula){
      return NaoExisteOFuncionarioArvoreMatricula(raiz->Direita, MatriculaAProcurar);
    }else{
      return false;
    }
  }
}

Funcionario *InserirFuncionarioNoFimDaLista(Funcionario *&funcionario, string NomeNovoFuncionario, int MatriculaNovoFuncionario){
    Funcionario *NovoFuncionario = new Funcionario;
    NovoFuncionario -> Nome = NomeNovoFuncionario;
    NovoFuncionario -> Matricula = MatriculaNovoFuncionario;
    NovoFuncionario -> ProxFuncionario = NULL; 
    if(funcionario == NULL){
        funcionario = NovoFuncionario;
    }else{
        Funcionario *EncontaUltimoFuncionario = funcionario;
        while(EncontaUltimoFuncionario -> ProxFuncionario != NULL){
            EncontaUltimoFuncionario = EncontaUltimoFuncionario -> ProxFuncionario;
        }
        EncontaUltimoFuncionario -> ProxFuncionario = NovoFuncionario;
    }
    return NovoFuncionario;
}

void InserirNaArvoreDeNome(Arvore *&raiz, Funcionario *&PosicaoDeMemoriaDoFuncionarioNaLista){
  if(raiz == NULL){ 
    raiz = new Arvore;
    raiz->PosicaoNaLista = PosicaoDeMemoriaDoFuncionarioNaLista; 
    raiz->Esquerda = NULL;
    raiz->Direita = NULL;
  }
  else if(PosicaoDeMemoriaDoFuncionarioNaLista->Nome < raiz->PosicaoNaLista->Nome)
    InserirNaArvoreDeNome(raiz->Esquerda, PosicaoDeMemoriaDoFuncionarioNaLista);
  else if(PosicaoDeMemoriaDoFuncionarioNaLista->Nome > raiz->PosicaoNaLista->Nome)
    InserirNaArvoreDeNome(raiz->Direita, PosicaoDeMemoriaDoFuncionarioNaLista);
}

void InserirNaArvoreDeMatricula(Arvore *&raiz, Funcionario *&PosicaoDeMemoriaDoFuncionarioNaLista){
  if(raiz == NULL){
    raiz = new Arvore;
    raiz->PosicaoNaLista = PosicaoDeMemoriaDoFuncionarioNaLista;
    raiz->Esquerda = NULL;
    raiz->Direita = NULL;
  }
  else if(PosicaoDeMemoriaDoFuncionarioNaLista->Matricula < raiz->PosicaoNaLista->Matricula)
    InserirNaArvoreDeMatricula(raiz->Esquerda, PosicaoDeMemoriaDoFuncionarioNaLista);
  else if(PosicaoDeMemoriaDoFuncionarioNaLista->Matricula > raiz->PosicaoNaLista->Matricula)
    InserirNaArvoreDeMatricula(raiz->Direita, PosicaoDeMemoriaDoFuncionarioNaLista);
}

void ImprimeDadosDaArvore(Arvore *NoDaArvoreQueContemOFuncionario){
  cout<<"\n\n-------------------------------------------------------------------";
  cout<<"\n\nNome : "<<NoDaArvoreQueContemOFuncionario->PosicaoNaLista->Nome;
  cout<<"\n\nMatricula : "<<NoDaArvoreQueContemOFuncionario->PosicaoNaLista->Matricula;
  cout<<"\n\n-------------------------------------------------------------------\n\n";
}

Arvore *EncontraFuncionarioNaArvoreDeNomes(Arvore *raiz, string NomeAProcurar){
  if(raiz == NULL || raiz ->PosicaoNaLista->Nome == NomeAProcurar){
    return raiz; 
  }else{
    if(NomeAProcurar < raiz->PosicaoNaLista->Nome){
      return EncontraFuncionarioNaArvoreDeNomes(raiz->Esquerda, NomeAProcurar);
    }else{
      return EncontraFuncionarioNaArvoreDeNomes(raiz->Direita, NomeAProcurar);
    }
  }
}

Arvore *EncontraFuncionarioNaArvoreDeMatricula(Arvore *raiz, int MatriculaAProcurar){
  if(raiz == NULL || raiz ->PosicaoNaLista->Matricula == MatriculaAProcurar){
    return raiz; 
  }else{
    if(MatriculaAProcurar < raiz->PosicaoNaLista->Matricula){
      return EncontraFuncionarioNaArvoreDeMatricula(raiz->Esquerda, MatriculaAProcurar);
    }else{
      return EncontraFuncionarioNaArvoreDeMatricula(raiz->Direita, MatriculaAProcurar);
    }
  }
}

int AlturaArvore(Arvore* raiz){
  if(raiz == NULL)
    return -1;
  else{
    int altE = AlturaArvore(raiz->Esquerda);
    int altD = AlturaArvore(raiz->Direita);
    if(altE > altD)
      return altE + 1;
    else
      return altD + 1;
  }
}

bool Balanceada(Arvore *raiz){ 
  if(raiz == NULL)
    return true;
  else{
    if(abs(AlturaArvore(raiz->Esquerda) - AlturaArvore(raiz->Direita)) > 1)
      return false;
    else
      return Balanceada(raiz->Esquerda) && Balanceada(raiz->Direita) ; 
  }
}

void GerarVetor(Arvore *raiz, Funcionario **vet, int &i){
  if(raiz != NULL){                                                                  
    GerarVetor(raiz->Esquerda,vet,i);  
    vet[i] = raiz->PosicaoNaLista; 
    i++;
    GerarVetor(raiz->Direita,vet,i);
  }
}

void DestruirArvore(Arvore *&raiz){
  if(raiz != NULL){
    DestruirArvore(raiz->Esquerda);
    DestruirArvore(raiz->Direita);
    delete raiz;
    raiz = NULL;
  }
}

void GerarNovaArvore(Arvore *&raiz, Funcionario **vet, int ini, int fim){ 
  if(fim < ini)
    raiz = NULL;
  else{
    int meio = (ini+fim)/2;
    raiz = new Arvore;
    raiz->PosicaoNaLista = vet[meio];
    GerarNovaArvore(raiz->Esquerda, vet, ini, meio-1);
    GerarNovaArvore(raiz->Direita, vet, meio+1, fim);
  }
}

int TamanhoDaArvore(Arvore *raiz){  
  if(raiz == NULL)
    return 0;
  else
    return TamanhoDaArvore(raiz->Esquerda) + TamanhoDaArvore(raiz->Direita) + 1;
}

void BalanceamentoEstaticoArvoreNome(Arvore *&raiz){
  if(!Balanceada(raiz)){
    cout<<"\nArvore organizada por NOMES foi balanceada\n";
    int tam = TamanhoDaArvore(raiz); 
    Funcionario **vetor = new Funcionario*[tam];
    int indice = 0;
    int aux = tam;
    GerarVetor(raiz, vetor, indice);
    DestruirArvore(raiz);
    tam = aux; 
    GerarNovaArvore(raiz, vetor, 0, tam-1); 
    delete [] vetor;
    
  }
}

void BalanceamentoEstaticoArvoreMatricula(Arvore *&raiz){
  if(!Balanceada(raiz)){
    cout<<"\nArvore organizada por MATRICULA foi balanceada\n";
    int tam = TamanhoDaArvore(raiz); 
    Funcionario **vetor = new Funcionario*[tam];
    int indice = 0;
    int aux = tam;
    GerarVetor(raiz, vetor, indice);
    DestruirArvore(raiz);
    tam = aux; 
    GerarNovaArvore(raiz, vetor, 0, tam-1); 
    delete [] vetor;
    
  }
}

void exibirMenu(){
    cout<<"\n[1] - Inserir elemento no fim da lista\n";
    cout<< "[2] - Buscar elemento na lista por matricula\n";
    cout<<"[3] - Buscar elemento na lista por nome\n";
    cout<<"[4] - Imprimir todos os elementos por ordem de matricula\n";
    cout<<"[5] - Imprimir todos os elementos por ordem de nome\n";
    cout<<"[6] - Balancear arvores\n";
    cout<<"[0] - Sair\n\n";
}

void RecebeInformacoes(Funcionario *&funcionarios, Arvore *&ArvoreDeNome, Arvore *&ArvoreDeMatricula){
  int Opcao, Matricula;
  string NomeDoFuncionario;
  do{ 
    exibirMenu();
    cout<<"\nDigite uma opcao : "; 
    cin>> Opcao;
    switch (Opcao){
      case 1:{
        cout<<"\nDigite o nome do novo funcionario : ";
        cin>>NomeDoFuncionario;
        cout<<"\nDigite a matricula do funcionario : ";
        cin>>Matricula;
        if(NaoExisteOFuncionarioArvoreNome(ArvoreDeNome, NomeDoFuncionario) && NaoExisteOFuncionarioArvoreMatricula(ArvoreDeMatricula, Matricula)){
            Funcionario *PosicaoDoFuncionario = InserirFuncionarioNoFimDaLista(funcionarios, NomeDoFuncionario, Matricula);
            InserirNaArvoreDeNome(ArvoreDeNome, PosicaoDoFuncionario);
            InserirNaArvoreDeMatricula(ArvoreDeMatricula, PosicaoDoFuncionario);
            cout<<"\nFuncionario inserido com sucesso\n";
          }else{
            cout<<"\nImpossivel inserir funcionario pois ja existe funcionario com o mesmo nome ou matricula\n";
          }
          break; 
        }
      case 2:{
        cout<<"\nDigite a matricula do funcionario para fazer a busca : ";
        cin>>Matricula;
        Arvore *FuncionarioEncontradoMatricula = EncontraFuncionarioNaArvoreDeMatricula(ArvoreDeMatricula, Matricula);
        if(FuncionarioEncontradoMatricula != NULL){
          cout<<"\nAbaixo estao as informacoes do funcionario de matricula "<< Matricula<< " : ";
          ImprimeDadosDaArvore(FuncionarioEncontradoMatricula);
          cout<<"\n";
        }else{
          cout<<"\nFuncionario Nao encontrado\n";
        }
        break;
      }
      case 3:{
        cout<<"\nDigite o nome do funcionario para fazer a busca : ";
        cin>>NomeDoFuncionario;
        Arvore *FuncionarioEncontradoNome = EncontraFuncionarioNaArvoreDeNomes(ArvoreDeNome, NomeDoFuncionario);
        if(FuncionarioEncontradoNome != NULL){
          cout<<"\nAbaixo estao as informacoes do funcionario de nome "<< NomeDoFuncionario<< " : ";
          ImprimeDadosDaArvore(FuncionarioEncontradoNome);
          cout<<"\n";
        }else{
          cout<<"\nFuncionario Nao encontrado\n";
        }
        break;
      }
      case 4:{
        cout<<"\nAbaixo estao os funcionarios por ordem de MATRICULA : \n";
        ImprimirCentral(ArvoreDeMatricula);
        break;
      }
      case 5:{ 
        cout<<"\nAbaixo estao os funcionarios por ordem de NOME : \n";
        ImprimirCentral(ArvoreDeNome);
        break;
      }
      case 6:
        BalanceamentoEstaticoArvoreNome(ArvoreDeNome);
        BalanceamentoEstaticoArvoreMatricula(ArvoreDeMatricula);
        break;
    }
  }while(Opcao != 0);
}

int main(int argc, char const *argv[]){ 
    Funcionario *funcionarios;         
    funcionarios = InicializaFuncionario();

    Arvore *ArvoreDeNome;
    Arvore *ArvoreDeMatricula;

    InicializaArvore(ArvoreDeNome);
    InicializaArvore(ArvoreDeMatricula);
    
    RecebeInformacoes(funcionarios, ArvoreDeNome, ArvoreDeMatricula);

    return 0;
}