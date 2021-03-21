QuantidadeDeTurmas = int(input("Qual a quantidade de turmas? "))
cont = 0
SomaDeAlunos = 0
while cont < QuantidadeDeTurmas:
    QuantidadeDeAlunos = int(input("Qual a quantidade de alunos dessa turma? "))
    while QuantidadeDeAlunos > 40:
        print("O maximo de alunos por tuma é 40, por favor digite novamente a quantidade de alunos ")
        QuantidadeDeAlunos = int(input("Qual a quantidade de alunos dessa turma? "))    
    SomaDeAlunos = SomaDeAlunos + QuantidadeDeAlunos
    cont = cont + 1
Media = int (SomaDeAlunos / QuantidadeDeTurmas)
print("Seu numero medio de alunos por turmas foi de",Media,"alunos")

