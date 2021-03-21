QuantidadeDeQuestoesDaProva = int(input("Qual a quantidade de questões da prova ? "))
print()
RespostasDoCandidato = [""] * QuantidadeDeQuestoesDaProva
GabaritoDaProva = [""] * QuantidadeDeQuestoesDaProva
VetorDeErrosEAcertos = [""] * QuantidadeDeQuestoesDaProva
def InsereRespostasNosGabaritos(Respostas,Gabarito,QuantidadeDeQuestoes):
    print("Abaixo só será possível ser digitado a, b, c, d, ou e. Outra opção vai está inválida, verifique se Caps Lock está ativada e desative caso esteja.")
    print()
    print("Digite as respostas do candidato")
    print()
    for i in range(QuantidadeDeQuestoes):        
        Respostas[i] = str(input("Qual a resposta do candidato desta questão ? "))
        while Respostas[i] != "a" and Respostas[i] != "b" and Respostas[i] != "c" and Respostas[i] != "d" and Respostas[i] != "e":
            print("Resposta inválida, digite novamente sua resposta")
            Respostas[i] = str(input("Qual a resposta do candidato desta questão ? "))
    print()
    print("Agora digite as respostas do gabarito")
    print()
    for a in range(QuantidadeDeQuestoes):
        Gabarito[a] = str(input("Qual a resposta do gabarito desta questão ? "))
        while Gabarito[a] != "a" and Gabarito[a] != "b" and Gabarito[a] != "c" and Gabarito[a] != "d" and Gabarito[a] != "e":
            print("Resposta inválida, digite novamente sua resposta")
            Gabarito[a] = str(input("Qual a resposta do gabarito desta questão ? "))
def ComparaQuestoesEPercentual(Resposta,Gabarit,VetAcertosEErros,QuantDeQuestoes):
    ContDeAcertos = 0
    for b in range(QuantDeQuestoes):
        if Resposta[b] == Gabarit[b]:
            VetAcertosEErros[b] = True
            ContDeAcertos = ContDeAcertos + 1
        else:
            VetAcertosEErros[b] = False
    PercentualDeAcertos = int((ContDeAcertos / QuantDeQuestoes) * 100)
    print("Seu percentual de acertos e:",PercentualDeAcertos,"%")
InsereRespostasNosGabaritos(RespostasDoCandidato,GabaritoDaProva,QuantidadeDeQuestoesDaProva)
print()
ComparaQuestoesEPercentual(RespostasDoCandidato,GabaritoDaProva,VetorDeErrosEAcertos,QuantidadeDeQuestoesDaProva)


# Professor Ricardo nessa questão fiz dessa forma, onde o gabarito tem as respostas possiveis a, b, c, d ou e, e o while trata esse erro do usuário, de alguma possivel erro de digitação, ou seja, algo diferente de a, b, c, d ou e. 