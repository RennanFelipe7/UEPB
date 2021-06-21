public class Paciente extends Pessoa {
    private String dataDeEntradaNoHospital;
    private String dataDeSaidaNoHospital;
    private String ficouInternado;
    private String problemaDeSaude;
    private int classificacaoDeRisco;
    private String horaAtualizacaoClassificacoaDeRsico;
    private ProfissionalDaSaude atendenEnfermeiro = new ProfissionalDaSaude();
    private ProfissionalDaSaude atendendeuMedico = new ProfissionalDaSaude();


    public Paciente(){};

    public Paciente(String nomeCompleto, String cpf, String dataDeNascimento, String sexo, 
    String idade, String endPais , String endEstado, String endCidade, String endBairro, 
    String endRua, String endNumero ,String conCelular, String conEmail, String dataDeEntradaNoHospital, 
    String dataDeSaidaNoHospital, String ficouInternado, String problemaDeSaude, 
    int classificacaoDeRisco, String horaAtualizacaoClassificacoaDeRsico, 

    String enfNome, String enfCpf, String enfSexo, String enfIdade, String enfEndPais,
    String enfEndEstado, String enfEndCidade, String enfEndBairro, String enfendRua, 
    String enfEndNumero, String enfContCelular, String enfContEmail, String enfNumDeIdent,
    
    String medNome, String medCpf, String medSexo, String medIdade, String medEndPais,
    String medEndEstado, String medEndCidade, String medEndBairro, String medendRua, 
    String medEndNumero, String medContCelular, String medContEmail, String medNumDeIdent){

        super.setNomeCompleto(nomeCompleto);
        super.setCpf(cpf);
        super.setDataDeNascimento(dataDeNascimento);
        super.setSexo(sexo);
        super.setIdade(idade);

        Endereco endereco = new Endereco();
        endereco.setPais(endPais);
        endereco.setEstado(endEstado);
        endereco.setCidade(endCidade);
        endereco.setBairro(endBairro);
        endereco.setRua(endRua);
        endereco.setNumero(endNumero);
        super.setEndereco(endereco); 

        Contato contato = new Contato();
        contato.setCelular(conCelular);
        contato.setEmail(conEmail);
        super.setContato(contato); 
        
        this.dataDeEntradaNoHospital = dataDeEntradaNoHospital;
        this.dataDeSaidaNoHospital = dataDeSaidaNoHospital;
        this.ficouInternado = ficouInternado;
        this.problemaDeSaude = problemaDeSaude;
        this.classificacaoDeRisco = classificacaoDeRisco;
        this.horaAtualizacaoClassificacoaDeRsico = horaAtualizacaoClassificacoaDeRsico;

        Endereco enderecoEnf = new Endereco();
        Contato contatoEnf = new Contato();
        atendenEnfermeiro.setNomeCompleto(enfNome);
        atendenEnfermeiro.setCpf(enfCpf);
        atendenEnfermeiro.setSexo(enfSexo);
        atendenEnfermeiro.setIdade(enfIdade);
        enderecoEnf.setPais(enfEndPais); 
        enderecoEnf.setEstado(enfEndEstado);
        enderecoEnf.setCidade(enfEndCidade);
        enderecoEnf.setBairro(enfEndBairro);
        enderecoEnf.setRua(enfendRua);
        enderecoEnf.setNumero(enfEndNumero);
        atendenEnfermeiro.setEndereco(enderecoEnf); 
        contatoEnf.setCelular(enfContCelular);
        contatoEnf.setEmail(enfContEmail);
        atendenEnfermeiro.setContato(contatoEnf); 
        atendenEnfermeiro.setNumeroDeIdentificacao(enfNumDeIdent);

        Endereco enderecoMed = new Endereco();
        Contato contatoMed = new Contato();
        atendendeuMedico.setNomeCompleto(medNome);
        atendendeuMedico.setCpf(medCpf);
        atendendeuMedico.setSexo(medSexo);
        atendendeuMedico.setIdade(medIdade);
        enderecoMed.setPais(medEndPais); 
        enderecoMed.setEstado(medEndEstado);
        enderecoMed.setCidade(medEndCidade);
        enderecoMed.setBairro(medEndBairro);
        enderecoMed.setRua(medendRua);
        enderecoMed.setNumero(medEndNumero);
        atendendeuMedico.setEndereco(enderecoMed); 
        contatoMed.setCelular(medContCelular);
        contatoMed.setEmail(medContEmail);
        atendendeuMedico.setContato(contatoMed); 
        atendendeuMedico.setNumeroDeIdentificacao(medNumDeIdent);
    }

    public void setDataDeEntradaNoHospital(String dataDeEntradaNoHospital) {
        this.dataDeEntradaNoHospital = dataDeEntradaNoHospital;
    }public String getDataDeEntradaNoHospital() {
        return this.dataDeEntradaNoHospital;
    }

    public void setDataDeSaidaNoHospital(String dataDeSaidaNoHospital) {
        this.dataDeSaidaNoHospital = dataDeSaidaNoHospital;
    }public String getDataDeSaidaNoHospital() {
        return this.dataDeSaidaNoHospital;
    }

    public void setFicouInternado(String ficouInternado) {
        this.ficouInternado = ficouInternado;
    }public String getFicouInternado(){
        return this.ficouInternado;
    }

    public void setProblemaDeSaude(String problemaDeSaude) {
        this.problemaDeSaude = problemaDeSaude;
    }public String getProblemaDeSaude() {
        return this.problemaDeSaude;
    }

    public void setClassificacaoDeRisco(int classificacaoDeRisco) {
        this.classificacaoDeRisco = classificacaoDeRisco;
    }public int getClassificacaoDeRisco() {
        return this.classificacaoDeRisco;
    }

    public void setHoraAtualizacaoClassificacoaDeRsico(String horaAtualizacaoClassificacoaDeRsico) {
        this.horaAtualizacaoClassificacoaDeRsico = horaAtualizacaoClassificacoaDeRsico;
    }public String getHoraAtualizacaoClassificacoaDeRsico() {
        return this.horaAtualizacaoClassificacoaDeRsico;
    }

    public void setAtendenEnfermeiro(ProfissionalDaSaude atendenEnfermeiro) {
        this.atendenEnfermeiro = atendenEnfermeiro;
    }public ProfissionalDaSaude getAtendenEnfermeiro() {
        return this.atendenEnfermeiro;
    }
    
    public void setAtendendeuMedico(ProfissionalDaSaude atendendeuMedico) {
        this.atendendeuMedico = atendendeuMedico;
    }public ProfissionalDaSaude getAtendendeuMedico() {
        return this.atendendeuMedico;
    }
}
