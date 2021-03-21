#include <stdio.h>

int main()
{
    int Matriz[10][3];                     
    int Guarda_Ultimo_N_Digitado;
    int Cont_De_Numeros_Impar = 0;
    int Cont_De_Numeros_Meio = 0;
    int Cont_De_Numeros_Par = 0;
    int Cont_Numero_Matriz = 1; 
    int i, j, Numero;
    int Controlador_De_Indice_Da_Coluna_Da_Esquerda = 0; 
    int Controlador_De_Indice_Da_Coluna_Da_Direita = 0; 
    int Controlador_De_Indice_Da_Coluna_Da_Meio = 0;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            Matriz[i][j] = 0;
        }
    }
    printf("Digite o número %d da matriz : ", Cont_Numero_Matriz);
    scanf("%d", &Numero);
    while(Numero != -1){
        Cont_Numero_Matriz += 1;
        if(Numero % 2 != 0){
            if (Cont_De_Numeros_Impar < 10){
                Matriz[Controlador_De_Indice_Da_Coluna_Da_Esquerda][0] = Numero;
                if (Controlador_De_Indice_Da_Coluna_Da_Esquerda <= 9){
                    Controlador_De_Indice_Da_Coluna_Da_Esquerda += 1;
                }
                Cont_De_Numeros_Impar += 1;
            }else{
                if (Cont_De_Numeros_Meio <  10){   
                    Guarda_Ultimo_N_Digitado = Matriz[0][0];         
                    Matriz[Controlador_De_Indice_Da_Coluna_Da_Meio][1] = Matriz[0][0];
                    if (Controlador_De_Indice_Da_Coluna_Da_Meio <= 8){
                        Controlador_De_Indice_Da_Coluna_Da_Meio += 1;
                    }
                    for(i = 0; i < 9; i++){
                        Matriz[i][0] = Matriz[i+1][0];             
                    }
                    Matriz[9][0] = Numero;
                    Cont_De_Numeros_Meio += 1;
                }else{
                    Guarda_Ultimo_N_Digitado = Matriz[0][0]; 
                    for(i = 0; i < 9; i++){
                        Matriz[i][1] = Matriz[i+1][1];            
                    }
                    Matriz[9][1] = Guarda_Ultimo_N_Digitado;
                    for(i = 0; i < 9; i++){
                        Matriz[i][0] = Matriz[i+1][0];            
                    }
                    Matriz[9][0] = Numero;
                }
                
            }
        }else{
            if (Cont_De_Numeros_Par < 10){
                Matriz[Controlador_De_Indice_Da_Coluna_Da_Direita][2] = Numero;
                if(Controlador_De_Indice_Da_Coluna_Da_Direita <= 9){
                    Controlador_De_Indice_Da_Coluna_Da_Direita += 1;
                }
                Cont_De_Numeros_Par += 1;
            }else{                       
                if (Cont_De_Numeros_Meio < 10){                                      
                    Guarda_Ultimo_N_Digitado = Matriz[0][2];
                    Matriz[Controlador_De_Indice_Da_Coluna_Da_Meio][1] = Matriz[0][2];
                    if (Controlador_De_Indice_Da_Coluna_Da_Meio <= 8){
                        Controlador_De_Indice_Da_Coluna_Da_Meio += 1;
                    }
                    for(i = 0; i < 9; i++){
                        Matriz[i][2] = Matriz[i+1][2];             
                    }
                    Matriz[9][2] = Numero;
                    Cont_De_Numeros_Meio += 1;
                }else{
                    Guarda_Ultimo_N_Digitado = Matriz[0][2];
                    for(i = 0; i < 9; i++){
                        Matriz[i][1] = Matriz[i+1][1];            
                    }
                    Matriz[9][1] = Guarda_Ultimo_N_Digitado;
                    for(i = 0; i < 9; i++){
                        Matriz[i][2] = Matriz[i+1][2];            
                    }
                    Matriz[9][2] = Numero;
                }
            }   
            //}
        }
                
        printf("Digite o número %d da matriz : ", Cont_Numero_Matriz);
        scanf("%d", &Numero);
            
        
    }
    printf("\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}