'''
Elabore um programa que leia uma matriz de dimensões informadas pelo usuário. 
Localize o maior elemento da matriz e informe sua posição.
'''

def Cria_Matriz(Matriz,Linhas,Colunas):
    for i in range(Linhas):
        Matriz.append([0] * Colunas)

def Insere_Elementos_Na_Matriz(Matriz,Linhas,Colunas):
    for i in range(Linhas):
        for j in range(Colunas):
            Matriz[i][j] = int(input("Qual o elemento da matriz [" + str(i+1) + "][" + str(j+1) + "] ? ")) 

def Imprime_Matriz (Matriz,Linhas,Colunas):
    for i in range(Linhas):
        for j in range(Colunas):
            print(Matriz[i][j], end= "   ")
        print()
        print()

def Encontra_Maior(Matriz,Linhas,Colunas):
    Maior = Matriz[0][0]
    Linha_Maior = 0
    Coluna_Maior = 0
    for i in range(Linhas):
        for j in range(Colunas):
            if Matriz[i][j] > Maior :
                Maior = Matriz[i][j]
                Linha_Maior = i
                Coluna_Maior = j
    return Maior, Linha_Maior, Coluna_Maior
Matriz = []
print()
Linhas = int(input("Digite a quantidade de linhas da matriz : "))
print()
Colunas = int(input("Digite a quantidade de colunas da matriz : "))
print()
Cria_Matriz(Matriz, Linhas, Colunas)
Insere_Elementos_Na_Matriz(Matriz, Linhas, Colunas)
Maior, Linha_Maior, Coluna_Maior = Encontra_Maior(Matriz, Linhas, Colunas)
print()
Imprime_Matriz(Matriz, Linhas, Colunas)
print()
print("O maior elemento da matriz é o numero", Maior , "e ele se encontra na Linha", (Linha_Maior + 1), "Coluna" , (Coluna_Maior + 1))
