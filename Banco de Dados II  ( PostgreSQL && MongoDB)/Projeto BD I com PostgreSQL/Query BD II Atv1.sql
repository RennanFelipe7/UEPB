create tablespace espacoSqlEasyVac location 'c:/PastaEasyVac';

CREATE DATABASE "EasyVac" TEMPLATE=template0 TABLESPACE=espacoSqlEasyVac;

CREATE TABLE usuario(
	nomeCompleto VARCHAR (50) NOT NULL,
	numeroDoRegistroDeNascimento VARCHAR(50) NOT NULL PRIMARY KEY,
	dataDeNascimento DATE NOT NULL,
	genero VARCHAR(9) NOT NULL,
	email VARCHAR(50) NOT NULL,
	senha VARCHAR(50) NOT NULL
)

CREATE TABLE carteiraDeVacinacao(
	nomeVacina VARCHAR (30) NOT NULL,
	dataDeAplicacao DATE NOT NULL,
	idVacina serial PRIMARY KEY,
	numeroDoRegistroDeNascimento VARCHAR(50) NOT NULL,
	foreign key (numeroDoRegistroDeNascimento) references usuario
	(numeroDoRegistroDeNascimento) on delete cascade
)

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento,
dataDeNascimento, genero, email, senha) VALUES ('Rennan felipe', '12214490',
'1994-08-12', 'Masculino', 'rf@gmail.com',
'Shuraigi733');

INSERT INTO usuario(nomeCompleto, numeroDoRegistroDeNascimento,
dataDeNascimento, genero, email,
senha) VALUES ('Maria Das Graças', '7766223124', '2002-01-04', 'Feminino',
'maria_gracas55@gmail.com', 'ArautoDaInevitabilidade00');

INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao,
numeroDoRegistroDeNascimento) VALUES ('BCG', current_date, 12214490);
INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao,
numeroDoRegistroDeNascimento) VALUES ('Febre Amarela', current_date, 12214490);

INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao,
numeroDoRegistroDeNascimento) VALUES ('Tríplice Viral', current_date, 7766223124);
INSERT INTO carteiraDeVacinacao(nomeVacina, dataDeAplicacao,
numeroDoRegistroDeNascimento) VALUES ('Hepatite B', current_date, 7766223124);

select * from usuario;
select * from carteiraDeVacinacao;

select * from carteiraDeVacinacao where
numeroDoRegistroDeNascimento = '12214490';

update carteiraDeVacinacao SET dataDeAplicacao = current_date
where idVacina = 1;

delete from usuario where numeroDoRegistroDeNascimento = '7766223124';