public class Estudante{
    private String nome;
    private String idade;
    private String sexo;

    public Estudante(){}

    public Estudante(String nome, String idade, String sexo){
        this.nome = nome;
        this.idade = idade;
        this.sexo = sexo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return this.nome;
    }

    public void setIdade(String idade) {
        this.idade = idade;
    }
    public String getIdade() {
        return this.idade;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public String getSexo() {
        return this.sexo;
    }
}