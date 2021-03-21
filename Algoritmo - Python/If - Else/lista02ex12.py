Numero = int(input("Digite um numero menor que 1000 (Mil) e maior que 0 (Zero) "))
if Numero <= 0:
    print("Numero Invalido")
elif Numero > 99 and Numero < 1000:
    Unidade = (Numero % 10)
    Numero = (Numero-Unidade)/10
    Dezena = int(Numero % 10)
    Numero = (Numero-Dezena)/10
    Centena = int(Numero)
    if Centena == 1 and Dezena == 1 and Unidade == 1:
        print("Seu numero tem:",Centena,"Centena",",",Dezena,"Dezena","e",Unidade,"Unidade")
    elif Centena == 1 and Dezena == 1 and Unidade != 1:
        print("Seu numero tem:",Centena,"Centena",",",Dezena,"Dezena","e",Unidade,"Unidades")
    elif Centena == 1 and Dezena != 1 and Unidade != 1:
        print("Seu numero tem:",Centena,"Centena",",",Dezena,"Dezenas","e",Unidade,"Unidades")
    elif Centena != 1 and Dezena != 1 and Unidade == 1:
        print("Seu numero tem:",Centena,"Centenas",",",Dezena,"Dezenas","e",Unidade,"Unidade")
    elif Centena == 1 and Dezena != 1 and Unidade == 1:
        print("Seu numero tem:",Centena,"Centena",",",Dezena,"Dezenas","e",Unidade,"Unidade")
    elif Centena != 1 and Dezena == 1 and Unidade !=1:
        print("Seu numero tem:",Centena,"Centenas",",",Dezena,"Dezena","e",Unidade,"Unidades")
    elif Centena != 1 and Dezena == 1 and Unidade == 1:
        print("Seu numero tem:",Centena,"Centenas",",",Dezena,"Dezena","e",Unidade,"Unidade")
    else:
        print("Seu numero tem:",Centena,"Centenas",",",Dezena,"Dezenas","e",Unidade,"Unidades")
elif Numero > 9 and Numero < 100:
    Unidade = (Numero % 10)
    Numero = (Numero-Unidade)/10
    Dezena = int(Numero % 10)
    if Dezena == 1 and Unidade == 1 :
        print("Seu numero tem:",Dezena,"Dezena",",","e",Unidade,"Unidade")
    elif Dezena == 1 and Unidade != 1:
        print("Seu numero tem:",Dezena,"Dezena",",","e",Unidade,"Unidades")
    elif Dezena != 1 and Unidade == 1 :
        print("Seu numero tem:",Dezena,"Dezenas",",","e",Unidade,"Unidade")
    else:
        print("Seu numero tem:",Dezena,"Dezenas",",","e",Unidade,"Unidades")    
elif Numero < 9:
    Unidade = (Numero%10)    
    if Unidade == 1 :
        print("Seu numero tem:",Unidade,"Unidade")
    else:
        print("Seu numero tem:",Unidade,"Unidades")
else:
    print("Numero invalido")