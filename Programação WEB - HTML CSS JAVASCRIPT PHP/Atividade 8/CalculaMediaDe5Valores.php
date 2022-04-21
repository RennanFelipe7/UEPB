<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Media de 5 valores</title>
</head>
<body>
    <form action="CalculaMediaDe5Valores.php" method="POST" action="./CalculaMediaDe5Valores.php"> 
        <h3>Digite as 5 notas do aluno abaixo :</h3><br>
        <input type="number" name="n1">
        <input type="number" name="n2">
        <input type="number" name="n3">
        <input type="number" name="n4">
        <input type="number" name="n5">
        <input type="submit" value="Enviar notas"><br>
    </form>
</body>
</html>

<?php

use phpDocumentor\Reflection\Types\Null_;

function calculaMedia($n1, $n2, $n3, $n4, $n5){
    return ($n1 + $n2 + $n3 + $n4 + $n5) / 5;
} 

if(isset($_POST["n1"]) && isset($_POST["n2"]) && isset($_POST["n3"]) && isset($_POST["n4"]) && isset($_POST["n5"])){
    $nota1 = $_POST["n1"];
    $nota2 = $_POST["n2"];
    $nota3 = $_POST["n3"];
    $nota4 = $_POST["n4"];
    $nota5 = $_POST["n5"];
    if($nota1 != null && $nota2 != null && $nota3 != null && $nota4 != null && $nota5 != null){
        $media = calculaMedia($nota1, $nota2, $nota3, $nota4, $nota5);
        echo "<br/>A media do aluno foi de $media";
    }else{
        echo "<br/>Digite as 5 notas";
    }
}

?>