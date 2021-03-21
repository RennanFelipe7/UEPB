OrdemDaMatriz = int(input("Ordem da matriz? "))
Matriz = []
print()
SomaElementosAcimaDaDiagonalPrincipal = 0
for i in range(OrdemDaMatriz):
    Matriz.append([0]* OrdemDaMatriz)
for c in range(OrdemDaMatriz):
    for d in range(OrdemDaMatriz):
        Matriz[c][d] = int(input("Qual o elemento da matriz [" + str (c+1) +"][" + str (d+1) + "] ? "))
for x in range(OrdemDaMatriz):
    for z in range(x + 1,OrdemDaMatriz,1):
        SomaElementosAcimaDaDiagonalPrincipal = SomaElementosAcimaDaDiagonalPrincipal + Matriz[x][z]
print()
print("Sua matriz formada é")
print()
for a in range(OrdemDaMatriz):
    for b in range(OrdemDaMatriz):
        print(Matriz[a][b], end=" ")
    print()
print()
print("A soma de seus elementos acima da diagonal principal é:",SomaElementosAcimaDaDiagonalPrincipal)