public class Gato extends Felinos {
    private String raca;

    public Gato(){}

    public Gato(String raca, int metrosMaximoEscala, int quantidadeMamas, String temPelos, String somEmitido, double mesesGestacao, String reino, String filo, String classe ,String ordem, String familia, String genero, String especie){
        this.raca = raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }public String getRaca() {
        return this.raca;
    }
}
