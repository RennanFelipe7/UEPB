print("RESPONDA AS PERGUNTAS SOMENTE COM sim OU nao")
Telefonou = str(input("Telefonou para a vitima? "))
EsteveNoLocal = str(input("Esteve no local do crime? "))
MoraPertoDaVitima = str(input("Mora perto da vitima? "))
DeviaParaAVitima = str(input("Devia para a vitima? "))
TrabalhouComAVitima = str(input("Já trabalhou com a vitima? "))
cont = 0
if Telefonou == "sim":
    cont = cont + 1
if EsteveNoLocal == "sim":
    cont = cont + 1
if MoraPertoDaVitima == "sim":
    cont = cont + 1 
if DeviaParaAVitima == "sim":
    cont = cont + 1
if TrabalhouComAVitima == "sim":
    cont = cont + 1
if cont < 2:
    print("Inocente")
elif cont == 2:
    print("Suspeita")
elif cont == 3 or cont == 4:
    print("Cúmplice")
else:
    print("Assasino")


       

    