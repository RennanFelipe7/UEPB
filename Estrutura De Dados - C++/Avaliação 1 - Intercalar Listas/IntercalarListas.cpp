/*
Faça uma função que receba duas listas encadeadas. 
Essa função deve verificar se as listas possuem o mesmo tamanho e, em caso positivo, 
intercalar os seus elementos, fazendo com que a primeira lista possua todos os elementos ao fim 
o processo, enquanto a segunda lista termine vazia. 
Por intercalar entende-se fazer com que os elementos integrem uma única lista, 
alternando elementos da primeira com a segunda lista.

*/


#include <iostream>

using namespace std;

struct noLista{
  int dado;
  noLista* prox;
};

noLista* Inicializar(){ 
  return NULL;
}

void InserirInicio(noLista *&Lista, int info){
  noLista* novo = new noLista;
  novo -> dado = info;
  novo -> prox = Lista;
  Lista = novo;
}

void Imprimir(noLista *Lista, string QueLista){
  cout<< "\nAbaixo estao os intes da lista " <<QueLista << ": \n\n";
  while(Lista != NULL){
    cout<< Lista-> dado<< "\n";
    Lista = Lista->prox;
  }
}

int Tamanho(noLista *Lista){
  int cont = 0;
  while(Lista != NULL){
    cont++;
    Lista = Lista -> prox;
  }
  return cont;
}

void InsereElementos (noLista *&Lista){
    int Encerra, Elemento;
    do{
        cout<< "\nDigite o elmento a ser inserido na lista : ";
        cin>> Elemento;
        InserirInicio(Lista, Elemento);
        cout<< "\nDeseja encerrar a insercao ? [0] - Sim\t[1] - Nao : ";
        cin>> Encerra;
    }while(Encerra != 0);
} 

bool IntercalaListas(noLista *L1, noLista *&L2){ 
  if(Tamanho(L1) != Tamanho(L2)){                
    return false;
  }else{
    int TamanhoDasListas = Tamanho(L1);
    noLista *AuxiliarApontaL1 = L1;
    noLista *GuardaPosicaoL1 = L1;
    noLista *AuxiliarApontaL2 = L2;
    noLista *GuardaPosicaoL2 = L2;
    for(int i = 0; i < TamanhoDasListas; i++ ){
      GuardaPosicaoL1 = GuardaPosicaoL1 ->prox;
      AuxiliarApontaL1 ->prox = GuardaPosicaoL2;
      GuardaPosicaoL2 = GuardaPosicaoL2 -> prox;
      AuxiliarApontaL2->prox = GuardaPosicaoL1;
      AuxiliarApontaL1 = GuardaPosicaoL1;
      AuxiliarApontaL2 = GuardaPosicaoL2;
    }
    L2 = NULL;
    return true;
  }
}

int main(int argc, char const *argv[]){

    noLista *Lista1 = Inicializar();
    noLista *Lista2 = Inicializar();
    cout<< "\n\nDigite os elementos da LISTA 1\n";
    InsereElementos(Lista1);
    cout<< "\n\nDigite os elementos da LISTA 2\n";
    InsereElementos(Lista2);  
    Imprimir(Lista1, "LISTA 1");
    Imprimir(Lista2, "LISTA 2"); 
    if(IntercalaListas(Lista1,Lista2)){
      cout<< "\nLISTAS INTERCALADAS\n";
    }else{
      cout<< "\nImpossivel intercalar listas de tamanho diferentes\n";
    }
    Imprimir(Lista1, "LISTA 1");
    Imprimir(Lista2, "LISTA 2"); 
    return 0; 
}
