NumeroFinalDoIntervalo = int(input("Qual numero você quer verificar os numeros primos no intervalo de [1,X], com X valendo? " ))
while NumeroFinalDoIntervalo <= 1 or NumeroFinalDoIntervalo > 1000:
    print("Numero invalido, seu numero deve ser igual ou maior a 2 e menor ou igual a 1000")
    NumeroFinalDoIntervalo = int(input("Qual numero você quer verificar os numeros primos no intervalo de [1,X], com X valendo? " ))
print("Entre 1 e",NumeroFinalDoIntervalo,"são primos os números:")
NumerosAVerificarDoMeioDoIntervalo = 2
while NumerosAVerificarDoMeioDoIntervalo <= NumeroFinalDoIntervalo-1:
    NumeroDeDivisoresPossivel = 0
    NumeroParaComparacaoInicial = 1
    while NumeroParaComparacaoInicial < 1000:
        if NumerosAVerificarDoMeioDoIntervalo % NumeroParaComparacaoInicial == 0:
            NumeroDeDivisoresPossivel = NumeroDeDivisoresPossivel + 1
        NumeroParaComparacaoInicial = NumeroParaComparacaoInicial + 1     
    if NumeroDeDivisoresPossivel == 2:
        print(NumerosAVerificarDoMeioDoIntervalo,end="  ")    
    NumerosAVerificarDoMeioDoIntervalo = NumerosAVerificarDoMeioDoIntervalo + 1