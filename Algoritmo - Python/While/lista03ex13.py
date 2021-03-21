Valor = int(input("Digite um numero para qual você quer ver seu fatorial: "))
MeuNumero = Valor
Resultado = 1
while Valor != 1:
    Resultado = Valor * Resultado
    Valor = Valor - 1
print("O fatorial de",MeuNumero,"é",Resultado)