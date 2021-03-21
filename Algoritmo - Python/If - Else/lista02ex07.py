print("M=Matutino   V=Vespertino    N=Noturno ")
Turno = str(input("Qual turno voce estuda? Conforme a tabela acima "))
if Turno == "M" or Turno == "m":
    print ("Bom Dia")
elif Turno == "V" or Turno == "v":
    print ("Boa Tarde")
elif Turno == "N" or Turno == "n":
    print ("Boa Noite")
else:
    print("Valor Invalido")


# Aqui professro Ricardo quiz tratar como se o usuario digitar um valor maiusculo ou minusculo para a variavel Turno...
