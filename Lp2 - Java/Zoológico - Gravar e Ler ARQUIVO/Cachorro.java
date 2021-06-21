public class Cachorro extends Caninos {
    private String raca;

    public Cachorro(){}

    public Cachorro(String raca, String capacidadeFarejar, int quantidadeMamas, String temPelos, String somEmitido, double mesesGestacao, String reino, String filo, String classe ,String ordem, String familia, String genero, String especie){
        this.raca = raca;
    }
    public Cachorro(String raca, int quantidadeMamas){
    }

    public void setRaca(String raca){
        this.raca=raca;
    }public String getRaca(){
        return this.raca;
    }

    
}
