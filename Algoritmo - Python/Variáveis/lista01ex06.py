SalarioAtualDoFuncionario = float(input("Qual o valor atual do salario de seu funcionario? "))
ValarDoReajuste = float(input("Qual o valor do seu reajuste? " "Por favor informe o valor do seu reajuste normalmente, o programa ira converter automaticamente para porcentagem, ex:50 equivale a 50 porcento , 5 equivale a 5 porcento!"  ))
ValarDoReajuste = ValarDoReajuste/100
PercentualDeReajuste = SalarioAtualDoFuncionario*ValarDoReajuste
NovoSalario = SalarioAtualDoFuncionario+PercentualDeReajuste
print("Seu funcionario passara a receber:", NovoSalario, "reais")

# Bom Ricardo a melhor forma que eu vi para informar ao cliente é dessa forma o programa diz ao usuario que ele mesmo ira converter um numero normal para a forma de porcentagem 