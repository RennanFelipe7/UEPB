Vetor = [0] * 10
VetorInverso = [0] * 10 
Indice = 9
for r in range(0,10,1):
    ElementoDoVetor = str(input("Qual o elemento do seu vetor? "))
    Vetor[r] = ElementoDoVetor
    VetorInverso[Indice] = Vetor[r]
    Indice = Indice - 1
print("Vetor original",Vetor)
print("Vetor invertido",VetorInverso)