/*
Faça um programa que leia dados informados pelo usuário e os armazene, um por um, 
no final de uma lista duplamente encadeada com descritor. 
O usuário para de informar valores quando digitar zero (que não deve ser inserido na lista). 
Considere que o tipo de dados da lista contém apenas um inteiro como informação.
Faça um procedimento para dividir a lista ao meio, gerando duas novas listas. 
Caso haja um número ímpar de elementos, a primeira metade deve ficar com um elemento a mais.
Imprima as listas resultantes.
*/


#include <iostream>

using namespace std;

struct noLista{
  int Numero;
  noLista *AntList, *ProxList;
};

struct descritor{
  int Tam;
  noLista *IniDesc, *FimDesc;       
};

descritor* inicializar(){
  descritor* aux = new descritor;
  aux->IniDesc = NULL;
  aux->FimDesc = NULL;
  aux->Tam = 0;
  return aux;
}

void InserirFim(descritor *l, int Valor){
  noLista *novo = new noLista;
  novo->Numero = Valor;
  novo->ProxList = NULL;
  novo->AntList = NULL;
  if(l->IniDesc == NULL){
    l->IniDesc = novo;
    l->FimDesc = novo;
    l->Tam++;
  }
  else{
    l->FimDesc->ProxList = novo;
    novo->AntList = l->FimDesc;
    l->FimDesc = novo;
    l->Tam++;
  }
}
void PreencheLista(descritor *Descritor){
    int Valor;
    do{
        cout<< "\nDigite o dado a ser inserido no final da lista : ";
        cin>> Valor;
        if (Valor != 0){
            InserirFim(Descritor, Valor);
        }
    } while (Valor != 0);
    
}

void ImprimeLista(descritor *l, string QueLista){ 
    cout<< "\nAbaixo estao os elementos da "<<QueLista << " : \n\n";
    noLista*p = l->IniDesc;
    while(p != NULL){
        cout<<p->Numero<<"\n";
        p = p->ProxList;
    }
}

void DivideLista( descritor *ListaInicial, descritor *&L1, descritor *&L2){
 if(ListaInicial -> Tam > 0){
    if(ListaInicial -> Tam == 1){
      L1 -> IniDesc = ListaInicial -> IniDesc;
      L1 -> FimDesc = ListaInicial -> FimDesc;
    }else{
      if((ListaInicial ->Tam % 2) == 0 ){ 
      noLista *NoDeParada = ListaInicial ->IniDesc;
      for(int i = 1; i < ((ListaInicial->Tam) / 2); i++){
        NoDeParada = NoDeParada->ProxList;
      }
      L1 -> IniDesc = ListaInicial->IniDesc;
      L1 -> FimDesc = NoDeParada;
      L1-> Tam = (ListaInicial->Tam) / 2;
      
      L2 -> IniDesc = NoDeParada ->ProxList;
      L2 -> FimDesc = ListaInicial ->FimDesc;
      L2 -> Tam = (ListaInicial->Tam) / 2;
      
      L2 -> IniDesc -> AntList = NULL;
      NoDeParada ->ProxList = NULL;
      }else{
        noLista *NoDeParada = ListaInicial ->IniDesc;
        int TamanhoParaAtaulizarCadaLista = ((ListaInicial->Tam) + 1) / 2; 
        for(int j = 1; j < TamanhoParaAtaulizarCadaLista; j++){
          NoDeParada = NoDeParada->ProxList;
        }
        L1 -> IniDesc = ListaInicial -> IniDesc;
        L1 -> FimDesc = NoDeParada;
        L1-> Tam = TamanhoParaAtaulizarCadaLista;
        
        L2 -> IniDesc = NoDeParada ->ProxList;
        L2 -> FimDesc = ListaInicial ->FimDesc;
        L2 -> Tam = TamanhoParaAtaulizarCadaLista - 1;

        L2 -> IniDesc -> AntList = NULL;
        NoDeParada -> ProxList = NULL;
      }
    }
  }
}

int main() { 
    descritor *ListaInicial, *L1, *L2;
    ListaInicial = inicializar();
    L1 = inicializar(); 
    L2 = inicializar();
    PreencheLista(ListaInicial);
    ImprimeLista(ListaInicial, "Lista inicial");
    DivideLista(ListaInicial, L1, L2);
    ImprimeLista(L1, "Lista 1, Lista Esquerda");
    ImprimeLista(L2, "Lista 2, Lista Direita");
}   