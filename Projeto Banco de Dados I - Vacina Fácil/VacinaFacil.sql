CREATE DATABASE VacinaFacil;

USE VacinaFacil;

CREATE TABLE usuario(
    nomeCompleto VARCHAR (50) NOT NULL,
    numeroDoRegistroDeNascimento VARCHAR(50) NOT NULL PRIMARY KEY,
    dataDeNascimento DATE NOT NULL,
    genero VARCHAR(9) NOT NULL,
    email VARCHAR(50) NOT NULL,
    senha VARCHAR(50) NOT NULL

) ENGINE=InnoDB;

CREATE TABLE carteiraDeVacinacao(
    nomeVacina VARCHAR (30) NOT NULL,
    dataDeAplicacao DATE NOT NULL,
    idVacina INT AUTO_INCREMENT PRIMARY KEY,
    numeroDoRegistroDeNascimento VARCHAR(50) NOT NULL,
    CONSTRAINT fk_UsuarioCartVAC FOREIGN KEY (numeroDoRegistroDeNascimento) REFERENCES usuario(numeroDoRegistroDeNascimento)

) ENGINE=InnoDB;

describe usuario;
describe carteiraDeVacinacao;

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento, dataDeNascimento, genero, email,
senha) VALUES ("Rennan felipe", "12214490", "1994-08-12", "Masculino", "rf@gmail.com", "Shuraigi733");

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento, dataDeNascimento, genero, email,
senha) VALUES ("Maria Das Graças", "7766223124", "2002-01-04", "Feminino", "maria_gracas55@gmail.com", "ArautoDaInevitabilidade00");

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento, dataDeNascimento, genero, email,
senha) VALUES ("Joao Silva", "23578393", "1999-09-23", "Masculino", "jsilva123@gmail.com", "EldlichSenhor");

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento, dataDeNascimento, genero, email,
senha) VALUES ("Ana Barbosa", "738792232", "2021-03-01", "Feminino", "bbarbosa@gmail.com", "Raikiri99");

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento, dataDeNascimento, genero, email,
senha) VALUES ("Marcelo Pereira", "19028082093", "1992-12-26", "Masculino", "marcelo11@gmail.com", "OnimaruOTrovao");


INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao, numeroDoRegistroDeNascimento) VALUES ("BCG", CURDATE(), 12214490);
INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao, numeroDoRegistroDeNascimento) VALUES ("Febre Amarela", CURDATE(), 12214490);

INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao, numeroDoRegistroDeNascimento) VALUES ("BCG", CURDATE(), 7766223124);

INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao, numeroDoRegistroDeNascimento) VALUES ("BCG", CURDATE(), 23578393);

INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao, numeroDoRegistroDeNascimento) VALUES ("Dupla Adulto", CURDATE(), 738792232);

INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao, numeroDoRegistroDeNascimento) VALUES ("Triplice Viral", CURDATE(), 19028082093);


select * from usuario;
select * from carteiraDeVacinacao;

select * from carteiraDeVacinacao where numeroDoRegistroDeNascimento = 12214490;

update carteiraDeVacinacao SET dataDeAplicacao = CURDATE() where idVacina = 2;

delete from carteiraDeVacinacao where idVacina = 2;
