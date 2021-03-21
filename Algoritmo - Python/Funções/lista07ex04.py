TamanhoDoVetor = int(input("Tamanho do vetor ? "))
print()
Vetor = [0] * TamanhoDoVetor
def CriaVetor(VetorNumeros,Tamanho):
    for i in range(Tamanho):
        VetorNumeros[i] = int(input("Elemento do vetor posição " + str (i+1) + " ? "))
def NumerosEstaoEmOrdemCrescente(VetorOriginal,Tamanho):
    for a in range(Tamanho - 1): 
        if VetorOriginal[a] > VetorOriginal[a+1]:
            return  False
    return True
CriaVetor(Vetor,TamanhoDoVetor)
NumerosEstaoEmOrdemCrescente(Vetor,TamanhoDoVetor)
print()
print("Seu vetor formado foi")
print()
print(Vetor)
print()
if NumerosEstaoEmOrdemCrescente(Vetor,TamanhoDoVetor):
    print("Seu vetor está em ordem crescente")
else:
    print("Seu vetor não está em ordem crescente")