cont = 0
Soma = 0
while cont < 10:
    Numeros = float(input("Quais os numeros que voce quer somar? "))
    Soma = Soma + Numeros    
    cont = cont + 1
    Media = Soma / 10
print("A soma de seus valores foi de:",Soma,"e sua media foi de:",Media)