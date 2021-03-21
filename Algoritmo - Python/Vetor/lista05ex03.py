Lista = [0] * 10
cont = 0
for r in range(0,10,1):
    ElementoDaLista = int(input("Qual o elemento da lista? "))
    Lista[r] = ElementoDaLista
    if ElementoDaLista % 2 == 0:        
        cont = cont + 1
print()
print("Sua lista contem",cont,"numeros pares")
print()
print("Seus numeros pares são:")
print()
for a in range(0,10,1):
    if Lista[a] % 2 == 0:
        print(Lista[a])