public abstract class Mamifero extends Animal {

    private int quantidadeMamas;
    private String temPelos;
    protected String somEmitido;
    protected double mesesGestacao;

    public Mamifero(){}

    public Mamifero(int quantidadeMamas, String temPelos, String somEmitido, double mesesGestacao, String reino, String filo, String classe ,String ordem, String familia, String genero, String especie){
        this.quantidadeMamas = quantidadeMamas;
        this.temPelos = temPelos;
        this.somEmitido = somEmitido;
        this.mesesGestacao = mesesGestacao;
    }

    public void setQuantidadeMamas(int quantidadeMamas) {
        this.quantidadeMamas = quantidadeMamas;
    }public int getQuantidadeMamas() {
        return this.quantidadeMamas;
    }
    
    public void setTemPelos(String temPelos) {
        this.temPelos = temPelos;
    }public String getTemPelos() {
        return this.temPelos;
    }

    public void setSomEmitido(String somEmitido) {
        this.somEmitido = somEmitido;
    }public String getSomEmitido() {
        return this.somEmitido;
    }

    public void setMesesGestacao(double mesesGestacao) {
        this.mesesGestacao = mesesGestacao;
    }public double getMesesGestacao() {
        return this.mesesGestacao;
    }

}
