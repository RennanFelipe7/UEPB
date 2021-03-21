ValorDoSaque = int(input("Qual o valor que você quer sacar? Lembrando que o saque minimo é de 10 reais e o maximo é de 600 reais "))
if ValorDoSaque > 99 and ValorDoSaque <= 600:
    NotasDe100 = int(ValorDoSaque / 100)          
    NotasDe50 = (ValorDoSaque%100)                 
    NotasDe50 = int(NotasDe50 / 50)
    NotasDe10 = (ValorDoSaque%50)
    NotasDe10 = int(NotasDe10 / 10)
    NotasDe5 = (ValorDoSaque%10)
    NotasDe5 = int(NotasDe5/5)
    NotasDe1 = (ValorDoSaque%5)
    if NotasDe50 == 0 and NotasDe10 == 0 and NotasDe5 == 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe10,"Notas de 10")
    elif NotasDe50 == 0 and NotasDe10 == 0 and NotasDe5 != 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe5,"Notas de 5")
    elif NotasDe50 == 0 and NotasDe10 == 0 and NotasDe5 == 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe1,"Notas de 1")
    elif NotasDe50 != 0 and NotasDe10 == 0 and NotasDe5 != 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1")
    elif NotasDe50 != 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10",",",NotasDe1,"Notas de 1")
    elif NotasDe50 != 0 and NotasDe10 != 0 and NotasDe5 != 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5")
    elif NotasDe50 == 0 and NotasDe10 == 0 and NotasDe5 != 0 and NotasDe1 != 0:
         print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1")
    elif NotasDe50 != 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 == 0:
         print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10")
    elif NotasDe50 != 0 and NotasDe10 == 0 and NotasDe5 != 0 and NotasDe1 == 0:
         print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe5,"Notas de 5")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 != 0:
         print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe10,"Notas de 10",",",NotasDe1,"Notas de 1")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 != 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 != 0 and NotasDe1 == 0:
         print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5")
    elif NotasDe50 != 0 and NotasDe10 == 0 and NotasDe5 == 0 and NotasDe1 != 0:
         print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe1,"Notas de 1")
    else:
        print("Você irá sacar:",NotasDe100,"Notas de 100",",",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1")
         
elif ValorDoSaque >= 10 and ValorDoSaque <=99:
    NotasDe50 = (ValorDoSaque%100)                 
    NotasDe50 = int(NotasDe50 / 50)
    NotasDe10 = (ValorDoSaque%50)
    NotasDe10 = int(NotasDe10 / 10)
    NotasDe5 = (ValorDoSaque%10)
    NotasDe5 = int(NotasDe5/5)
    NotasDe1 = (ValorDoSaque%5)
    if NotasDe10 == 0 and NotasDe5 == 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe50,"Notas de 50")
    elif NotasDe10 == 0 and NotasDe5 == 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe50,"Notas de 50",",",NotasDe1,"Notas de 1")
    elif NotasDe10 == 0 and NotasDe5 != 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe50,"Notas de 50",",",NotasDe5,"Notas de 5")
    elif NotasDe10 == 0 and NotasDe5 != 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe50,"Notas de 50",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1") 
    elif NotasDe50 != 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 != 0:   
        print("Você irá sacar:",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10",",",NotasDe1,"Notas de 1")
    elif NotasDe50 != 0 and NotasDe10 != 0 and NotasDe5 != 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe10,"Notas de 10")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 != 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 == 0 and NotasDe1 != 0:
        print("Você irá sacar:",NotasDe10,"Notas de 10",",",NotasDe1,"Notas De 1")
    elif NotasDe50 == 0 and NotasDe10 != 0 and NotasDe5 != 0 and NotasDe1 == 0:
        print("Você irá sacar:",NotasDe10,"Notas de 10",",",NotasDe5,"Notas De 5")
    else:
        print("Você irá sacar:",",",NotasDe50,"Notas de 50",",",NotasDe10,"Notas de 10",",",NotasDe5,"Notas de 5",",",NotasDe1,"Notas de 1")
else:
    print("Seu valor de",ValorDoSaque,"reais não esta disponivel para saque")