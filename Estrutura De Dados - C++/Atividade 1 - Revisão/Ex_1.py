'''
1. Elabore um programa que, ao ler dois vetores A e B, com N e M elementos, respectivamente:
gere um novo vetor C que corresponde à intersecção dos vetores A e B.
gere um novo vetor D que corresponde à união dos vetores A e B.
imprima os vetores A, B, C e D.
Considere que não existem elementos repetidos em cada um dos vetores A e B. 

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

def Interseccao(Vet_A, Vet_B, Vet_C): 
    for Numero_V_A in Vet_A:          
        for Numero_V_B in Vet_B:
            if Numero_V_A == Numero_V_B:
                Vet_C.append(Numero_V_A)

def Uniao_De_Vetores(Vet_A, Vet_B, Vet_D):
    for Numero_V_A in Vet_A:
        Vet_D.append(Numero_V_A) 
    for Numero_V_B in Vet_B:
        Vet_D.append(Numero_V_B) 

Vet_A = []
Vet_B = []
Vet_C = []
Vet_D = []
print()
print("Inserção dos numeros no vetor A")
Insere_Elemento_No_Vetor(Vet_A)
print()
print("-------------------------------------------------")
print()
print("Inserção dos numeros no vetor B")
Insere_Elemento_No_Vetor(Vet_B)
Interseccao(Vet_A, Vet_B, Vet_C)
Uniao_De_Vetores(Vet_A, Vet_B, Vet_D)
print()
print("-------------------------------------------------")
print()
print("Vetor A = ", Vet_A)
print()
print("Vetor B = ", Vet_B)
print()
print("Vetor C, Intersecção = ", Vet_C)
print()
print("Vetor D, União = ", Vet_D)