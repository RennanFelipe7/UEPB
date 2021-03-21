print("Digite 3 numeros inteiros diferentes")
Num1 = int(input("Digite seu primeiro numero: "))
Num2 = int(input("Digite seu segundo numero: "))
Num3 = int(input("Digite seu terceiro numero: "))
if Num3 > Num2 and Num2 > Num1:
    print(Num3,Num2,Num1)
elif Num2 > Num3 and Num3 > Num1:
    print(Num2,Num3,Num1)
elif Num1 > Num2 and Num2 > Num3:
    print(Num1,Num2,Num3)
elif Num1 > Num2 and Num3 > Num1:
    print(Num3,Num1,Num2)
elif Num1 > Num3 and Num3 > Num2:
    print(Num1,Num3,Num2)
elif Num1 > Num3 and Num2 > Num1:
    print(Num2,Num1,Num3)



# Bom professor Ricardo logo no começo da questao ja aviso ao usuario que ele tem que digitar 3 numeros diferentes, assim programando só as possiveis entradas respectivamente. é tambem 3 numeros inteiros assim tratando as variaveis como int.