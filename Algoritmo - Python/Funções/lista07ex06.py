TamanhoDoVetor1 = int(input("Qual o tamanho do vetor 1 ? "))
TamanhoDoVetor2 = int(input("Qual o tamanho do vetor 2 ? "))
TamanhoDoVetorConcatenado = TamanhoDoVetor1 + TamanhoDoVetor2
print()
Vetor1 = [0] * TamanhoDoVetor1
Vetor2 = [0] * TamanhoDoVetor2
VetorConcatenado = [0] * TamanhoDoVetorConcatenado
def InsereElementosNoVetor(Vetor,Tamanho):
    for i in range(Tamanho):
        Vetor[i] = str(input("Digite o elemento do vetor da posição " + str (i+1) + " "))
def ImprimeVetor(Vet):
    print(Vet)
def ConcatenaVetores(Vet1,Vet2,VetConcatenado,Tamanho1,Tamanho2):
    for i in range(Tamanho1):
        VetConcatenado[i] = Vet1[i]
    for j in range(Tamanho2):
        VetConcatenado[Tamanho1 + j] = Vet2[j]
print("Insira os elementos do vetor 1")
print()
InsereElementosNoVetor(Vetor1,TamanhoDoVetor1)
print()
print("Insira os elementos do vetor 2")
print()
InsereElementosNoVetor(Vetor2,TamanhoDoVetor2)
print()
ConcatenaVetores(Vetor1,Vetor2,VetorConcatenado,TamanhoDoVetor1,TamanhoDoVetor2)
print("Seu vetor 1 formado foi ")
print()
ImprimeVetor(Vetor1)
print()
print("Seu vetor 2 formado foi ")
print()
ImprimeVetor(Vetor2)
print()
print("Seu vetor formado concatenado o vetor 1 com o vetor 2 foi ")
print()
ImprimeVetor(VetorConcatenado)