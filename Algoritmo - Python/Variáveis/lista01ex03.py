ValorOriginalDaDivida = float ( input ("Qaul o valor da divida? "))
DiasDeAtraso = int ( input ("Quantos dias de atraso tem essa divida? "))
JurosAserCobradoPorDiaDeAtraso = float ( input("Qual o valor a ser pago por dia de atraso? "))
AcrecimoEmJurosPorDiaDeAtraso = DiasDeAtraso*JurosAserCobradoPorDiaDeAtraso
ValorTotalAserPago = AcrecimoEmJurosPorDiaDeAtraso + ValorOriginalDaDivida
print( "Seu juro sera de:", AcrecimoEmJurosPorDiaDeAtraso, "Reais", ",", "Voce ira receber ao todo", ValorTotalAserPago, "Reais")