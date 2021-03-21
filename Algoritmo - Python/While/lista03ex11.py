cont = 0
NumerosPar = 0
NumerosImpar = 0
while cont < 10:
    Numeros = int(input("Quais são seus numeros? "))
    cont = cont + 1
    if Numeros % 2 == 0:
        NumerosPar = NumerosPar + 1
    else:
        NumerosImpar = NumerosImpar + 1
print("Foram digitados uma quantidade de",NumerosPar,"numeros pares e",NumerosImpar,"numeros impares")