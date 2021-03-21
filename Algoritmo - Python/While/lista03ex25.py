Numero  = int(input("Numero "))
aux = 0
while Numero > 0:
    aux = aux * 10
    aux = aux + (Numero % 10)
    Numero = Numero //10
print(aux)