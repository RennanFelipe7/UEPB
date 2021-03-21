Caractere = input("Caractere: ")
for Linha in range(1,13):
    for Coluna in range(1,13):
        if (Linha + Coluna) <= Linha + Linha :
            print(Caractere, sep = '', end = '')
        else:
            print(' ', sep = '', end = '')
    print()