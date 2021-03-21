UltimoTermoDaSerie = int(input("Ate que termo da serie você quer imprimir? "))
cont = 0
Numerador = 0
Denominador = -1
SomaDoNumerador = 0
SomaDoDenominador = 0
print("Sequencia : ")
while cont < UltimoTermoDaSerie:
    Numerador = Numerador + 1
    Denominador = Denominador + 2
    SomaDoNumerador = SomaDoNumerador + Numerador
    SomaDoDenominador = SomaDoDenominador + Denominador 
    print(Numerador,"/",Denominador) 
    cont = cont + 1
print("E sua soma foi igual a:",SomaDoNumerador,"/",SomaDoDenominador)