import random
import time
Tamanho = 21
Matriz = [[0]* 7 for i in range(3)]
Lista_De_Numeros = [Numero + 1 for Numero in range(Tamanho)]
for i in range(3):
    for j in range(7):
        Numero = random.choice(Lista_De_Numeros)
        Matriz[i][j] = Numero
        Lista_De_Numeros.remove(Numero)
def Escolha (M):
    Linha_Do_Numero = int(input("Qual a linha que seu número ficou ? "))
    while Linha_Do_Numero != 1 and Linha_Do_Numero != 2 and Linha_Do_Numero != 3:
        print()
        print("Linha Inválida, Digite novamente a linha")
        print()
        Linha_Do_Numero = int(input("Qual a linha que seu número ficou ? "))
    if Linha_Do_Numero == 1:
        M = [(M[1]), (M[0]), (M[2])]        
        M = [[(M[0][6]), (M[0][3]), (M[0][0]), (M[1][4]), (M[1][1]), (M[2][5]),(M[2][2]) ], [(M[0][5]), (M[0][2]), (M[1][6]), (M[1][3]), (M[1][0]), (M[2][4]), (M[2][1])], [(M[0][4]), (M[0][1]), (M[1][5]), (M[1][2]), (M[2][6]), (M[2][3]), (M[2][0])]]        
        return M    
    elif Linha_Do_Numero == 2:
        M= [(M[0]), (M[1]), (M[2])]        
        M = [[(M[2][6]), (M[2][3]), (M[2][0]), (M[1][4]), (M[1][1]), (M[0][5]),(M[0][2]) ], [(M[2][5]), (M[2][2]), (M[1][6]), (M[1][3]), (M[1][0]), (M[0][4]), (M[0][1])], [(M[2][4]), (M[2][1]), (M[1][5]), (M[1][2]), (M[0][6]), (M[0][3]), (M[0][0])]]        
        return M    
    elif Linha_Do_Numero == 3:
        M= [(M[0]), (M[2]), (M[1])]        
        M = [[(M[2][6]), (M[2][3]), (M[2][0]), (M[1][4]), (M[1][1]), (M[0][5]),(M[0][2]) ], [(M[2][5]), (M[2][2]), (M[1][6]), (M[1][3]), (M[1][0]), (M[0][4]), (M[0][1])], [(M[2][4]), (M[2][1]), (M[1][5]), (M[1][2]), (M[0][6]), (M[0][3]), (M[0][0])]]                           
        return M   
print()
time.sleep(1)
print("Embaralhando os números")
time.sleep(2) 
print()
print()
print("                              Escolha um único número abaixo")
print()
print('       linha 1','                        linha 2','                      linha 3')
print()
print (Matriz[0],'     ',Matriz[1],'     ',Matriz[2])
print()
Matriz = Escolha(Matriz)
print()
time.sleep(1)
print("Embaralhando os números")
time.sleep(2) 
print()
print('       linha 1','                        linha 2','                      linha 3')
print()
print (Matriz[0],'     ',Matriz[1],'     ',Matriz[2])
print()
Matriz = Escolha(Matriz)
print()
time.sleep(1)
print("Embaralhando os números")
time.sleep(2) 
print()
print('       linha 1','                        linha 2','                      linha 3')
print()
print (Matriz[0],'     ',Matriz[1],'     ',Matriz[2])
print()
Matriz = Escolha(Matriz)
print()
time.sleep(1)
print("Processando o número que você escolheu")
print()
for i in range (3):
    print(".") # Colocar o pontos na mesma linha com o time.sleep(1)
    time.sleep(1)
print()
print("Seu número escolhido foi o",Matriz[1][3])

# ver se n precisa a primeira linha apos o if...