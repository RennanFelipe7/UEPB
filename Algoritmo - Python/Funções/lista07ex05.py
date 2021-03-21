OrdemDasMatrizes = int(input("Qual a ordem das matrizes ? "))
print()
Matriz1 = []
Matriz2 = []
Matriz1Troca = []
Matriz2Troca = []
def CriaMatriz(XMatriz,Ordem):
    for i in range(Ordem):
        XMatriz.append([0] * Ordem)
def InsereElementosNaMatriz(YMatriz,Ordem2):
    for a in range(Ordem2):
        for b in range(Ordem2):
            YMatriz[a][b] = int(input("Qual o elemento da matriz [" + str(a+1) + "][" + str(b+1) + "] ? ")) 
def ImprimeMatriz (ZMatriz,Ordem3):
    for c in range(Ordem3):
        for d in range(Ordem3):
            print(ZMatriz[c][d], end= " ")
        print()
def TrocaDeLinhaEColunaDe2Matrizes(Matriz1X,Matriz2X,Matriz1TrocaX,Matriz2TrocaX,Ordem4):
    Linha = int(input("Qual a linha que você quer trocar na primeira matriz ? "))
    Coluna = int(input("Qual a coluna que você quer trocar na segunda matriz ? "))
    VetorGuardaValoresMatriz1 = [0] * Ordem4
    VetorGuardaValoresMatriz2 = [0] * Ordem4
    LinhaTroca = Linha - 1 
    ColunaTroca = Coluna - 1 
    for r in range(Ordem4):
        VetorGuardaValoresMatriz1[r] = Matriz1X[LinhaTroca][r]
    for s in range (Ordem4):
        VetorGuardaValoresMatriz2[s] = Matriz2X[s][ColunaTroca]    
    for k in range(Ordem4):
        for l in range(Ordem4):
            Matriz1TrocaX[k][l] = Matriz1X[k][l]
            Matriz2TrocaX[k][l] = Matriz2X[k][l]
    for x in range(Ordem4):
        Matriz1TrocaX[LinhaTroca][x] = VetorGuardaValoresMatriz2[x]
        Matriz2TrocaX[x][ColunaTroca] = VetorGuardaValoresMatriz1[x]
CriaMatriz(Matriz1,OrdemDasMatrizes)
print("Insira os elemetos na matriz 1")
print()
InsereElementosNaMatriz(Matriz1,OrdemDasMatrizes)
print()
CriaMatriz(Matriz2,OrdemDasMatrizes)
print("Insira os elemetos na matriz 2")
print()
InsereElementosNaMatriz(Matriz2,OrdemDasMatrizes)
print()
CriaMatriz(Matriz1Troca,OrdemDasMatrizes)
CriaMatriz(Matriz2Troca,OrdemDasMatrizes)
TrocaDeLinhaEColunaDe2Matrizes(Matriz1,Matriz2,Matriz1Troca,Matriz2Troca,OrdemDasMatrizes)
print()
print("Sua matriz 1 criada é:")
print()
ImprimeMatriz(Matriz1,OrdemDasMatrizes)
print()
print("Sua matriz 2 criada é:")
print()
ImprimeMatriz(Matriz2,OrdemDasMatrizes)
print()
print("Sua matriz 1 modificada após a troca da linha escolhida na matriz 1 pela coluna escolhida da matriz 2 é:")
print()
ImprimeMatriz(Matriz1Troca,OrdemDasMatrizes)
print()
print("Sua matriz 2 modificada apos a troca da coluna escolhida na matriz 2 pela linha escolhida da matriz 1 é:")
print()
ImprimeMatriz(Matriz2Troca,OrdemDasMatrizes)