#include <stdio.h>

int PesquisaBinaria (int Vet[], int Chave, int Tam)
{
     int Inf = 0;     
     int Sup = Tam-1; 
     int Meio;
     
     while (Inf <= Sup){
        Meio = (Inf + Sup)/2;     
          
        if (Chave == Vet[Meio]){
		  
            return Meio;                     
               
		}else
        if (Chave > Vet[Meio]){
		  
            Sup = Meio-1;
        }
        else{
		  
           Inf = Meio+1;
        }
        
    }
    return -1;   
}
int Ordena_Decrescente(int Vet[], int Tamanho){
    int i, j, Guarda_Anterior;
    for(i = 0; i < Tamanho; i++){
        for(j = 0; j < (Tamanho - 1); j++){
            if(Vet[j] < Vet[j+1]){
                Guarda_Anterior = Vet[j];
                Vet[j] = Vet[j+1];
                Vet[j+1] = Guarda_Anterior;  
            }    
        }
    }
}
int main( ){
int Numeros[10];
int i, Busca;
for(i = 0; i < 10; i++){
    printf("Digite o valor do vetor na posição %d : ", (i+1));
    scanf("%d", &Numeros[i]);
}
printf("\nDigite o valor que você quer buscar no vetor ? ");
scanf("%d", &Busca);
Ordena_Decrescente(Numeros, 10);
int Resultado;
Resultado = PesquisaBinaria(Numeros, Busca, 10);

if (Resultado != -1){
	printf("\nSeu valor %d foi achado na posicao %d", Busca, Resultado);
}else{
    printf("\nSeu valor %d não foi achado no vetor");
}

return 0;
}