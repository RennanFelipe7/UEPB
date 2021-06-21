public abstract class Felinos extends Mamifero{
    private int metrosMaximoEscala;
    
    public Felinos(){}
    
    public Felinos(int metrosMaximoEscala, int quantidadeMamas, String temPelos, String somEmitido, double mesesGestacao, String reino, String filo, String classe ,String ordem, String familia, String genero, String especie){
        this.metrosMaximoEscala = metrosMaximoEscala;
    }
    
    @Override
    public void setSomEmitido(String somEmitido) {
        super.setSomEmitido("Mia");
    }@Override
    public String getSomEmitido() {
        return super.getSomEmitido();
    }

    @Override
    public void setMesesGestacao(double mesesGestacao) {
        super.setMesesGestacao(2);
    }@Override
    public double getMesesGestacao() {
        return super.getMesesGestacao();
    }

    public void setMetrosMaximoEscala(int metrosMaximoEscala) {
        this.metrosMaximoEscala = metrosMaximoEscala;
    }public int getMetrosMaximoEscala() {
        return this.metrosMaximoEscala;
    }
    
   
}
