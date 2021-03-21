UsarOCaixa = str(input("Você quer usar o caixa? Digite S para (sim) e N para (não) "))
print()
QuantoACompraCustouAoCliente = 0
TotalDeLucroDoCaixa = 0 
while UsarOCaixa == "S" or UsarOCaixa == "s":
    FecharACompraDesseCliente = "S"
    while FecharACompraDesseCliente == "S" or FecharACompraDesseCliente == "s":        
        Produto = float(input("Qual o preço do produto? "))
        print()
        FecharACompraDesseCliente = str(input("O cliente comprou mais itens? digite S (sim) para continuar e N (não) para finalizar a compra desse cliente "))
        print()
        QuantoACompraCustouAoCliente = QuantoACompraCustouAoCliente + Produto        
    print("A compra custou ao cliente um total de",QuantoACompraCustouAoCliente,"reais")
    print()
    UsarOCaixa = str(input("Você quer usar novamente o caixa? Digite S para (sim) e N para (não) "))
    print()
    TotalDeLucroDoCaixa = TotalDeLucroDoCaixa + QuantoACompraCustouAoCliente
    QuantoACompraCustouAoCliente = 0
print("O caixa apurou no dia um total de",TotalDeLucroDoCaixa,"reais")