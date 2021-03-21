Matriz =[]
ContNumerosMaiorQue10 = 0
NumeroMaiorQue10 = 0
for i in range(4):
    Matriz.append([0] * 4)
for a in range(4):
    for b in range(4):
        Matriz[a][b] = int(input("Qual o elemento da matriz [" + str (a+1) +"][" + str (b+1) + "] ? "))
for x in range(4):
    for z in range(4):
        if Matriz[x][z] > 10:
            ContNumerosMaiorQue10 = ContNumerosMaiorQue10 + 1            
print()
print("Sua Matriz é")
print()
for c in range(4):
    for d in range(4):
        print(Matriz[c][d], end=" ")
    print()
print()
if ContNumerosMaiorQue10 > 1:
    print("Sua matriz possui um total de",ContNumerosMaiorQue10,"numeros maiores que 10 e eles são:")
elif ContNumerosMaiorQue10 == 1:
    print("Sua matriz possui um total de",ContNumerosMaiorQue10,"numero maior que 10 e ele é:")
else:
    print("Sua matriz não possui numeros maiores que 10")
print()
for r in range(4):
    for s in range(4):
        if Matriz[r][s] > 10:
            NumeroMaiorQue10 = Matriz[r][s]
            print(NumeroMaiorQue10)