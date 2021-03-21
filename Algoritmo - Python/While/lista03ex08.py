print("Digite dois numeros, lembrando que o primeiro numero tem que ser menor que o segundo, a diferença entre os dois numeros tem que ser maior que 1, e esses dois numeros também não pode ser iguais.")
MenorNumero = int(input("Qual o menor numero do intervalo? "))
MaiorNumero = int(input("Qual o maior numero do intervalo? "))
MaiorNumero = MaiorNumero - 1
while MenorNumero < MaiorNumero:    
    MenorNumero = MenorNumero + 1
    if MenorNumero // 1 == MenorNumero:
        Intervalo = MenorNumero
    print(Intervalo)