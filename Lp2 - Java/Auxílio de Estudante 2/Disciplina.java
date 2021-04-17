public class Disciplina {
    private float notasUT1[] = new float[4];
    private float notasUT2[] = new float[4];
    private float provaFinal;
    private String nomeDisciplina;
    private String numeroFaltas;
    private String nomeProfessor;
    private String periodoLetivo;

    public Disciplina(){}

    public Disciplina(float[] notasUT1, float[] notasUT2, float provaFinal, String nomeDisciplina, String numeroFaltas, String nomeProfessor ,String periodoLetivo){
        this.notasUT1 = notasUT1;
        this.notasUT2 = notasUT2;
        this.provaFinal = provaFinal;
        this.nomeDisciplina = nomeDisciplina;
        this.numeroFaltas = numeroFaltas;
        this.nomeProfessor = nomeProfessor; 
        this.periodoLetivo = periodoLetivo;
    }

    public void setNotasUT1(float[] notasUT1) {
        this.notasUT1 = notasUT1;
    }
    public float[] getNotasUT1() {
        return this.notasUT1;
    }

    public void setNotasUT2(float[] notasUT2) {
        this.notasUT2 = notasUT2;
    }
    public float[] getNotasUT2() {
        return this.notasUT2;
    }

    public void setProvaFinal(float provaFinal) {
        this.provaFinal = provaFinal;
    }
    public float getProvaFinal() {
        return this.provaFinal;
    }
    
    public void setNomeDisciplina(String nomeDisciplina) {
        this.nomeDisciplina = nomeDisciplina;
    }
    public String getNomeDisciplina() {
        return this.nomeDisciplina;
    }

    public void setNumeroFaltas(String numeroFaltas) {
        this.numeroFaltas = numeroFaltas;
    }
    public String getNumeroFaltas() {
        return this.numeroFaltas;
    }

    public void setNomeProfessor(String nomeProfessor) {
        this.nomeProfessor = nomeProfessor;
    }
    public String getNomeProfessor() {
        return this.nomeProfessor;
    }

    public void setPeriodoLetivo(String periodoLetivo) {
        this.periodoLetivo = periodoLetivo;
    }
    public String getPeriodoLetivo() {
        return this.periodoLetivo;
    }
}
