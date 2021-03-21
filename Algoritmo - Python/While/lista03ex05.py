PrimeiroNumero = float(input("Qual seu numero? "))
MaiorValor = PrimeiroNumero
cont = 1
while cont < 10:
    Numero = float(input("Qual seu numero? "))
    if Numero > MaiorValor:
        MaiorValor = Numero
    cont = cont + 1
print("Seu maior numero é:",MaiorValor)