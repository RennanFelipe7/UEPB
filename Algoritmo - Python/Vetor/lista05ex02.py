Lista = [0] * 10
QuadradoDaLista = [0] * 10
for r in range(10):
    ElementoDaLista = float(input("Qual o elemento da lista? "))
    Lista[r] = ElementoDaLista
    QuadradoDaLista[r] = ElementoDaLista ** 2
print("Sua lista original é",Lista)
print("Sua lista, cada elemento elevado ao quadrado é",QuadradoDaLista)