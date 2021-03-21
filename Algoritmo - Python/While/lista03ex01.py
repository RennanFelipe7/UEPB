NotaDoAluno = float(input("Por favor digite uma nota entre 0 e 10: "))
while NotaDoAluno < 0 or NotaDoAluno > 10:
    print("Sua nota",NotaDoAluno,"é invalida")  
    NotaDoAluno = float(input("Por favor digite novamente uma nota entre 0 e 10: "))
print("Sua nota",NotaDoAluno,"é valida")