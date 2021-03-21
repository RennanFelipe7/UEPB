Linha = int(input("Até que linha você quer imprimir do triângulo de Pascal ? "))
Matriz = []
ContDeLinha = 1
ContColunaSuperiorEsquerdo = 0
ContColunaSuperiorDireito = 1
for a in range(Linha):
    Matriz.append([" "]* Linha)
for i in range(Linha):
    for j in range(0,i + 1):        
        Matriz[i][j] = 1
for x in range(2,Linha):
    for z in range(1,x):
        Matriz[x][z] = Matriz[ContDeLinha][ContColunaSuperiorEsquerdo] + Matriz[ContDeLinha][ContColunaSuperiorDireito]        
        ContColunaSuperiorEsquerdo = ContColunaSuperiorEsquerdo + 1
        ContColunaSuperiorDireito = ContColunaSuperiorDireito + 1
    ContDeLinha = ContDeLinha + 1
    ContColunaSuperiorEsquerdo = 0
    ContColunaSuperiorDireito = 1
print()
print("Seu triângulo de Pascal até a linha",Linha,"é:")
print()
for c in range(Linha):
    for d in range(Linha):
        print(Matriz[c][d], end=" ")
    print()