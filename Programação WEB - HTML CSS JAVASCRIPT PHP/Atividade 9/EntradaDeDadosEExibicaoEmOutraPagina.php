<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Envio de dados de um formulário e apresentação em outra pagina</title>
</head>
<body>
    <form action="/ExibeDados.php" method="POST">
        <h2>Página de recebimento dos dados</h2>
        <h3>Digite abaixo os dados que se pede:</h3>
        <label for="nameId">Nome:</label>
        <input type="text" id="nameId" placeholder="Digite o nome da pessoa" name="nome" required><br><br>
        <label for="cpfId">CPF:</label>
        <input type="text" id="cpfId" placeholder="Digite o CPF da pessoa" name="cpf" required><br><br>
        <label for="rgId">RG:</label>
        <input type="text" id="rgId" placeholder="Digite o RG da pessoa" name="rg" required><br><br>
        <label for="idadeId">Idade:</label>
        <input type="number" id="idadeId" placeholder="Digite a idade da pessoa" name="idade" required><br><br>
        <label for="telId">Telefone:</label>
        <input type="tel" id="telId" placeholder="Digite o telefone da pessoa" name="telefone" required><br><br>
        <label for="emailId">Email:</label>
        <input type="email" id="emailId" placeholder="Digite o email da pessoa" name="email" required><br><br>
        <label for="dtNascimentoId">Data de nascimento:</label>
        <input type="date" id="dtNascimentoId" placeholder="x" name="dtNascimento" required><br>
        <p>Sexo:</p>
        <label for="masculinoId">Masculino</label>
        <input type="radio" name="sexo" value="Masculino" id="masculinoId" required><br>
        <label for="femininoId">Feminino</label>
        <input type="radio" name="sexo" value="Feminino" id="femininoId"><br><br>
        <input type="submit" value="Enviar formulário">
    </form>
</body>
</html>

