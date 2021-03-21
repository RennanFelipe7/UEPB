#include <stdio.h>

int main(){
    int Numero;
    int Anterior = 0;
    int Posterior = 1;
    printf("Digite ate que termo da seria de Fibonacci voce quer imprimir,\n\nLembrando que esse numero tem que ser menor que 46 e maior que 0: ");
    scanf("%d",&Numero);
    while(Numero <= 0 || Numero >= 46){
        printf("\nNumero invalido, digite um numero entre 0 e 45: ");
        scanf("%d",&Numero);        
    }
    if(Numero == 1){
        printf("%d\n", Anterior);
    }else if (Numero == 2){
        printf("%d \n%d \n", Anterior, Posterior);
    }else if(Numero >= 3){
        printf("%d \n%d \n", Anterior, Posterior);
    }
    for(int i = 2; i < Numero; i++){
        int Resultado = 0;
        Resultado = Anterior + Posterior;
        printf("%d \n", Resultado);
        Anterior = Posterior;
        Posterior = Resultado;
    }    

    return 0;
}
