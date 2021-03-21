LinhasDaMatriz = int(input("Qual a quantidade de linhas da matriz ? "))
ColunasDaMatriz = int(input("Qual a quantidade de colunas da matriz ? "))
print()
Matriz = []
def CriaMatriz(XMatriz,Linhas,Colunas):
    for i in range(Linhas):
        XMatriz.append([0] * Colunas)
def InsereElementosNaMatriz(YMatriz,Linhas1,Colunas1):
    for a in range(Linhas1):
        for b in range(Colunas1):
            YMatriz[a][b] = int(input("Qual o elemento da matriz [" + str(a+1) + "][" + str(b+1) + "] ? ")) 
def ImprimeMatriz (ZMatriz,Linhas2,Colunas2):
    for c in range(Linhas2):
        for d in range(Colunas2):
            print(ZMatriz[c][d], end= " ")
        print()
def QuantidadeDeMultiplos(MMatriz,Linhas3,Colunas3):
    ContDeMultiplos = 0
    NumeroVerificarMultiplos = int(input("Qual valor você quer verificar quantos múltiplos há na matriz ? "))
    print()
    while NumeroVerificarMultiplos == 0:
        print("Impossível verificar os multiplos de 0, digite novamente o número")
        NumeroVerificarMultiplos = int(input("Qual valor você quer verificar quantos múltiplos há na matriz ? "))
        print()
    for x in range(Linhas3):
        for z in range(Colunas3):
            if MMatriz[x][z] % NumeroVerificarMultiplos == 0:
                ContDeMultiplos = ContDeMultiplos + 1
    if ContDeMultiplos > 1:
        print("Na sua matriz há",ContDeMultiplos,"multiplos do numero",NumeroVerificarMultiplos)
    if ContDeMultiplos == 1:
        print("Na sua matriz há",ContDeMultiplos,"multiplo do numero",NumeroVerificarMultiplos)
    if ContDeMultiplos == 0:
        print("Na sua matriz não há multiplos do numero",NumeroVerificarMultiplos)
CriaMatriz(Matriz,LinhasDaMatriz,ColunasDaMatriz)
InsereElementosNaMatriz(Matriz,LinhasDaMatriz,ColunasDaMatriz)
print()
print("Sua matriz formada foi:")
print()
ImprimeMatriz(Matriz,LinhasDaMatriz,ColunasDaMatriz)
print()
QuantidadeDeMultiplos(Matriz,LinhasDaMatriz,ColunasDaMatriz)