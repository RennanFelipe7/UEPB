Matriz = []
print()
SomaElementosDasColunasImpares = 0
SomaElementosDaSegundaEQuartaColuna = 0
for i in range(3):
    Matriz.append([0]* 6)
for c in range(3):
    for d in range(6):
        Matriz[c][d] = float(input("Qual o elemento da matriz [" + str (c+1) +"][" + str (d+1) + "] ? "))
for e in range(3):
    for f in range(6):
        if f % 2 == 0:
            SomaElementosDasColunasImpares = SomaElementosDasColunasImpares + Matriz[e][f]
for g in range(3):
    for h in range(6):
        if h == 1 or h == 3:
            SomaElementosDaSegundaEQuartaColuna = SomaElementosDaSegundaEQuartaColuna + Matriz[g][h]
MediaAritmeticaDaSegundaEQuartaColuna = SomaElementosDaSegundaEQuartaColuna / 6
print()
print("Sua matriz original é")
print()
for a in range(3):
    for b in range(6):
        print(Matriz[a][b], end=" ")
    print()
print()
for k in range(3):
    Matriz[k][5] = Matriz[k][0] + Matriz[k][1]
print("A soma de todos os elementos das colunas ímpares é:",SomaElementosDasColunasImpares)
print()
print("A média aritmética dos elementos da segunda e quarta coluna é:",MediaAritmeticaDaSegundaEQuartaColuna)
print()
print("Sua matriz modificada com a sexta coluna sendo a soma dos elementos da coluna 1 e coluna 2 é:")
for p in range(3):
    for q in range(6):
        print(Matriz[p][q], end=" ")
    print()