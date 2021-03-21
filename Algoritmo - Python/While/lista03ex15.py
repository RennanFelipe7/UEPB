Numero = int(input("Digite um numero inteiro positivo: "))
if Numero == 2:
        print("Seu numero 2 é primo")
ContadorDeDivisores = 0
Divisor = 1
if Numero > 2:
    while Divisor < Numero:
            if Numero % Divisor == 0:
                ContadorDeDivisores = ContadorDeDivisores + 1
            Divisor = Divisor + 1                
    if ContadorDeDivisores > 2:
        print("Seu numero",Numero,"não é primo")
    else:
        print("Seu numero",Numero,"é primo")    
while Numero == 0 or Numero == 1:
    print("O numero que você quer verificar se é primo tem que ser maior ou igual a 2")
    Numero = int(input("Digite novamente um numero inteiro positivo: "))
    if Numero == 2:
        print("Seu numero 2 é primo")
    if Numero > 2:
        while Divisor < Numero:
            if Numero % Divisor == 0:
                ContadorDeDivisores = ContadorDeDivisores + 1
            Divisor = Divisor + 1                
        if ContadorDeDivisores > 2:
            print("Seu numero",Numero,"não é primo")
        else:
            print("Seu numero",Numero,"é primo")     