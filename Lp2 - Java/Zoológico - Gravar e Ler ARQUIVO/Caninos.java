public abstract class Caninos extends Mamifero {
   
    private String capacidadeFarejar;
    
    public Caninos(){}
    
    public Caninos(String capacidadeFarejar, int quantidadeMamas, String temPelos, String somEmitido, double mesesGestacao, String reino, String filo, String classe ,String ordem, String familia, String genero, String especie){
        this.capacidadeFarejar = capacidadeFarejar;
    }
    
    @Override
    public void setQuantidadeMamas(int quantidadeMamas) {
        super.setQuantidadeMamas(quantidadeMamas);
    }@Override
    public int getQuantidadeMamas() {
        return super.getQuantidadeMamas();
    }

    @Override
    public void setSomEmitido(String somEmitido) {
        super.setSomEmitido("Late");
    }
    @Override
    public String getSomEmitido() {
        return super.getSomEmitido();
    }
    
    @Override
    public void setMesesGestacao(double mesesGestacao) {
        super.setMesesGestacao(mesesGestacao);
    }@Override
    public double getMesesGestacao() {
        return super.getMesesGestacao();
    }

    public void setCapacidadeFarejar(String capacidadeFarejar) {
        this.capacidadeFarejar = capacidadeFarejar;
    }public String getCapacidadeFarejar() {
        return this.capacidadeFarejar;
    }
}
