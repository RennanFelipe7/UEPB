ComprimentoDaSala = float (input("Qual o comprimento da sua sala? "))
LarguraDaSala = float (input("Qual a largura da sala? "))
ComprimentoDaCadeira = float(input("Qual o comprimento da cadeira? "))
LarguraDaCadeira = float(input("Qual a largura da cadeira? ")) 
EspacoEntreAsFileiras = 0.5
EspacoEntreDuascadeiras = 0.2
EspacoParaOProfessor = 1.5
DimensaoDaCadeira = (ComprimentoDaCadeira * LarguraDaCadeira)  + EspacoEntreDuascadeiras + EspacoEntreAsFileiras
DimensaoDaSalaDeAula = (ComprimentoDaSala * LarguraDaSala) - EspacoParaOProfessor
QuantasCadeirasCabeiraoNaSala = int (DimensaoDaSalaDeAula/DimensaoDaCadeira)
print("Cabeirao na sala de aula um total de:", QuantasCadeirasCabeiraoNaSala, "cadeiras")