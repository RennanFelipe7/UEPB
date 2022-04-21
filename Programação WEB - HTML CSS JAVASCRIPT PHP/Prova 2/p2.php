<!DOCTYPE html>
<html lang=”pt-br”>

    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Soma, Subtração, Multiplicação, Divisão</title>
    </head>

    <body>
        <h1>Informe abaixo os dois valores que seram SOMADOS, SUBTRAIDOS e DIVIDIDOS:</h1>
        <form action="/p2.php" method="POST">
            <label for="n1"><strong>Número 1:</strong></label>
            <input type="number" name="numero1" id="n1" required><br><br>
            <label for="n2"><strong>Número 2:</strong></label>
            <input type="number" name="numero2" id="n2" required><br><br>
            <input type="submit" value="Enviar Números">
        </form>       
    </body>

</html>


<?php
    function soma($n1, $n2){
        return $n1 + $n2;
    }

    function subtracao($n1, $n2){
        return $n1 - $n2;
    }

    function multiplicacao($n1, $n2){
        return $n1 * $n2;
    }

    if(isset ($_POST["numero1"]) && isset($_POST["numero2"])){
        
        $numero1 = $_POST["numero1"];
        $numero2 = $_POST["numero2"];

        $soma = soma($numero1, $numero2);
        $subtracao = subtracao($numero1, $numero2);
        $multiplicacao = multiplicacao($numero1, $numero2);

        echo"<h1>Abaixo se encontra a SOMA, SUBTRAÇÃO e MULTIPLICAÇÃO dos valores $numero1 e $numero2:</h1>";
        echo"<br><h2>Soma = $soma,     Subtração = $subtracao,     Multiplicação = $multiplicacao.</h2>";
    }
?>