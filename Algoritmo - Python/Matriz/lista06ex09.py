MatrizRespostas = []
Gabarito = [""] * 10
VetorResultado = [0] * 5 
ContAcertos = 0
Aluno = 1
for i in range(5):
    MatrizRespostas.append([0]*10)
print("Digite o gabarito da prova")
print()
for c in range(10):
    Gabarito[c] = str(input("Resposta do gabarito? "))
    while Gabarito[c] != "a" and Gabarito[c] != "b" and Gabarito[c] != "c" and Gabarito[c] != "d":
        print("Erro de digitação, digite novamente a resposta do gabarito a, b, c ou d")
        Gabarito[c] = str(input("Resposta do gabarito? "))
print()           
for a in range(5):
    for b in range(10):
        if b == 0:
            print("Resposta do aluno",Aluno)
            Aluno = Aluno + 1
            print()
        MatrizRespostas[a][b] = str(input("Qual a reposta do aluno ? "))
        while MatrizRespostas[a][b] != "a" and MatrizRespostas[a][b] != "b" and MatrizRespostas[a][b] != "c" and MatrizRespostas[a][b] != "d":
            print("Resposta invalida, por favor digite novamente a, b, c ou d")
            MatrizRespostas[a][b] = str(input("Qual a reposta do aluno ? "))
    print()
print()
for x in range(5):
    for z in range(10):
        if MatrizRespostas[x][z] == Gabarito[z]:
            ContAcertos = ContAcertos + 1
    VetorResultado[x] = ContAcertos
    ContAcertos = 0
print("Abaixo se encontra o vetor resultado contendo respectivamente o total de acertos de cada aluno")
print()
print(VetorResultado) 