TipoDeCombustivel = str(input("Qual o combustivel que você quer abastecer, digite A-ácool,  G-gasolina "))
LitrosASerConsumido = float(input("Quantos litros você deseja abastecer? "))
PrecoDaGasolina = 4.50
PrecoDoAlcool = 3.40
if TipoDeCombustivel == "A" and LitrosASerConsumido <= 20:
    DescontoPorLitro = PrecoDoAlcool*0.03
    DescontoTotal = LitrosASerConsumido*DescontoPorLitro
    ValorAserPago = (LitrosASerConsumido*PrecoDoAlcool)-DescontoTotal
elif TipoDeCombustivel == "A" and LitrosASerConsumido > 20:
    DescontoPorLitro = PrecoDoAlcool*0.05
    DescontoTotal = LitrosASerConsumido*DescontoPorLitro
    ValorAserPago = (LitrosASerConsumido*PrecoDoAlcool)-DescontoTotal
elif TipoDeCombustivel == "G" and LitrosASerConsumido <= 20:
    DescontoPorLitro = PrecoDaGasolina*0.04
    DescontoTotal = LitrosASerConsumido*DescontoPorLitro
    ValorAserPago = (LitrosASerConsumido*PrecoDaGasolina)-DescontoTotal
elif TipoDeCombustivel == "G" and LitrosASerConsumido > 20:
    DescontoPorLitro = PrecoDaGasolina*0.06
    DescontoTotal = LitrosASerConsumido*DescontoPorLitro
    ValorAserPago = (LitrosASerConsumido*PrecoDaGasolina)-DescontoTotal

print("Você ira pagar um total de:",ValorAserPago,"Reais")