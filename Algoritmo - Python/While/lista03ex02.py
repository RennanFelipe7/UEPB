NomeDoUsuario = str(input("Qual o nome do seu usuario? "))
Senha = str(input("Qual a sua senha? "))
while NomeDoUsuario == Senha:
    print("ERRO!, o nome do usuario e a senha não pode ser iguais")
    NomeDoUsuario = str(input("Digite novamente o nome do usuario? "))
    Senha = str(input("Digite novamente sua senha? "))
print("Seu cadastro foi finalizado com sucesso")
