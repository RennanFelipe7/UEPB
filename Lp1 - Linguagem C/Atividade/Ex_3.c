#include <stdio.h>

int main(){
    int Numero;
    printf("Ate que numero de 1 ate numero voce quer verificar a existencia dos primos ? ");
    scanf("%d", &Numero);
    printf("Sao primo os numeros de 1 ate %d os numeros: \n", Numero);
    for (int i = 2; i <= Numero; i++){
        int Cont_De_Div = 0;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                Cont_De_Div += 1;
            }
        }
        if (Cont_De_Div == 0){
            printf("%d\n", i);
        }
        Cont_De_Div = 0;
        
    }
    return 0;
}
