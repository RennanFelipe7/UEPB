Vetor = [0] * 10
Pular = 0
print()
print("Abaixo na sua lista o número ""0"" esta indisponível para entrada do usuário")
print()
cont = 0
for r in range(10):
    ElementoDoVetor = float(input("Qual o elemento do seu vetor ? "))
    while ElementoDoVetor == 0:
        print("Opção inválida, digite novamente o elemento do vetor ")
        ElementoDoVetor = float(input("Qual o elemento do seu vetor ? "))
    Vetor[r] = ElementoDoVetor
for k in range(10):
    for l in range(k + 1, 10, 1):
        for r in range(l + 1, 10, 1):
            if Vetor[k] == Vetor[l] and Vetor[l] == Vetor[r] :
                Vetor[r] = 0 
print()
for a in range(10):
    for b in range(a + 1,10,1):
        if Vetor[a] == 0:
            Pular = 0   
        elif Vetor[a] == Vetor[b]:
            print("Na sua lista existe o valor repetido",Vetor[a])
            cont = cont + 1

if cont == 0:
    print("O Vetor não possui elementos iguais")

# Professor Ricardo nessa questão segue um pouco a lógica da questão 8 dessa mesma lista 5

# Como na própria questão fala que é um vetor de valores, fiz com numeros flutuantes, assim na minha linha 3 o valor que vou atribuir se existirem mais de dois numeros iguais é o zero, assim fica impossibilitado do usuário digitar zero e ser-ló adicionado no vetor
 
# Na linha 6 o while trata disso, se o usuário digitar zero, vai apresentar a mensagem de erro e pedir novamente o numero do vetor até algo diferente de 0 ser digitado
 
# Da linha 10 a 14 precisei usar 3 for aninhados para poder substituir somente um dos 3 valores por 0, diferente da questão 8 onde apenas eu deixava um dos valores repetidos, para poder comparar depois com a outra lista, aqui preciso dos 3 for para poder mudar apenas 1 dos 3 valores para na minha linha 19 ter apenas 2 valores iguais para somente ser imprimido na tela uma única vez a mensagem de valor repetido.