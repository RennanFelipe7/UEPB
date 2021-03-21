CodigoDaCidade = int(input("Qual o codigo da cidade? "))
NumeroDeVeiculosDePasseio = int(input("Quantos carros de passeio há nessa cidade em 2019? "))
VitimasFatais = int(input("Quantas vitimas fatais houve nessa cidade em 2019? "))
MaiorIndiceDeAcidente = VitimasFatais
MenorIndiceDeAcidente = VitimasFatais
AQueCodigoDaCidadePertence = CodigoDaCidade
AQueCodigoDaCidadePertenceMenor = CodigoDaCidade
SomaDosAcidentesCidadesMenorQ2000 = 0
SomaDosAcidentesCidadesMenorQ2000ForaLaco = 0
cont = 1
SomaDosVeiculosDasCidadesLaco = 0
SomaDosVeiculosDasCidades = NumeroDeVeiculosDePasseio
contVeiculosMenorQ2000 = 0
if NumeroDeVeiculosDePasseio < 2000:
    SomaDosAcidentesCidadesMenorQ2000ForaLaco = VitimasFatais 
    contVeiculosMenorQ2000 = contVeiculosMenorQ2000 + 1
while cont < 5:
    CodigoDaCidadeLaco = int(input("Qual o codigo da cidade? "))
    NumeroDeVeiculosDePasseioLaco = int(input("Quantos carros de passeio há em 2019? "))
    VitimasFataisLaco = int(input("Quantas vitimas fatais houve nessa cidade em 2019? "))
    if NumeroDeVeiculosDePasseioLaco < 2000:    
        SomaDosAcidentesCidadesMenorQ2000 = SomaDosAcidentesCidadesMenorQ2000 + VitimasFataisLaco
        contVeiculosMenorQ2000 = contVeiculosMenorQ2000 + 1    
    if VitimasFataisLaco > MaiorIndiceDeAcidente:
        MaiorIndiceDeAcidente = VitimasFataisLaco
        AQueCodigoDaCidadePertence = CodigoDaCidadeLaco
    if VitimasFataisLaco < MenorIndiceDeAcidente:
        MenorIndiceDeAcidente = VitimasFataisLaco
        AQueCodigoDaCidadePertenceMenor = CodigoDaCidadeLaco
    SomaDosVeiculosDasCidadesLaco = SomaDosVeiculosDasCidadesLaco + NumeroDeVeiculosDePasseioLaco 
    TotalMenorQ2000 = SomaDosAcidentesCidadesMenorQ2000 + SomaDosAcidentesCidadesMenorQ2000ForaLaco 
    cont = cont + 1
SomaDosVeiculosForaDoLaco = SomaDosVeiculosDasCidadesLaco + NumeroDeVeiculosDePasseio
MediaDeVeiculosDeTodasAsCidades = int (SomaDosVeiculosForaDoLaco / 5)
if contVeiculosMenorQ2000 == 0:
    contVeiculosMenorQ2000 = 1
MediaDeAcidentesCidadesMenorQ2000 = int (TotalMenorQ2000 / contVeiculosMenorQ2000)
print("----------------------------------------------------------------------------")
print("Seu maior indice de acidente e de:",MaiorIndiceDeAcidente,"e ele pertence a cidade de codigo:", AQueCodigoDaCidadePertence)
print("Seu menor indice de acidente e de:",MenorIndiceDeAcidente,"e ele pertence a cidade de codigo:", AQueCodigoDaCidadePertenceMenor)
print("A media de carros das 5 cidades juntas é de:",MediaDeVeiculosDeTodasAsCidades,"carrros")    
print("A media de acidentes das cidades com menos de 2000 veiculos é de:",MediaDeAcidentesCidadesMenorQ2000,"acidentes")
