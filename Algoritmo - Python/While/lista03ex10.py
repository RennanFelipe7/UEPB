Base = int(input("Qual o numero para ser a sua base? "))
Expoente = int(input("Qual o numero para ser seu expoente? "))
PrimeiroResultado = Base * Base
ExpoenteInicial = 2                           
while ExpoenteInicial < Expoente:
    Resultado = PrimeiroResultado * Base
    PrimeiroResultado = Resultado
    ExpoenteInicial = ExpoenteInicial + 1
print(PrimeiroResultado)