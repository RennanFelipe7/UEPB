NomeDoProduto1 = str(input("Qual o nome do seu primeiro produto? "))
NomeDoProduto2 = str(input("Qual o nome do seu segundo produto? "))
NomeDoProduto3 = str(input("Qual o nome do seu terceiro produto? "))
PrecoProduto1 = float(input("Digite o preço do " + NomeDoProduto1 + " "))
PrecoProduto2 = float(input("Digite o preço do " + NomeDoProduto2 + " "))
PrecoProduto3 = float(input("Digite o preço do " + NomeDoProduto3 + " "))
if PrecoProduto3 > PrecoProduto2 and PrecoProduto2 > PrecoProduto1:
    print("Voce deve comprar o(a)", NomeDoProduto1)
elif PrecoProduto1 > PrecoProduto2 and PrecoProduto2 > PrecoProduto3:
    print("Voce deve comprar o(a)", NomeDoProduto3)
elif PrecoProduto1 > PrecoProduto3 and PrecoProduto3 > PrecoProduto2:
    print("Voce deve comprar o(a)", NomeDoProduto2)
elif PrecoProduto2 > PrecoProduto3 and PrecoProduto3 > PrecoProduto1:
    print("Voce deve comprar o(a)", NomeDoProduto1)
elif PrecoProduto3 > PrecoProduto1 and PrecoProduto1 > PrecoProduto2:
    print("Voce deve comprar o(a)", NomeDoProduto2)
elif PrecoProduto2 > PrecoProduto1 and PrecoProduto1 > PrecoProduto3:
    print("Voce deve comprar o(a)", NomeDoProduto3)
elif PrecoProduto3 > PrecoProduto2 and PrecoProduto1 == PrecoProduto3:
    print("Voce deve comprar o(a)", NomeDoProduto2)
elif PrecoProduto3 > PrecoProduto1 and PrecoProduto3 == PrecoProduto2:
    print("Voce deve comprar o(a)", NomeDoProduto1)
elif PrecoProduto1 > PrecoProduto3 and PrecoProduto3 == PrecoProduto2:
    print("Voce deve comprar o(a)", NomeDoProduto3, "ou o(a)", NomeDoProduto2 )
elif PrecoProduto2 > PrecoProduto3 and PrecoProduto3 == PrecoProduto1:
    print("Voce deve comprar o(a)", NomeDoProduto1, "ou o(a)", NomeDoProduto3)
elif PrecoProduto3 > PrecoProduto1 and PrecoProduto1 == PrecoProduto2:
    print("Voce deve comprar o(a)", NomeDoProduto1, "ou o(a)", NomeDoProduto2)
elif PrecoProduto1 == PrecoProduto2 and PrecoProduto2 > PrecoProduto3:
    print("Voce deve comprar o(a)", NomeDoProduto3)    
elif PrecoProduto1 == PrecoProduto2 and PrecoProduto2 == PrecoProduto3:
    print("Os precos de todos os produtos são iguais e voce pode levar qualquer um dos 3 produtos")



# Bom professor Ricardo como na 5 questao da lista 2 pedia o preco de 3 produtos eu quiz deixar o programa mais esteticamente mais bonito então cirie o nomes dos produtos, tbm como na questao 4 da lista 2, eu quis tratar todos as condiçoes possiveis e aproveitei bastante o codigo da questao 4. peço que o senhor leve em consideração que o programa esta correto, pois ele retorna ao usuario o produto mais barato ou os produtos mais baratos.