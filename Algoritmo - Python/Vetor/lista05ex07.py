Vetor1 = [0] * 20
Vetor2 = [0] * 20
VetorSubtracao = [0] * 20
VetorSoma = [0] * 20
VetorMultiplicacao = [0] * 20
for r in range(0,20,1):
    ElementoDoVetor1 = int(input("Qual o elemento do vetor 1? "))
    Vetor1[r] = ElementoDoVetor1
print("---------------------------------------------------------------")
for k in range(0,20,1):
    ElementoDoVetor2 = int(input("Qual o elemento do vetor 2? "))
    Vetor2[k] = ElementoDoVetor2
for l in range (0,20,1):
    VetorSubtracao[l] = Vetor1[l] - Vetor2[l]
    VetorSoma[l] = Vetor1[l] + Vetor2[l]
    VetorMultiplicacao[l] = Vetor1[l] * Vetor2[l]
print("Vetor 1 =",Vetor1)
print()
print("Vetor 2 =",Vetor2)
print()
print("Vetor subtração =",VetorSubtracao)
print()
print("Vetor soma =",VetorSoma)
print()
print("Vetor multiplicação =",VetorMultiplicacao)