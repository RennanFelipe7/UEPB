#include <iostream>

using namespace std;

int VenceuAEleicao(int Tamanho, bool Matriz[][Tamanho]){
  int IndiceDoCandidadoQueVenceu = 0;
  int ContadorDeAdjcenciaDoMaior = 0;
  for(int k = 0; k <Tamanho; k++){
    if(Matriz[0][k] == true){
      ContadorDeAdjcenciaDoMaior++;
    }
  }
  for(int i = 1; i < Tamanho; i++){
    int ContadorDeAdjcencia = 0;
    for(int j = 0; j < Tamanho; j++){
      if(Matriz[i][j] == true){
        ContadorDeAdjcencia++;
      }
    }
    if(ContadorDeAdjcencia > ContadorDeAdjcenciaDoMaior){
      IndiceDoCandidadoQueVenceu = i;
      ContadorDeAdjcenciaDoMaior = ContadorDeAdjcencia;
    }
  }
  return IndiceDoCandidadoQueVenceu;
}

int main() {
  return 0;
}