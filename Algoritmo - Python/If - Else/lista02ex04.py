Numero1 = int(input("Digite seu primeiro numero: "))
Numero2 = int(input("Digite seu segundo numero: "))
Numero3 = int(input("Digite seu terceiro numero: "))
if Numero3 > Numero2 and Numero2 > Numero1:
    print(Numero3,"é o maior numero e", Numero1, "é o menor numero")
elif Numero1 > Numero2 and Numero2 > Numero3:
    print(Numero1,"é o maior numero e", Numero3, "é o menor numero")
elif Numero1 > Numero3 and Numero3 > Numero2:
    print(Numero1,"é o maior numero e", Numero2, "é o menor numero")
elif Numero2 > Numero3 and Numero3 > Numero1:
    print(Numero2,"é o maior numero e", Numero1, "é o menor numero")
elif Numero3 > Numero1 and Numero1 > Numero2:
    print(Numero3,"é o maior numero e", Numero2, "é o menor numero")
elif Numero2 > Numero1 and Numero1 > Numero3:
    print(Numero2,"é o maior numero e", Numero3, "é o menor numero")
elif Numero3 > Numero2 and Numero1 == Numero3:
    print(Numero3,"é o maior numero e", Numero2, "é o menor numero")    
elif Numero3 > Numero1 and Numero3 == Numero2:
    print(Numero3,"é o maior numero e", Numero1, "é o menor numero")
elif Numero1 > Numero3 and Numero3 == Numero2:
    print(Numero1,"é o maior numero e", Numero3, "é o menor numero")
elif Numero2 > Numero3 and Numero3 == Numero1:
    print(Numero2,"é o maior numero e", Numero1, "é o menor numero")
elif Numero3 > Numero1 and Numero1 == Numero2:
    print(Numero3,"é o maior numero e", Numero1, "é o menor numero")
elif Numero1 == Numero2 and Numero2 > Numero3:
    print(Numero1,"é o maior numero e", Numero3, "é o menor numero")
elif Numero1 == Numero2 and Numero2 == Numero3:
    print("Os numeros são iguais e não existe numero maior e menor")




#Bom professor Ricardo aqui eu quis tratar todas as condições possiveis, como o usuario poderia digitar todos os numeros iguais ou ate mesmo duas iguais e uma diferente.