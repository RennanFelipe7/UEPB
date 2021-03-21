while 1 != 0:
    print ("Produto Numero 1")
    ValorDaMercadoria = float(input("Qual o valor da mercadoria? "))
    print("Produto 1",":",ValorDaMercadoria)
    NumeroDoProduto = 2
    ValorDaMercadoriaLaco = 1
    SomaDosPrecosDasMercadorias = 0
    while ValorDaMercadoriaLaco != 0:
        print ("Produto Numero",NumeroDoProduto)
        ValorDaMercadoriaLaco = float(input("Qual o valor da mercadoria? "))
        SomaDosPrecosDasMercadorias = ValorDaMercadoriaLaco + SomaDosPrecosDasMercadorias
        print("Produto",NumeroDoProduto,":",ValorDaMercadoriaLaco)
        NumeroDoProduto = NumeroDoProduto + 1
    SomaDosPrecosDasMercadoriasTotal = SomaDosPrecosDasMercadorias + ValorDaMercadoria
    Dinheiro = float(input("Qual o valor do dinheiro que o cliente pagou? "))
    Troco = Dinheiro - SomaDosPrecosDasMercadoriasTotal
    print ("Lojas Tabajara")
    print("Total",SomaDosPrecosDasMercadoriasTotal)
    print("Dinheiro: R$",Dinheiro)
    print("Troco: R$",Troco)