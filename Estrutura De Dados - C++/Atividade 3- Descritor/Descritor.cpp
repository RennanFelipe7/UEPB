#include <iostream>

using namespace std;

struct noLista{
  string nome;
  noLista *ant, *prox;
};

struct descritor{
  int tam;
  noLista *ini, *fim;
};

descritor* inicializar(){
  descritor* aux = new descritor;
  aux->ini = NULL;
  aux->fim = NULL;
  aux->tam = 0;
  return aux;
}

void inserir_inicio(descritor *l, string info){
  noLista*novo = new noLista;
  novo->nome = info;
  novo->ant = NULL;
  novo->prox = NULL;
  if(l->ini == NULL){
    l->ini = novo;
    l->fim = novo;
    l->tam++;
  }
  else{
    novo->prox = l->ini;
    l->ini->ant = novo;
    l->ini = novo;
    l->tam++;
  }
}

void Imprimir(descritor *Lista){
    descritor *aux = Lista;
    while(aux ->ini != NULL){
        cout<< Lista->ini->nome;
        cout<< "\n";
        aux->ini = aux->ini->prox;
    }
}

void inserir_fim(descritor *Lista, string info){
  if(Lista->ini == NULL){
    inserir_inicio(Lista, info);
    Lista->tam++;
  }else{
    noLista *novo = new noLista;
    novo->nome = info;
    novo ->prox = NULL;
    Lista->fim->prox = novo;
    novo->ant = Lista ->fim;
    Lista->tam++;
  }
}

int main(int argc, char const *argv[]){
  descritor *l1;
  l1 = inicializar();
  inserir_inicio(l1, "Oi");
  inserir_inicio(l1, "Tim");
  inserir_inicio(l1, "Vivo");
  inserir_inicio(l1, "Claro");
  inserir_fim(l1, "Fim");
  Imprimir(l1);
}