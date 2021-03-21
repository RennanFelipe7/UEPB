Matriz = []
for x in range(10):
    Matriz.append([0]*10)
for i in range(10):
    for j in range(10):
        if i < j:
            Matriz[i][j] = (2 * i) + (7 * j) - 2
        if i == j:
            Matriz[i][j] = (3 * (i ** 2)) - 1
        if i > j:
            Matriz[i][j] = (4 * (i ** 3)) - (5 * (j ** 2)) + 1 
print()
for a in range(10):
    for b in range(10):
        print(Matriz[a][b], end=" ")
    print()