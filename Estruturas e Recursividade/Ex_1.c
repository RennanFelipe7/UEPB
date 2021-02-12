int Fibonacci(int Numero){
    int Resultado;
    if (Numero == 1){
        return 0;
    }else if(Numero == 2 || Numero == 3){
        return 1;
    }else{
        Resultado = (Fibonacci(Numero - 1) + Fibonacci(Numero - 2));
        return Resultado;
    }
}
#include <stdio.h>

int main()
{
    int Numero;
    printf("Ate que numero da sequencia de Fibonacci voce quer verificar ? ");
    scanf("%d", &Numero);
    printf("O numero da sequencia de Fibonacci correnpondente ao numero %d e o numero %d",Numero, Fibonacci(Numero));
    return 0;
}
