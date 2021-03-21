Ano = int(input("Qual o ano que você quer verificar se é Bissexto: "))
if Ano%4==0 and Ano%100!=0 or Ano%400==0:
    print("Seu ano de", Ano, "é bissexto")
else:
    print("Seu ano de", Ano, "não é bissexto")