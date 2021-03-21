Gabarito = [""] * 10
QuantidadeDeAlunos = int(input("Qual a quantidade de alunos da turma que fizeram a prova? "))
ListaFinal = [""] * 10 * QuantidadeDeAlunos
ListaFinalIndice = 10 * QuantidadeDeAlunos
cont = 0
aux = 0
IndiceGabarito = 0
IndiceAluno = 0
aux2 = 0
Aluno = 1
NumeroDoAluno = 1
NumeroDaQuestao = 1
print()
print("Abaixo você irá digitar o gabarito da prova")
print()
for r in range(0,10,1):
    ResposataDaQuestao = str(input("Qual a resposta correta desta questão? "))
    Gabarito[r] = ResposataDaQuestao
print()
print("Abaixo você irá digitar as respostas dos alunos das questões")
for k in range(ListaFinalIndice):
    if k % 10 == 0:
        print()
    if k == 0 or k % 10 == 0:
        print("Respostas do aluno",Aluno)
        print()
        Aluno = Aluno + 1    
    ResposataDaQuestaoDesseAluno = str(input("Qual a resposta do aluno nessa questão? "))
    ListaFinal[k] = ResposataDaQuestaoDesseAluno    
print()
while aux < QuantidadeDeAlunos:
    while aux2 < 10:
        if ListaFinal[IndiceAluno] == Gabarito[IndiceGabarito]:
            cont = cont + 1           
        IndiceAluno = IndiceAluno + 1
        IndiceGabarito = IndiceGabarito + 1
        aux2 = aux2 + 1                
    print("O aluno",NumeroDoAluno,"acertou um total de",cont,"questões")
    NumeroDoAluno = NumeroDoAluno + 1
    aux2 = 0
    aux = aux + 1
    IndiceGabarito = 0
    cont = 0