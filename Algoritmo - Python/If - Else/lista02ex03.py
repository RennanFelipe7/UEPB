Nota1 = float(input("Digite sua primiera nota: "))
Nota2 = float(input("Digite sua segunda nota: "))
Media = (Nota1 + Nota2)/2
if Media >= 7:
    print("Você foi aprovado")
elif Media < 7 and Media >=5:
    print("Você foi para a prova final")
else:
    print("Você foi reprovado")