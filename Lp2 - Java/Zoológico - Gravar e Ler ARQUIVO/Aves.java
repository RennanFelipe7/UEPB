public abstract class Aves extends Animal{
    private String voa;
    private String plumagem;

    public Aves(){}

    public Aves(String reino, String filo, String classe ,String ordem, String familia, String genero, String especie, String voa, String plumagem){    
        this.voa = voa;
        this.plumagem = plumagem;
    }

    public void setVoa(String voa) {
        this.voa = voa;
    }public String getVoa() {
        return this.voa;
    }

    public void setPlumagem(String plumagem) {
        this.plumagem = plumagem;
    }public String getPlumagem() {
        return this.plumagem;
    }
    
    

}
