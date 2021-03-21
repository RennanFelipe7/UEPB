TotalDeCDs = int(input("Qual a quantidade de CDs? "))
ValorTotalDosCDs = 0
cont = 0
while cont < TotalDeCDs :
    ValorDoCD = float(input("Qual o valor do CD? " ))
    ValorTotalDosCDs = ValorTotalDosCDs + ValorDoCD
    MediaDosCDs = ValorTotalDosCDs / TotalDeCDs
    cont = cont + 1
print("O valor total investido em seus CDs foi de",ValorTotalDosCDs,"reais e o valor medio gasto em cada um dos CDs foi de",MediaDosCDs,"reais")