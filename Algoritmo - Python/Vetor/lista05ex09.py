TamanhoDaLista = int(input("Qual o tamanho da lista? "))
Lista = [0] * TamanhoDaLista
contpar = 0
contimpar = 0 
IndicePar = 0
IndiceImpar = 0
for r in range(TamanhoDaLista):
    ElementoDaLista = int(input("Qual o elemento da lista? "))
    Lista[r] = ElementoDaLista
for k in range(TamanhoDaLista):
    if Lista[k] % 2 == 0:
        contpar = contpar + 1        
    else:
        contimpar = contimpar + 1
ListaPar = [0] * contpar
ListaImpar = [0] * contimpar
for l in range(TamanhoDaLista):
    if Lista[l] % 2 == 0:
        ListaPar[IndicePar] = Lista[l]
        IndicePar = IndicePar + 1
    if Lista[l] % 2 != 0:
        ListaImpar[IndiceImpar] = Lista[l]
        IndiceImpar = IndiceImpar + 1
print()
print("Sua lista original é:",Lista)
print()
print("Sua lista de numeros pares da lista original é:",ListaPar)
print()
print("Sua lista de numeros impares da lista original é:",ListaImpar)