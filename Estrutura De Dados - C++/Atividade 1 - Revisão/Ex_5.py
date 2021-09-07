'''
5. Elabore um programa que tenha como parâmetros de entrada duas matrizes 
de números reais e forneça como resposta o produto das mesmas. 
Caso não seja possível efetuar a multiplicação, 
o programa deve retornar um código de erro. 
'''

def Cria_Matriz(Matriz,Linhas,Colunas):
    for i in range(Linhas):
        Matriz.append([0] * Colunas)

def Insere_Elementos_Na_Matriz(Matriz,Linhas,Colunas):
    for i in range(Linhas):
        for j in range(Colunas):
            Matriz[i][j] = float(input("Qual o elemento da matriz [" + str(i+1) + "][" + str(j+1) + "] ? ")) 

def Imprime_Matriz (Matriz,Linhas,Colunas):
    for i in range(Linhas):
        for j in range(Colunas):
            print(Matriz[i][j], end= "   ")
        print()

def Multiplica_Matriz(Matriz_A, Matriz_B, Linhas_Matriz_A, Linhas_Matriz_B, Colunas_Matriz_B, M_M):
    cont = 0
    LMA_Multiplicar = 0
    IL_M_M = 0
    IC_M_M = 0
    Coluna_MB_Multiplicar = 0
    while cont < Linhas_Matriz_A * Colunas_Matriz_B :
        Soma = 0
        Multiplicacao = 0
        Vetor_Linha_Multiplicar = []
        Vetor_Coluna_Multiplicar = [0] * Linhas_Matriz_B
        Vetor_Linha_Multiplicar = Matriz_A[LMA_Multiplicar]
        for i in range(Linhas_Matriz_B):
            Vetor_Coluna_Multiplicar[i] = Matriz_B[i][Coluna_MB_Multiplicar] 
        for i in range(len(Vetor_Linha_Multiplicar)):
            Multiplicacao = Vetor_Linha_Multiplicar[i] * Vetor_Coluna_Multiplicar[i]
            Soma = Soma + Multiplicacao
        M_M[IL_M_M][IC_M_M] = Soma
        IC_M_M += 1
        Coluna_MB_Multiplicar += 1     
        if (IC_M_M >= Colunas_Matriz_B):
            IL_M_M += 1
            IC_M_M = 0
            Coluna_MB_Multiplicar = 0
            LMA_Multiplicar += 1
        cont += 1

Matriz_A = []
Matriz_B = []
Matriz_Multiplicacao = []
Linhas_Matriz_A = int(input("Digite o numero de linhas da matriz A : "))
Colunas_Matriz_A = int(input("Digite o numero de colunas da matriz A : "))
print()
Linhas_Matriz_B = int(input("Digite o numero de linhas da matriz B : ")) 
Colunas_Matriz_B = int(input("Digite o numero de colunas da matriz B : "))
Cria_Matriz(Matriz_A, Linhas_Matriz_A, Colunas_Matriz_A)
Cria_Matriz(Matriz_B, Linhas_Matriz_B, Colunas_Matriz_B)
print()
print("Digite os numeros da matriz A : ")
print()
Insere_Elementos_Na_Matriz(Matriz_A, Linhas_Matriz_A, Colunas_Matriz_A)
print()
print("Digite os numeros da matriz B : ")
print()
Insere_Elementos_Na_Matriz(Matriz_B, Linhas_Matriz_B, Colunas_Matriz_B)
if Colunas_Matriz_A == Linhas_Matriz_B:
    Cria_Matriz(Matriz_Multiplicacao, Linhas_Matriz_A, Colunas_Matriz_B)
    Multiplica_Matriz(Matriz_A, Matriz_B, Linhas_Matriz_A, Linhas_Matriz_B, Colunas_Matriz_B, Matriz_Multiplicacao)
    print()
    print("---------------------------------------------------")
    print()
    print("Matriz A")
    print()
    Imprime_Matriz(Matriz_A, Linhas_Matriz_A, Colunas_Matriz_A)
    print()
    print("---------------------------------------------------")
    print()
    print("Matriz B")
    print()
    Imprime_Matriz(Matriz_B, Linhas_Matriz_B, Colunas_Matriz_B)
    print()
    print("---------------------------------------------------")
    print()
    print("Matriz MULTIPLICAÇÃO")
    print()
    Imprime_Matriz(Matriz_Multiplicacao, Linhas_Matriz_A, Colunas_Matriz_B)
else:
    print()
    print("As matrizes não podem ser multiplicadas, porque o numero de colunas da matriz A não é igual ao numero de linhas da matriz B")