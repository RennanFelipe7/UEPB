public class Contato {
    private String email;
    private String telefone;
    private String redeSocial;

    public Contato(){}

    public Contato(String email, String telefone, String redeSocial){
        this.email = email;
        this.telefone = telefone;
        this.redeSocial = redeSocial;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    public String getEmail() {
        return this.email;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    public String getTelefone() {
        return this.telefone;
    }

    public void setRedeSocial(String redeSocial) {
        this.redeSocial = redeSocial;
    }
    public String getRedeSocial() {
        return this.redeSocial;
    }
}