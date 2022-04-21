<!DOCTYPE html>
<html lang=”pt-br”>

    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>10 cidades visitadas</title>
    </head>

    <body>
        <h1>Digite abaixo o nome das 10 cidades que você visitou:</h1>
        <form action="/p1.php" method="POST">
            <label for="cidade1"><strong>Cidade 1:</strong></label>
            <input type="text" name="city1" id="cidade1" required><br><br>
            <label for="cidade2"><strong>Cidade 2:</strong></label>
            <input type="text" name="city2" id="cidade2" required><br><br>
            <label for="cidade3"><strong>Cidade 3:</strong></label>
            <input type="text" name="city3" id="cidade3" required><br><br>
            <label for="cidade4"><strong>Cidade 4:</strong></label>
            <input type="text" name="city4" id="cidade4" required><br><br>
            <label for="cidade5"><strong>Cidade 5:</strong></label>
            <input type="text" name="city5" id="cidade5" required><br><br>
            <label for="cidade6"><strong>Cidade 6:</strong></label>
            <input type="text" name="city6" id="cidade6" required><br><br>
            <label for="cidade7"><strong>Cidade 7:</strong></label>
            <input type="text" name="city7" id="cidade7" required><br><br>
            <label for="cidade8"><strong>Cidade 8:</strong></label>
            <input type="text" name="city8" id="cidade8" required><br><br>
            <label for="cidade9"><strong>Cidade 9:</strong></label>
            <input type="text" name="city9" id="cidade9" required><br><br>
            <label for="cidade10"><strong>Cidade 10:</strong></label>
            <input type="text" name="city10" id="cidade10" required><br><br>
            <input type="submit" value="Enviar Cidades">
        </form>
    </body>

</html>

<?php
    if(isset($_POST["city1"]) && isset($_POST["city2"]) && isset($_POST["city3"]) && isset($_POST["city4"]) && isset($_POST["city5"]) && isset($_POST["city6"]) && isset($_POST["city7"]) && isset($_POST["city8"]) && isset($_POST["city9"]) && isset($_POST["city10"])){

        $city1 = $_POST["city1"];
        $city2 = $_POST["city2"];
        $city3 = $_POST["city3"];
        $city4 = $_POST["city4"];
        $city5 = $_POST["city5"];
        $city6 = $_POST["city6"];
        $city7 = $_POST["city7"];
        $city8 = $_POST["city8"];
        $city9 = $_POST["city9"];
        $city10 = $_POST["city10"];

        echo"<h1>As cidades visiadas foram:</h1>";
        
        echo "$city1, $city2, $city3, $city4, $city5, $city6, $city7, $city8, $city9, $city10.";
        
    }
?>