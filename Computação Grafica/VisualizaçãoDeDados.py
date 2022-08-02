!wget -P "/content/drive/MyDrive/CG - Atividade 2" https://dadosabertos.mec.gov.br/images/conteudo/fies/2021/relatorio_inscricao_dados_abertos_fies_22021.csv
import pandas as pd
import pylab
Planilha = pd.read_csv("/content/drive/MyDrive/CG - Atividade 2/relatorio_inscricao_dados_abertos_fies_22021.csv", sep = ";", encoding = "latin")
from google.colab import drive
drive.mount('/content/drive')
Planilha
Planilha.columns 
AlunosPedraBrancaPB = Planilha.loc[(Planilha["UF de residência"] == "PB") & (Planilha["Municipio de residência"] == "PEDRA BRANCA")]
AlunosPedraBrancaPB
AlunosPedraBrancaPBInteressa = AlunosPedraBrancaPB.filter(items = ["Ano do processo seletivo", "Nome do curso", "Média nota Enem" ,"Sexo", 'Redação', 'Matemática e suas Tecnologias', 'Linguagens, Códigos e suas Tec','Ciências Natureza e suas Tec', 'Ciências Humanas e suas Tec',"Data de Nascimento", "Etnia/Cor", "Tipo de escola no ensino médio", "Ano conclusão ensino médio", "Nº de membros Grupo Familiar", "Renda familiar mensal bruta", "Nota Corte Grupo Preferência", "Município da IES"])
AlunosPedraBrancaPBInteressa
Cursos = AlunosPedraBrancaPBInteressa.filter(items = ["Nome do curso"])
Cursos
Cursos["Nome do curso"].value_counts().plot.pie(subplots = True, legend = True ,title = "CURSO", figsize = (11, 6))
pylab.ylabel('')
pylab.legend(loc = 10, bbox_to_anchor=(2,.75), labelspacing=3, ncol=2, fontsize=10)
!wget -P "/content/drive/MyDrive/CG - Atividade 2" http://dadosabertos.mec.gov.br/images/conteudo/fies/2021/relatorio_inscricao_dados_abertos_fies_12021.csv
!wget -P "/content/drive/MyDrive/CG - Atividade 2" https://dadosabertos.mec.gov.br/images/conteudo/fies/2019/relatorio_inscricao_dados_abertos_fies_12019.zip
Planilha20211 = pd.read_csv("/content/drive/MyDrive/CG - Atividade 2/relatorio_inscricao_dados_abertos_fies_12021.csv", sep = ";", encoding = "latin")
Planilha20191 = pd.read_csv("/content/drive/MyDrive/CG - Atividade 2/relatorio_inscricao_dados_abertos_fies_12019.CSV", sep = ";", encoding = "latin")
Planilha20211.columns
Planilha20191.columns
AlunosPatos2021_2 = Planilha.loc[(Planilha["UF de residência"] == "PB") & (Planilha["Municipio de residência"] == "PATOS")]
AlunosPatos2021_2
AlunosPatos2021_1 = Planilha20211.loc[(Planilha20211["UF de residência"] == "PB") & (Planilha20211["Municipio de residência"] == "PATOS")]
AlunosPatos2021_1
AlunosPatos20191 = Planilha20191.loc[(Planilha20191["UF de residência"] == "PB") & (Planilha20191["Municipio de residência"] == "PATOS")]
AlunosPatos20191
Dados2021_2 = AlunosPatos2021_2.filter(items=["Ano do Enem", "Tipo de escola no ensino médio"])
Dados2021_2
Dados2021_1 = AlunosPatos2021_1.filter(items=["Ano do Enem", "Tipo de escola no ensino médio"])
Dados2021_1
Dados2019_1 = AlunosPatos20191.filter(items=["Ano do Enem", "Tipo de escola no ensino médio"])
Dados2019_1
Dados2021_2Base = list(Dados2021_2["Tipo de escola no ensino médio"].value_counts())
Dados2021_1Base = list(Dados2021_1["Tipo de escola no ensino médio"].value_counts())
Dados2019_1Base = list(Dados2019_1["Tipo de escola no ensino médio"].value_counts())
Dados2019_1Base
index = list(Dados2021_1["Tipo de escola no ensino médio"].value_counts().index)
result = pd.DataFrame({'2021.2': Dados2021_2Base,'2021.1': Dados2021_1Base, '2019.1':Dados2019_1Base}, index=index)
Grafico = result.plot.bar(rot=0)