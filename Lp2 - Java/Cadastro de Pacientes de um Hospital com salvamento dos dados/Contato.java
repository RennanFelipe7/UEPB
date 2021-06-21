public class Contato{
    private String celular; 
    private String email;

    public Contato(){};

    public Contato(String celular, String email){
        this.celular = celular;
        this.email = email;
    }

    public void setCelular(String celular) {
        this.celular = celular;
    }public String getCelular() {
        return this.celular;
    }

    public void setEmail(String email) {
        this.email = email;
    }public String getEmail() {
        return this.email;
    }
}