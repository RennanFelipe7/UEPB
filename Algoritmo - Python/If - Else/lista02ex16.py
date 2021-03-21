KilosDeMorango = float(input("Quantos quilos de Morango você quer levar? "))
KilosDeMaca = float(input("Quantos quilos de Maça você quer levar? "))
KilosDeFrutas = KilosDeMorango + KilosDeMaca

if KilosDeMorango <= 5 :
    PrecoDoKilosDeMorango = 2.50
else:
    PrecoDoKilosDeMorango = 2.20
if KilosDeMaca <= 5:
    PrecoDoKilosDeMaca = 1.80
else: 
    PrecoDoKilosDeMaca = 1.50
PrecoTotalDasfrutas = (KilosDeMorango*PrecoDoKilosDeMorango)+(KilosDeMaca*PrecoDoKilosDeMaca)
    
if KilosDeFrutas <= 8 and PrecoTotalDasfrutas <= 25:    
    PrecoTotalDeMorango = KilosDeMorango*PrecoDoKilosDeMorango
    PrecoTotalDeMaca  =  KilosDeMaca*PrecoDoKilosDeMaca
    print("Você adquiriu um total de:",KilosDeMorango,"Quilos de Morango e",KilosDeMaca,"Quilos de Malça","Totalizando um total de:",PrecoTotalDasfrutas,"Reais")
elif KilosDeFrutas > 8 or PrecoTotalDasfrutas > 25:
    PrecoTotalDeMorango = (KilosDeMorango*PrecoDoKilosDeMorango)
    PrecoTotalDeMaca = (KilosDeMaca*PrecoDoKilosDeMaca)
    PrecoTotalDasfrutas = PrecoTotalDeMorango+PrecoTotalDeMaca
    PrecoTotalDasfrutasComDesconto = (PrecoTotalDeMorango+PrecoTotalDeMaca)-(PrecoTotalDasfrutas*0.1)
    print("Você adquiriu um total de:",KilosDeMorango,"Quilos de Morango e",KilosDeMaca,"Quilos de Malça","Totalizando um total de:",PrecoTotalDasfrutasComDesconto,"Reais")
