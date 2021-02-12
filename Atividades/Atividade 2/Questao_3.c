#include <stdio.h>
#include <string.h>

struct Agenda_De_Encontros{
    char Nome[30];
    char Endereco_Do_Encontro[40];
    char Data[30];
    char Hora[30];
    char Motivo_Do_Encontro[40];
};



int main()
{
    int Opcao;
    printf("Digite 1 para cadastra encontros e 2 para buscar encontros : ");
    scanf("%d", &Opcao);
    while(Opcao != 1 && Opcao != 2){
        printf("Opcao invalida, Digite 1 para cadastra encontros e 2 para buscar encontros : ");
        scanf("%d", &Opcao);
    }
    if(Opcao == 1){
        int Quantidade_De_Encontros, i;
        printf("\nDigite a quantidade de encontros da sua agneda : ");
        scanf("%d", &Quantidade_De_Encontros);
        printf("\n");
        struct Agenda_De_Encontros Agenda[Quantidade_De_Encontros];
        for(i = 0; i < Quantidade_De_Encontros; i++){
            setbuf(stdin, NULL);
            printf("Digite o nome da pessoa de numero %d : ", (i+1));
            gets(Agenda[i].Nome);
            printf("\n");
            printf("Digite o endereco do encontro com a pessoa %s : ", Agenda[i].Nome);
            gets(Agenda[i].Endereco_Do_Encontro);
            printf("\n");
            printf("Digite a data do encontro com a pessoa %s no formato DIA/MES/ANO : ", Agenda[i].Nome);
            gets(Agenda[i].Data);
            printf("\n");
            printf("Digite a hora do encontro com a pessoa %s no formato HORA:00 : ", Agenda[i].Nome);
            gets(Agenda[i].Hora);
            printf("\n");
            printf("Digite o motivo do encontro com a pessoa %s : ", Agenda[i].Nome);
            gets(Agenda[i].Motivo_Do_Encontro);
            printf("\n");
        }
        
    }else if(Opcao == 2){
        int Quantidade_De_Encontros, i;
        printf("\nDigite a quantidade de encontros da sua agneda : ");
        scanf("%d", &Quantidade_De_Encontros);
        printf("\n");
        struct Agenda_De_Encontros Agenda[Quantidade_De_Encontros];
        for(i = 0; i < Quantidade_De_Encontros; i++){
            setbuf(stdin, NULL);
            printf("Digite o nome da pessoa de numero %d : ", (i+1));
            gets(Agenda[i].Nome);
            printf("\n");
            printf("Digite o endereco do encontro com a pessoa %s : ", Agenda[i].Nome);
            gets(Agenda[i].Endereco_Do_Encontro);
            printf("\n");
            printf("Digite a data do encontro com a pessoa %s no formato DIA/MES/ANO : ", Agenda[i].Nome);
            gets(Agenda[i].Data);
            printf("\n");
            printf("Digite a hora do encontro com a pessoa %s no formato HORA:00 : ", Agenda[i].Nome);
            gets(Agenda[i].Hora);
            printf("\n");
            printf("Digite o motivo do encontro com a pessoa %s : ", Agenda[i].Nome);
            gets(Agenda[i].Motivo_Do_Encontro);
            printf("\n");
        }
        char Busca[30];
        int R;
        printf("Agora digite o nome da pessoa do encontro a se buscar : ");
        gets(Busca);
        for(i = 0; i < Quantidade_De_Encontros; i++){
            R = strcmp(Busca, Agenda[i].Nome);
            if(R == 0){
                i = Quantidade_De_Encontros;
            }
        }
        if(R == 0){
            printf("\nSeu encontro com a pessoa %s FOI achada", Busca);
        }else{
            printf("\nSeu encontro com a pessoa %s NAO FOI achada", Busca);
        }
    }
    
    return 0;
}