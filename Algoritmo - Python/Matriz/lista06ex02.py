Matriz =[]
LinhaDoNumero = 0
ColunaDoNumero = 0
ContDeEncontrado = 0
for i in range(5):
    Matriz.append([0] * 5)
for a in range(5):
    for b in range(5):
        Matriz[a][b] = int(input("Qual o elemento da matriz [" + str (a+1) +"][" + str (b+1) + "] ? "))
print()
NumeroNaMatriz = int(input("Qual número você quer verificar se ele esta presente na matriz ? "))
print()
print("Sua Matriz é")
print()
for c in range(5):
    for d in range(5):
        print(Matriz[c][d], end=" ")
    print()
print()
for x in range(5):
    for z in range(5):
        if Matriz[x][z] == NumeroNaMatriz:
            LinhaDoNumero = x + 1
            ColunaDoNumero = z + 1
            print("Seu numero",NumeroNaMatriz,"esta na matriz na localização linha",LinhaDoNumero,"e coluna",ColunaDoNumero)
            ContDeEncontrado = ContDeEncontrado + 1
if ContDeEncontrado == 0:            
    print("Seu numero",NumeroNaMatriz,"não se encontra na matriz")    