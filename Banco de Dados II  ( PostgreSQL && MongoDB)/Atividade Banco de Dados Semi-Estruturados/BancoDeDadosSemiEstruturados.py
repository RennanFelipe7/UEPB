import json
print()
QuantidadeAlunos = int(input("Digite a quantidade de alunos: "))
print()
NomesAlunos = [0] * QuantidadeAlunos
Media = [0] * QuantidadeAlunos
alunos = {"alunos": []}

for i in range(QuantidadeAlunos):
    NomesAlunos[i] = input("Digite o nome do aluno de numero [" + str(i + 1) + "] : ")
    Media[i] = float(input("Digite a media do respectivo aluno: "))
    print()

for j in range(QuantidadeAlunos):
    alunos["alunos"].append(
        {
            "Nome": NomesAlunos[j],
            "Media": Media[j]
        }
    )


with open("Alunos.json", "w") as arquivo:     
    json.dump(alunos, arquivo, indent=4)