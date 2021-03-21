ValorDaHora = float(input("Qual o valor da sua hora? "))
HorasTrabalhadaNoMes = float(input("Quantas horas você trabalhou no mes? "))
Salario = ValorDaHora*HorasTrabalhadaNoMes
DescontoDoImpostoDeRenda = 0
DescontoDoSindicato = Salario*0.03
FGTSdaEmpresaQpaga = Salario*0.11
SalarioTotal = 0
if Salario <= 900:
    SalarioTotal = Salario-DescontoDoSindicato
    print ("Salario bruto","(",ValorDaHora,"*",HorasTrabalhadaNoMes,")","           :",Salario)
    print ("-IR","0%","                                     :","0")
    print ("(-)  Sindicato (3%)","                     :",DescontoDoSindicato)
    print("FGTS:","           ","                      :",FGTSdaEmpresaQpaga)
    print("Total de desconto","                        :",DescontoDoImpostoDeRenda+DescontoDoSindicato)
    print("Salario liquido" "                          :",SalarioTotal)

elif Salario <= 1500:
    DescontoDoImpostoDeRenda = Salario*0.05
    SalarioTotal = Salario - DescontoDoSindicato - DescontoDoImpostoDeRenda
    print ("Salario bruto","(",ValorDaHora,"*",HorasTrabalhadaNoMes,")","           :",Salario)
    print ("-IR","5%","                                     :",DescontoDoImpostoDeRenda)
    print ("(-)  Sindicato (3%)","                     :",DescontoDoSindicato)
    print("FGTS:","           ","                      :",FGTSdaEmpresaQpaga)
    print("Total de desconto","                        :",DescontoDoImpostoDeRenda+DescontoDoSindicato)
    print("Salario liquido" "                          :",SalarioTotal)

elif Salario<=2500:
    DescontoDoImpostoDeRenda = Salario*0.1
    SalarioTotal = Salario - DescontoDoSindicato - DescontoDoImpostoDeRenda
    print ("Salario bruto","(",ValorDaHora,"*",HorasTrabalhadaNoMes,")","           :",Salario)
    print ("-IR","10%","                                     :",DescontoDoImpostoDeRenda)
    print ("(-)  Sindicato (3%)","                     :",DescontoDoSindicato)
    print("FGTS:","           ","                      :",FGTSdaEmpresaQpaga)
    print("Total de desconto","                        :",DescontoDoImpostoDeRenda+DescontoDoSindicato)
    print("Salario liquido" "                          :",SalarioTotal)

else:
    DescontoDoImpostoDeRenda = Salario*0.2
    SalarioTotal = Salario - DescontoDoSindicato-DescontoDoImpostoDeRenda

    print ("Salario bruto","(",ValorDaHora,"*",HorasTrabalhadaNoMes,")","           :",Salario)
    print ("-IR","20%","                                     :",DescontoDoImpostoDeRenda)
    print ("(-)  Sindicato (3%)","                     :",DescontoDoSindicato)
    print("FGTS:","           ","                      :",FGTSdaEmpresaQpaga)
    print("Total de desconto","                        :",DescontoDoImpostoDeRenda+DescontoDoSindicato)
    print("Salario liquido" "                          :",SalarioTotal)