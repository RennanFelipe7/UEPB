Vetor = [0] * 10
IndiceDoMaior = 0
for r in range (0,10,1):
    ElementoDaLista = int(input("Qual o elemento da lista? "))
    Vetor[r] = ElementoDaLista
Maior = Vetor[0]
for a in range(1,10,1):
    if Vetor[a] > Maior:
        Maior = Vetor[a]
        IndiceDoMaior = a            
print("Seu vetor original é:",Vetor)
print("Seu maior numero do vetor é",Maior,"e ele se encontra na posição",IndiceDoMaior)