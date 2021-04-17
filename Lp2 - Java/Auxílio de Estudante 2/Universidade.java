public class Universidade {
    private String nomeUniversidade;
    private String campus;
    private Endereco endereco;
    private Contato contato;
    private Estudante estudante;

    public Universidade(){}

    public Universidade(String nomeUniversidade, String campus, Endereco endereco, Contato contato, Estudante estudante){
        this.nomeUniversidade = nomeUniversidade;
        this.campus = campus;
        this.endereco = endereco;
        this.contato = contato;
        this.estudante = estudante;
    }

    public void setNomeUniversidade(String nomeUniversidade) {
        this.nomeUniversidade = nomeUniversidade;
    }
    public String getNomeUniversidade() {
        return this.nomeUniversidade;
    }

    public void setCampus(String campus) {
        this.campus = campus;
    }
    public String getCampus() {
        return this.campus;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }
    public Endereco getEndereco() {
        return this.endereco;
    }

    public void setContato(Contato contato) {
        this.contato = contato;
    }
    public Contato getContato() {
        return this.contato;
    }

    public void setEstudante(Estudante estudante) {
        this.estudante = estudante;
    }
    public Estudante getEstudante() {
        return this.estudante;
    }
}
