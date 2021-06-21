public class ProfissionalDaSaude extends Pessoa {
    private String numeroDeIdentificacao;

    ProfissionalDaSaude(){}

    ProfissionalDaSaude(String numeroDeIdentificacao){
        this.numeroDeIdentificacao = numeroDeIdentificacao;
    }

    public void setNumeroDeIdentificacao(String numeroDeIdentificacao) {
        this.numeroDeIdentificacao = numeroDeIdentificacao;
    }public String getNumeroDeIdentificacao() {
        return numeroDeIdentificacao;
    }

}
