<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exibe so dados</title>
</head>
<body>
    <h2>Aqui estão os dados da pagina anterior</h2>
</body>
</html>


<?php

if(isset($_POST["nome"]) && isset($_POST["cpf"]) && isset($_POST["rg"]) && isset($_POST["idade"]) && isset($_POST["telefone"]) && isset($_POST["email"]) && isset($_POST["dtNascimento"]) && isset($_POST["sexo"])){
    $nome  = $_POST["nome"];
    $cpf = $_POST["cpf"];
    $rg = $_POST["rg"];
    $idade = $_POST["idade"];
    $telefone = $_POST["telefone"];
    $email = $_POST["email"];
    $dtNascimento = $_POST["dtNascimento"];
    $sexo = $_POST["sexo"];
    echo "</br>Nome = $nome </br>CPF = $cpf </br>RG = $rg </br>Idade = $idade </br>Telefone = $telefone </br> Email = $email </br>Data de nascimento = $dtNascimento </br>Sexo = $sexo";
}


?>