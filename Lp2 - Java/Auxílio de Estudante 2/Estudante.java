public class Estudante{
    private String nome;
    private String sexo;
    private String idade;
    private String matricula; 
    private Endereco endereco;
    private Contato contato;
    private Disciplina disciplina;

    public Estudante(){}

    public Estudante(String nome, String sexo, String idade, String matricula, Endereco endereco, Contato contato, Disciplina disciplina){
        this.nome = nome;
        this.sexo = sexo;
        this.idade = idade;
        this.matricula = matricula;
        this.endereco = endereco;
        this.contato = contato;
        this.disciplina = disciplina;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return this.nome;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }
    public String getSexo() {
        return this.sexo;
    }

    public void setIdade(String idade) {
        this.idade = idade;
    }
    public String getIdade() {
        return this.idade;
    }

    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public String getMatricula() {
        return this.matricula;
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

    public void setDisciplina(Disciplina disciplina) {
        this.disciplina = disciplina;
    }
    public Disciplina getDisciplina() {
        return this.disciplina;
    }
}