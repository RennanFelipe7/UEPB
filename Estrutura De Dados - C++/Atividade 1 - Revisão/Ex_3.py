'''
Elabore um programa em que elementos sejam lidos para um vetor. 
Na sequência, o usuário deve solicitar uma substituição, ou seja, 
ele informa dois valores, e todas as ocorrências do primeiro valor devem 
ser substituídas pelo segundo valor.
'''


def Insere_Elemento_No_Vetor(Vet):
    Pos = 1
    while True:
        print()
        Vet.append(int(input("Digite o numero a ser adicionado no vetor na posição " + str(Pos) + " : " )))
        Pos += 1
        print()
        Continua = input("Deseja continuar ? [N] - Não ")
        if Continua == "N":
            break

def Substitui(Vet, Ocorrencia, Troca):
    for i in range(0, len(Vet)):
        if Vet[i] == Ocorrencia:
            Vet[i] = Troca

Vet_A = []
Insere_Elemento_No_Vetor(Vet_A)
print()
Ocorrencia = int(input("TROCAR : "))
print()
Troca = int(input("POR: "))
print()
print("Vetor ANTES da troca = ", Vet_A)
print()
Substitui(Vet_A, Ocorrencia, Troca)
print("Vetor DEPOIS da troca = ", Vet_A)