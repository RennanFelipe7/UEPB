#include <stdio.h>
#include <string.h>

struct Livro{
    char Autor[30];
    char Titulo[30];
    int ISBN;
    char Status[20];
    
};

int main()
{   
    int Opcao, Quantidade, i;
    printf("Digite 1 para cadastrar livros 2 Para buscar livros 3 para listar livros nao lidos : ");
    scanf("%d", &Opcao);
    while(Opcao != 1 && Opcao != 2 && Opcao != 3){
        printf("\nOpção invalida, Digite 1 para cadastrar livros 2 Para buscar livros 3 para listar livros nao lidos : ");
        scanf("%d", &Opcao);
    }
    if(Opcao == 1){
        printf("Digite a quantidade de livros a ser cadastrados : ");
        scanf("%d", &Quantidade);
        struct Livro Liv[Quantidade];
        for(i = 0; i < Quantidade; i++){
            setbuf(stdin, NULL);
            printf("Digite o Autor do livro %d : ",(i+1));
            gets(Liv[i].Autor);
            setbuf(stdin, NULL);
            printf("Digite o Titulo do livro %d : ",(i+1));
            gets(Liv[i].Titulo);
            setbuf(stdin, NULL);
            printf("Digite o ISBN do livro %d : ",(i+1));
            scanf("%d", &Liv[i].ISBN);
            setbuf(stdin, NULL);
            printf("Digite o Status do livro %d com 'lido' para lido e 'nl' para nao lido : ",(i+1));
            gets(Liv[i].Status);
            printf("\n");
        }
    }else if(Opcao == 2){
        
        printf("Digite a quantidade de livros a ser cadastrados : ");
        scanf("%d", &Quantidade);
        struct Livro Liv[Quantidade];
        for(i = 0; i < Quantidade; i++){
            setbuf(stdin, NULL);
            printf("Digite o Autor do livro %d : ",(i+1));
            gets(Liv[i].Autor);
            setbuf(stdin, NULL);
            printf("Digite o Titulo do livro %d : ",(i+1));
            gets(Liv[i].Titulo);
            setbuf(stdin, NULL);
            printf("Digite o ISBN do livro %d : ",(i+1));
            scanf("%d", &Liv[i].ISBN);
            setbuf(stdin, NULL);
            printf("Digite o Status do livro %d com 'lido' para lido e 'nl' para nao lido : ",(i+1));
            gets(Liv[i].Status);
            printf("\n");
        }

        
        int T_Ou_A;
        printf("\nVoce vai querer buscar o livro a partir do titulo ou autor ? Digite 1 para titulo e 2 para autor : ");
        scanf("%d",&T_Ou_A);
        while(T_Ou_A != 1 && T_Ou_A != 2){
            printf("\nOpcao invalida, Digite 1 para titulo e 2 para autor : ");
            scanf("%d",&T_Ou_A);
        }
        if(T_Ou_A == 1){
            struct Livro Liv[Quantidade];
            int R;
            char Opcao_De_T_Ou_A[30];
            setbuf(stdin, NULL);
            printf("Digite o titulo que voce quer buscar ? ");
            gets(Opcao_De_T_Ou_A);
            setbuf(stdin, NULL);
            for(i = 0; i < Quantidade; i++){
                R = strcmp(Opcao_De_T_Ou_A, Liv[i].Titulo);
            
            }
            if(R == 0){
                printf("Seu Livro com titulo %s FOI achado", Opcao_De_T_Ou_A);
            }else{
                printf("Seu Livro com titulo %s NAO FOI achado", Opcao_De_T_Ou_A);
            }
        }else if(T_Ou_A == 2){
            struct Livro Liv[Quantidade];
            int R;
            char Opcao_De_T_Ou_A[30];
            setbuf(stdin, NULL);
            printf("Digite o autor que voce quer buscar ? ");
            gets(Opcao_De_T_Ou_A);
            setbuf(stdin, NULL);
            for(i = 0; i < Quantidade; i++){
                R = strcmp(Opcao_De_T_Ou_A, Liv[i].Autor); 
            }
            if(R == 0){
                printf("Seu Livro com autor %s FOI achado", Opcao_De_T_Ou_A);
            }else{
                printf("Seu Livro com autor %s NAO FOI achado", Opcao_De_T_Ou_A);
            }
            
        }
    }else if(Opcao == 3){
        
        printf("Digite a quantidade de livros a ser cadastrados : ");
        scanf("%d", &Quantidade);
        struct Livro Liv[Quantidade];
        for(i = 0; i < Quantidade; i++){
            setbuf(stdin, NULL);
            printf("Digite o Autor do livro %d : ",(i+1));
            gets(Liv[i].Autor);
            setbuf(stdin, NULL);
            printf("Digite o Titulo do livro %d : ",(i+1));
            gets(Liv[i].Titulo);
            setbuf(stdin, NULL);
            printf("Digite o ISBN do livro %d : ",(i+1));
            scanf("%d", &Liv[i].ISBN);
            setbuf(stdin, NULL);
            printf("Digite o Status do livro %d com 'lido' para lido e 'nl' para nao lido : ",(i+1));
            gets(Liv[i].Status);
            printf("\n");
        }
        

        int RL;
        char LouN[] = "nl";
        printf("Aqui estao seus livros que nao foram lidos\n");
        for(i = 0; i < Quantidade; i++){
            RL = strcmp(Liv[i].Status,LouN);
            if(RL == 0){
                printf("%s", Liv[i].Titulo);
            }
        }
    }
    
    return 0;
}
