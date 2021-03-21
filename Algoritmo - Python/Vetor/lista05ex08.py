TamandoDalista1 = int(input("Qual o tamanho da lista 1? "))
Lista1 = [""] * TamandoDalista1
TamandoDalista2 = int(input("Qual o tamanho da lista 2? "))
Lista2 = [""] * TamandoDalista2
Pular = 0
cont = 0
print()
print("Abaixo nas suas listas o caratctere ""*"" esta indisponível para entrada do usuário")
print()
for r in range(TamandoDalista1):
    ElementoDaLista1 = str(input("Qual o elemento da lista 1? "))
    while ElementoDaLista1 == "*":
        print("Opção inválida, digite novamente o elemento da lista 1")
        ElementoDaLista1 = str(input("Qual o elemento da lista 1? "))
    Lista1[r] = ElementoDaLista1
print()
for k in range(TamandoDalista2):
    ElementoDaLista2 = str(input("Qual o elemento da lista 2? "))
    while ElementoDaLista2 == "*":
        print("Opção inválida, digite novamente o elemento da lista 2")
        ElementoDaLista2 = str(input("Qual o elemento da lista 2? "))
    Lista2[k] = ElementoDaLista2
print() 
for m in range(TamandoDalista1):
    for n in range(m + 1, TamandoDalista1, 1):
        if Lista1[m] == Lista1[n]:
            Lista1[n] = "*"

for x in range(TamandoDalista2):
    for z in range(x + 1, TamandoDalista2, 1):
        if Lista2[x] == Lista2[z]:
            Lista2[z] = "*"

for a in range(TamandoDalista1):
    for b in range(TamandoDalista2):
        if Lista1[a] == "*":
            Pular = 0
        elif Lista1[a] == Lista2[b]:
            print("As listas possui o elemento igual elemento",Lista1[a])
            cont = cont + 1
if cont == 0:
    print("As listas não possui elementos iguais")
# Professor Ricardo como na questão não fala se é uma lista de numeros ou strings, fiz dessa maneira onde de qualquer forma se houver elementos iguais seja numeros ou letras o algoritmo irá funcionar da mesma forma.

# Professor Ricardo como foi perguntado em sala a forma de resolver a situação se houvesse dois ou mais numeros repetidos na mesma lista para não ser imprimido na tela a mensagem varias vezes que aquele elemento estava sendo repetido fiz da seguinte maneira:

# Na linha 7 exibo a mensagem informando que o caractere " * Asterisco " está indisponivel para uso na lista, ou seja o usuário não poderá digitá-lo

# Na linha 11 e na linha 18 o comando While serve para se o usuário digitar o "*" esse elemento da lista não será aceito, informando a mensagem de erro e voltando a pedi-lo até que algo diferente de "*" seja digitado, tanto para a lista 1 quanto para a lista 2 

# Da linha 23 até a linha 31 comparo todos os índices da minha lista com os outros índices dessa mesma lista, afim de encontrar valores repetidos para poder trocar o valor do indice da frente ou maior pelo "*"

# Na linha 35 faço a comparação se tenho o "*" na minha lista se tiver não faço nada, o comando da linha 36 é apenas um auxiliar por que não posso deixa-ló em branco.   

# Essa variavel cont é somente uma auxiliar para se não houver numeros repetidos nas listas aparecer a mensagem que não existe numeros repetidos na lista