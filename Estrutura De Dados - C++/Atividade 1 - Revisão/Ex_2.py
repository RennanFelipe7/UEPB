'''
Elabore um programa que tenha como parâmetros de entrada um vetor 
(cujos elementos são do tipo inteiro) e o número de elementos do vetor, 
e forneça como saída a média aritmética dos números do vetor.

'''

def Insere_Elemento_No_Vetor(Vet, Quantidade_De_Elementos_Do_Vetor):
    for i in range(0, Quantidade_De_Elementos_Do_Vetor):
        print()
        Vet[i] = int(input("Digite o valor do vetor na posição [" + str(i+1) + "] : "))

def Media(Vet, Quantidade_De_Elementos_Do_Vetor):
    Soma = 0
    for Valor in Vet:
        Soma = Soma + Valor
    return Soma / Quantidade_De_Elementos_Do_Vetor

print()
Numero_De_Elementos_Do_Vetor = int(input("Digite a quantidade de elementos do vetor : "))
Vet = [0] * Numero_De_Elementos_Do_Vetor
Insere_Elemento_No_Vetor(Vet, Numero_De_Elementos_Do_Vetor)
print()
print("A média aritmética dos números do vetor foi de " + str(Media(Vet, Numero_De_Elementos_Do_Vetor)))