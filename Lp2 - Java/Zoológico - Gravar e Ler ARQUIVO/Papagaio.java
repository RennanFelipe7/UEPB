public class Papagaio extends Aves {
    private String apelido;
    private String fraseQueMaisFala;
    private float expectativaDeVida;
    public Papagaio(){}

    public Papagaio(String reino, String filo, String classe ,String ordem, String familia, String genero, String especie, String voa, String plumagem, String apelido, String fraseQueMaisFala, Float expectativaDeVida){
        super.setReino(reino);  
        super.setFilo(filo);  
        super.setClasse(classe);  
        super.setOrdem(ordem);  
        super.setFamilia(familia);  
        super.setGenero(genero);  
        super.setEspecie(especie); 
        super.setPlumagem(plumagem);
        super.setVoa(voa);  
        this.apelido = apelido;
        this.fraseQueMaisFala = fraseQueMaisFala;
        this.expectativaDeVida = expectativaDeVida;  
    }
    public void setApelido(String apelido) {
        this.apelido = apelido;
    }public String getApelido() {
        return this.apelido;
    }

    public void setFraseQueMaisFala(String fraseQueMaisFala) {
        this.fraseQueMaisFala = fraseQueMaisFala;
    }public String getFraseQueMaisFala() {
        return this.fraseQueMaisFala;
    }

    public void setExpectativaDeVida(Float expectativaDeVida) {
        this.expectativaDeVida = expectativaDeVida;
    }public float getExpectativaDeVida() {
        return this.expectativaDeVida;
    }
    
}
