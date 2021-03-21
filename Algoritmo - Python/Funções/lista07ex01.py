TamanhoDoVetor = int(input("Qual o tamanho do vetor ? "))
Vetor = [0] * TamanhoDoVetor
print()
def InsereElementosNoVetor (XVetor,Tamanho):    
    for i in range(Tamanho):
        XVetor[i] = int(input("Elemento " + str(i+1) + " do vetor ? "))
def ImprimeParesEImpares(Vet,XTamanho):
    print("Seus elementos pares do vetor são:")   
    print() 
    for a in range(XTamanho):
        if Vet[a] % 2 == 0: 
            print(Vet[a],end="  ")
    print()
    print()
    print("Seus elementos ímpares do vetor são:")
    print()
    for b in range(XTamanho):
        if Vet[b] % 2 != 0:
            print(Vet[b],end="  ")
InsereElementosNoVetor(Vetor,TamanhoDoVetor)
print()
ImprimeParesEImpares(Vetor,TamanhoDoVetor)