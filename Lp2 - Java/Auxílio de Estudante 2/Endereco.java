public class Endereco {
    private String pais;
    private String estado;
    private String cidade; 
    private String rua;
    private String numero;

    public Endereco(){}

    public Endereco(String pais, String estado, String cidade, String rua, String numero){
        this.pais = pais; 
        this.estado = estado;
        this.cidade = cidade;
        this.rua = rua;
        this.numero = numero;
    }

    public void setPais(String pais) {
        this.pais = pais;
    }
    public String getPais() {
        return this.pais;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }
    public String getEstado() {
        return this.estado;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }
    public String getCidade() {
        return this.cidade;
    }

    public void setRua(String rua) {
        this.rua = rua;
    }
    public String getRua() {
        return this.rua;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }
    public String getNumero() {
        return this.numero;
    }
}
