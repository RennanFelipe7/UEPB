Caractere = input("Caractere: ")
print()
for Linha in range(1,13):
    for Coluna in range(1,13):
        if (Linha + Coluna) <= 12 + 1:
            print(Caractere, sep = '', end = '')
        else:
            print(' ', sep = '', end = '')
    print()