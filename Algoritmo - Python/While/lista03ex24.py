print("Abaixo professor você ira digitar a respostas das 10 questoes da prova")
contDeAlunos = 1
contDeMedia = 0
contDeAcerto = 0
contTotalDeAcertos = 0
MaiorAcerto = 0
MenorAcerto = 0
contTotalDeAcertosForaLaco = 0
contDeAcertoLaco = 0
Questao1 = str(input("Qual a resposta da questão 1? "))
Questao2 = str(input("Qual a resposta da questão 2? "))
Questao3 = str(input("Qual a resposta da questão 3? "))
Questao4 = str(input("Qual a resposta da questão 4? "))
Questao5 = str(input("Qual a resposta da questão 5? "))
Questao6 = str(input("Qual a resposta da questão 6? "))
Questao7 = str(input("Qual a resposta da questão 7? "))
Questao8 = str(input("Qual a resposta da questão 8? "))
Questao9 = str(input("Qual a resposta da questão 9? "))
Questao10 = str(input("Qual a resposta da questão 10? "))
RespostaDoAlunoQ1 = str(input("Qual a resposta do aluno na questão 1 "))
RespostaDoAlunoQ2 = str(input("Qual a resposta do aluno na questão 2 "))
RespostaDoAlunoQ3 = str(input("Qual a resposta do aluno na questão 3 "))
RespostaDoAlunoQ4 = str(input("Qual a resposta do aluno na questão 4 "))
RespostaDoAlunoQ5 = str(input("Qual a resposta do aluno na questão 5 "))
RespostaDoAlunoQ6 = str(input("Qual a resposta do aluno na questão 6 "))
RespostaDoAlunoQ7 = str(input("Qual a resposta do aluno na questão 7 "))
RespostaDoAlunoQ8 = str(input("Qual a resposta do aluno na questão 8 "))
RespostaDoAlunoQ9 = str(input("Qual a resposta do aluno na questão 9 "))
RespostaDoAlunoQ10 = str(input("Qual a resposta do aluno na questão 10 "))

if RespostaDoAlunoQ1 == Questao1:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ2 == Questao2:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ3 == Questao3:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ4 == Questao4:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ5 == Questao5:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ6 == Questao6:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ7 == Questao7:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ8 == Questao8:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ9 == Questao9:
    contDeAcerto = contDeAcerto + 1
if RespostaDoAlunoQ10 == Questao10:
    contDeAcerto = contDeAcerto + 1

MaiorAcerto = contDeAcerto
MenorAcerto = contDeAcerto

AcessoAoSistema = str(input("O professor(a) vai querer utilizar o sistema? Digite S para Sim e N para Não "))
while AcessoAoSistema == "S" or AcessoAoSistema == "s":
    RespostaDoAlunoQ1 = str(input("Qual a resposta do aluno na questão 1 "))
    RespostaDoAlunoQ2 = str(input("Qual a resposta do aluno na questão 2 "))
    RespostaDoAlunoQ3 = str(input("Qual a resposta do aluno na questão 3 "))
    RespostaDoAlunoQ4 = str(input("Qual a resposta do aluno na questão 4 "))
    RespostaDoAlunoQ5 = str(input("Qual a resposta do aluno na questão 5 "))
    RespostaDoAlunoQ6 = str(input("Qual a resposta do aluno na questão 6 "))
    RespostaDoAlunoQ7 = str(input("Qual a resposta do aluno na questão 7 "))
    RespostaDoAlunoQ8 = str(input("Qual a resposta do aluno na questão 8 "))
    RespostaDoAlunoQ9 = str(input("Qual a resposta do aluno na questão 9 "))
    RespostaDoAlunoQ10 = str(input("Qual a resposta do aluno na questão 10 "))
    contDeAlunos = contDeAlunos + 1
    if RespostaDoAlunoQ1 == Questao1:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ2 == Questao2:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ3 == Questao3:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ4 == Questao4:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ5 == Questao5:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ6 == Questao6:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ7 == Questao7:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ8 == Questao8:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ9 == Questao9:
        contDeAcertoLaco = contDeAcertoLaco + 1
    if RespostaDoAlunoQ10 == Questao10:
        contDeAcertoLaco = contDeAcertoLaco + 1

    x = contDeAcertoLaco  
    
    if contDeAcertoLaco > contDeAcerto:
        MaiorAcerto = x
    if contDeAcertoLaco < contDeAcerto:
        MenorAcerto = x  

    AcessoAoSistema = str(input("O professor(a) vai querer utilizar o sistema? Digite S para Sim e N para Não "))
contTotalDeAcertos = contDeAcerto + contDeAcertoLaco
print("O maior acerto foi de",MaiorAcerto,"acertos")
print("O menor acerto foi de",MenorAcerto,"acertos")
print("O total de alunos que usou o sistema foi de",contDeAlunos,"alunos")
print("A media das notas da turma foi de",contTotalDeAcertos/contDeAlunos)




