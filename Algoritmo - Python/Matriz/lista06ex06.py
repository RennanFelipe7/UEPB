OrdemDaMatriz = int(input("Ordem da matriz? "))
Matriz = []
print()
SomaElementosAbaixoDaDiagonalPrincipal = 0
for i in range(OrdemDaMatriz):
    Matriz.append([0]* OrdemDaMatriz)
for c in range(OrdemDaMatriz):
    for d in range(OrdemDaMatriz):
        Matriz[c][d] = int(input("Qual o elemento da matriz [" + str (c+1) +"][" + str (d+1) + "] ? "))
for x in range(1,OrdemDaMatriz,1):
    for z in range(x):
        SomaElementosAbaixoDaDiagonalPrincipal = SomaElementosAbaixoDaDiagonalPrincipal + Matriz[x][z]      
print()
print("Sua matriz formada é")
print()
for a in range(OrdemDaMatriz):
    for b in range(OrdemDaMatriz):
        print(Matriz[a][b], end=" ")
    print()
print()
print("A soma de seus elementos abaixo da diagonal principal é:",SomaElementosAbaixoDaDiagonalPrincipal)