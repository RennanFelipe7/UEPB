public class UnidadeTematica {
    private float nota1;
    private float nota2;

    public UnidadeTematica(){}

    public UnidadeTematica(float nota1, float nota2){
        this.nota1 = nota1;
        this.nota2 = nota2;
    }

    public void setNota1(float nota1) {
        this.nota1 = nota1;
    }
    public float getNota1() {
        return this.nota1;
    }

    public void setNota2(float nota2) {
        this.nota2 = nota2;
    }
    public float getNota2() {
        return this.nota2;
    }
}