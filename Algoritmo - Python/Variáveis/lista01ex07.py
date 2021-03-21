SalarioMensal = int(input("Qual seu salario mensal? "))
DespesasMensais = int(input("Qual suas despesas mensais? "))
SalarioAnual = SalarioMensal * 12
DespesasAnuais = DespesasMensais * 12
LucroNoAno = SalarioAnual - DespesasAnuais
Meta = 1000000
AnosParaFicarMilionario = int (Meta / LucroNoAno)
print("Voce ira passar", AnosParaFicarMilionario, "anos para ficar milionario")