Matriz1 =[]
Matriz2 = []
MatrizNumerosMaiores = []
for i in range(4):
    Matriz1.append([0] * 4)
    Matriz2.append([0] * 4)
    MatrizNumerosMaiores.append([0] * 4)
for a in range(4):
    for b in range(4):
        Matriz1[a][b] = int(input("Qual o elemento da primeira matriz [" + str (a+1) +"][" + str (b+1) + "] ? "))
print()
for c in range(4):
    for d in range(4):
        Matriz2[c][d] = int(input("Qual o elemento da segunda matriz [" + str (c+1) +"][" + str (d+1) + "] ? "))
for n in range(4):
    for m in range(4):
        if Matriz1[n][m] > Matriz2[n][m]:
            MatrizNumerosMaiores[n][m] = Matriz1[n][m]
        if Matriz2[n][m] > Matriz1[n][m]:
            MatrizNumerosMaiores[n][m] = Matriz2[n][m]
        if Matriz1[n][m] == Matriz2[n][m]:
            MatrizNumerosMaiores[n][m] = Matriz1[n][m]
print()
print("Sua Matriz 1 é")
print()
for c in range(4):
    for d in range(4):
        print(Matriz1[c][d], end=" ")
    print()
print()
print("Sua Matriz 2 é")
print()
for x in range(4):
    for z in range(4):
        print(Matriz2[x][z], end=" ")
    print()
print()
print("Sua Matriz com os maiores valores de cada posição das matrizes é")
print()
for k in range(4):
    for l in range(4):
        print(MatrizNumerosMaiores[k][l], end=" ")
    print()