PopulacaoDePaisA = 80000
PopulacaoDePaisB = 200000
TaxaDeCrescimentoPaisA = 0.03
TaxaDeCrescimentoPaisB = 0.015
cont = 0
while PopulacaoDePaisA < PopulacaoDePaisB:
    PopulacaoDePaisA = PopulacaoDePaisA + (PopulacaoDePaisA * TaxaDeCrescimentoPaisA)
    PopulacaoDePaisB = PopulacaoDePaisB + (PopulacaoDePaisB * TaxaDeCrescimentoPaisB)
    cont = cont + 1
print("Ira demorar um total de",cont,"anos para a populacao do pais A igular ou ultrapassar a populcao do pais B")