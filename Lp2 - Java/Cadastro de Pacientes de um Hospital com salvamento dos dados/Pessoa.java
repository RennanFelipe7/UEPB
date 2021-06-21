public abstract class Pessoa {
    private String nomeCompleto;
    private String cpf;
    private String dataDeNascimento;
    private String sexo;
    private String idade;
    Contato contato = new Contato();
    Endereco endereco = new Endereco();

    public void setNomeCompleto(String nomeCompleto) {
        this.nomeCompleto = nomeCompleto;
    }public String getNomeCompleto() {
        return  this.nomeCompleto;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }public String getCpf() {
        return  this.cpf;
    }

    public void setDataDeNascimento(String dataDeNascimento) {
        this.dataDeNascimento = dataDeNascimento;
    }public String getDataDeNascimento() {
        return  this.dataDeNascimento;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }public String getSexo() {
        return this.sexo;
    }

    public void setIdade(String idade) {
        this.idade = idade;
    }public String getIdade() {
        return this.idade;
    }

    public void setContato(Contato contato) {
        this.contato = contato;
    }public Contato getContato() {
        return  this.contato;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }public Endereco getEndereco() {
        return  this.endereco;
    }

}
