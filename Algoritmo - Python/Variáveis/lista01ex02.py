KMinicial = int ( input ( "Me informe seu KM de partida? "))
KMfinal = int ( input ( "Me informe seu KM de parada? "))
LitrosDeCombustivelGastosDoPercurso = float ( input ( "Quantos litros de combustivel foi gasto no percurso? "))
MediaDeConsumo = (KMfinal-KMinicial)/LitrosDeCombustivelGastosDoPercurso
print("Sua media de consumo foi de: ", MediaDeConsumo, "Litros de combustivel por KM" )
#Aqui professor Ricardo como no exemplo na lsita de exercicio vc mostrou o exemplo com numeros
# inteiros eu na questão so trabalhei com INT e n com float porem para divisoes n exatas
# o programa responde perfeito em float na linha 3 , veja os valores 3,19,5 respectivamente.