Caractere = input("Caractere: ")
TamanhoDoQuadro = int(input("Qual o tamanho do quadro que você quer ver impresso? "))
LarguraDoQuadro = int(input("Qual a largura do quadro que você quer ver impresso? "))
for Linha in range (TamanhoDoQuadro):
    print()
    for Coluna in range (LarguraDoQuadro):
        print(Caractere, Caractere, sep="", end="")