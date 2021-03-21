Caractere = input("Caractere: ")
print()
for linha in range(1,13):
    for coluna in range(1,13):
        if linha == coluna:
            print(Caractere, Caractere, sep = '', end = '')
        else:
            print(' ', sep = '', end = ' ')
    print()