A = float(input("Qual o valor de A: "))
if A == 0:
    print("Sua equação não é do 2 grau")
else:
    B = float(input("Qual o valor de B: "))
    C = float(input("Qual o valor de C: "))
    Delta = B**2 - (4*A*C)
    if Delta < 0:
        print("A equação não possui raizes reais")
    elif Delta == 0:
        X = -B/(2*A)
        print("Sua equação possui apenas uma raiz e ela é:", X)
    else:
        X1=((-B)+(Delta**(1/2)))/(2*A) 
        X2=((-B)-(Delta**(1/2)))/(2*A)
        print("Existe duas raizes reais que são:",X1,"e",X2)