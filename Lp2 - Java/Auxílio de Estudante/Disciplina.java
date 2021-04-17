public class Disciplina {
    private String nomeDisciplina;
    private String nomeProfessor;
    private String sala;
    private String turno;
    
    public Disciplina(){}

    public Disciplina(String nomeDisciplina, String nomeProfessor, String sala, String turno){
        this.nomeDisciplina = nomeDisciplina;
        this.nomeProfessor = nomeProfessor;
        this.sala = sala;
        this.turno = turno;
    }

    public void setNomeDisciplina(String nomeDisciplina) {
        this.nomeDisciplina = nomeDisciplina;
    }
    public String getNomeDisciplina() {
        return this.nomeDisciplina;
    }

    public void setNomeProfessor(String nomeProfessor) {
        this.nomeProfessor = nomeProfessor;
    }
    public String getNomeProfessor() {
        return this.nomeProfessor;
    }

    public void setSala(String sala) {
        this.sala = sala;
    }
    public String getSala() {
        return this.sala;
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }
    public String getTurno() {
        return this.turno;
    }
}
