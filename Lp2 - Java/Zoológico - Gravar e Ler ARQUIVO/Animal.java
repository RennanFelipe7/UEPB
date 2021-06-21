public abstract class Animal {
    private String reino;
    private String filo;
    private String classe;
    private String ordem;
    private String familia;
    private String genero;
    private String especie;

    public Animal(){}

    public Animal(String reino, String filo, String classe ,String ordem, String familia, String genero, String especie){
        this.reino = reino;
        this.filo = filo;
        this.classe = classe;
        this.ordem = ordem;
        this.familia = familia;
        this.genero = genero;
        this.especie = especie;
    }

    public void setReino(String reino) {
        this.reino = reino;
    }public String getReino() {
        return this.reino;
    }

    public void setFilo(String filo) {
        this.filo = filo;
    }public String getFilo() {
        return this.filo;
    }

    public void setClasse(String classe) {
        this.classe = classe;
    }public String getClasse() {
        return this.classe;
    }

    public void setOrdem(String ordem) {
        this.ordem = ordem;
    }public String getOrdem() {
        return this.ordem;
    }

    public void setFamilia(String familia) {
        this.familia = familia;
    }public String getFamilia() {
        return this.familia;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }public String getGenero() {
        return this.genero;
    }

    public void setEspecie(String especie) {
        this.especie = especie;
    }public String getEspecie() {
        return this.especie;
    }
}
