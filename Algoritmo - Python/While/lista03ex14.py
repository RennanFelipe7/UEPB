QuantidadeDeNumeros = int(input("Quantos numeros serao comparados? "))
PrimeiroNumero = float(input("Qual seu numero? "))
MaiorValor = PrimeiroNumero
MenorValor = PrimeiroNumero
SomaForaDoWhile = 0
SomaDentroDoWhile = 0
cont = 1
while cont < QuantidadeDeNumeros:
    Numero = float(input("Qual seu numero? "))
    if Numero > MaiorValor:
        MaiorValor = Numero
    if Numero < MenorValor:
        MenorValor = Numero
    cont = cont + 1
    SomaDentroDoWhile = SomaDentroDoWhile + Numero
SomaForaDoWhile = SomaDentroDoWhile + PrimeiroNumero 
print("Seu menor valor foi",MenorValor,"seu maior valor foi",MaiorValor,"e sua soma foi",SomaForaDoWhile)