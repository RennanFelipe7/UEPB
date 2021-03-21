#include <stdio.h>

int PesquisaBinaria (int vet[], int chave, int tam){
    int inf = 0;     
    int sup = tam-1; 
    int meio;
     
    while (inf <= sup)
    {
        meio = (inf + sup)/2;
          
        if (chave == vet[meio]){
		  
            return meio;
               
			}else
        if (chave < vet[meio]){
		  
            sup = meio-1;
        }
        else{
		  
            inf = meio+1;
        }
    }
    return -1;   
}

void Exibe_Se_Existe_Ou_Nao_O_Valor (int Retorno_Da_Funcao, int Numero){
    if(Retorno_Da_Funcao != -1){
        printf("Seu valor %d foi achado na posição %d\n\n",Numero, Retorno_Da_Funcao);
    }else{
        printf("Seu valor %d não foi achado no vetor\n\n", Numero);
    }
}

int main(){
    
    int Vetor[18] = {10, 16, 27, 31, 33, 37, 41, 49, 53, 57, 68, 69, 72, 77, 84, 89, 95, 99};
    Exibe_Se_Existe_Ou_Nao_O_Valor((PesquisaBinaria(Vetor, 33, 18)), 33);
    Exibe_Se_Existe_Ou_Nao_O_Valor((PesquisaBinaria(Vetor, 50, 18)), 50);
    Exibe_Se_Existe_Ou_Nao_O_Valor((PesquisaBinaria(Vetor, 77, 18)), 77);
    Exibe_Se_Existe_Ou_Nao_O_Valor((PesquisaBinaria(Vetor, 90, 18)), 90);
    Exibe_Se_Existe_Ou_Nao_O_Valor((PesquisaBinaria(Vetor, 99, 18)), 99);
    
    return 0;
}
