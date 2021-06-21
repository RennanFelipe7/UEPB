import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.util.LinkedList;
public class GravarELerArquivos {
    
    private Path path = Paths.get("C:/Users/Cliente/Desktop/Java _2_prova_II_Unidade/Hospital_De_Patos.txt");
    private Charset utf8 = StandardCharsets.UTF_8;
    
    public void criarArquivo(){
        File file = new File("C:/Users/Cliente/Desktop/Java _2_prova_II_Unidade/Hospital_De_Patos.txt");
        try {
            file.createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public void gravarPaciente(LinkedList<Paciente> paciente){ 

       try (BufferedWriter  escrever =  Files.newBufferedWriter(path, utf8, StandardOpenOption.APPEND)) {
           for (Paciente pacDaVez: paciente) {

            escrever.write(pacDaVez.getNomeCompleto()+"#"+pacDaVez.getCpf()+"#"+
            pacDaVez.getDataDeNascimento()+"#"+pacDaVez.getSexo()+"#"+
            pacDaVez.getIdade()+"#"+pacDaVez.getEndereco().getPais()+"#"+
            pacDaVez.getEndereco().getEstado()+"#"+pacDaVez.getEndereco().getCidade()+"#"+
            pacDaVez.getEndereco().getBairro()+"#"+pacDaVez.getEndereco().getRua()+"#"+
            pacDaVez.getEndereco().getNumero()+"#"+pacDaVez.getContato().getCelular()
            +"#"+pacDaVez.getContato().getEmail()+"#"+pacDaVez.getDataDeEntradaNoHospital()
            +"#"+pacDaVez.getDataDeSaidaNoHospital()+"#"+pacDaVez.getFicouInternado()
            +"#"+pacDaVez.getProblemaDeSaude()+"#"+pacDaVez.getClassificacaoDeRisco()
            +"#"+pacDaVez.getHoraAtualizacaoClassificacoaDeRsico()

            +"#"+pacDaVez.getAtendenEnfermeiro().getNomeCompleto()
            +"#"+pacDaVez.getAtendenEnfermeiro().getCpf()
            +"#"+pacDaVez.getAtendenEnfermeiro().getSexo()
            +"#"+pacDaVez.getAtendenEnfermeiro().getIdade()
            +"#"+pacDaVez.getAtendenEnfermeiro().getEndereco().getPais()
            +"#"+pacDaVez.getAtendenEnfermeiro().getEndereco().getEstado()
            +"#"+pacDaVez.getAtendenEnfermeiro().getEndereco().getCidade()
            +"#"+pacDaVez.getAtendenEnfermeiro().getEndereco().getBairro()
            +"#"+pacDaVez.getAtendenEnfermeiro().getEndereco().getRua()
            +"#"+pacDaVez.getAtendenEnfermeiro().getEndereco().getNumero()
            +"#"+pacDaVez.getAtendenEnfermeiro().getContato().getCelular()
            +"#"+pacDaVez.getAtendenEnfermeiro().getContato().getEmail()
            +"#"+pacDaVez.getAtendenEnfermeiro().getNumeroDeIdentificacao() 

            +"#"+pacDaVez.getAtendendeuMedico().getNomeCompleto()
            +"#"+pacDaVez.getAtendendeuMedico().getCpf()
            +"#"+pacDaVez.getAtendendeuMedico().getSexo() 
            +"#"+pacDaVez.getAtendendeuMedico().getIdade()
            +"#"+pacDaVez.getAtendendeuMedico().getEndereco().getPais()
            +"#"+pacDaVez.getAtendendeuMedico().getEndereco().getEstado()
            +"#"+pacDaVez.getAtendendeuMedico().getEndereco().getCidade()
            +"#"+pacDaVez.getAtendendeuMedico().getEndereco().getBairro()
            +"#"+pacDaVez.getAtendendeuMedico().getEndereco().getRua()
            +"#"+pacDaVez.getAtendendeuMedico().getEndereco().getNumero()
            +"#"+pacDaVez.getAtendendeuMedico().getContato().getCelular()
            +"#"+pacDaVez.getAtendendeuMedico().getContato().getEmail()
            +"#"+pacDaVez.getAtendendeuMedico().getNumeroDeIdentificacao()+"\n");
           }                      
        } catch (IOException ex) {
            ex.printStackTrace();
        }   
    }
    
    
    
    public LinkedList<Paciente> lerPaciente(){
        LinkedList <Paciente> paciente= new LinkedList<Paciente>();  
        try(BufferedReader  ler =  Files.newBufferedReader(path, utf8)) {
            String linha;
            while((linha=ler.readLine()) != null){
                String[] dadosDoPaciente = linha.split("#");
                paciente.add(new Paciente(dadosDoPaciente[0],dadosDoPaciente[1],dadosDoPaciente[2],
                dadosDoPaciente[3],dadosDoPaciente[4],dadosDoPaciente[5],dadosDoPaciente[6],
                dadosDoPaciente[7],dadosDoPaciente[8],dadosDoPaciente[9],dadosDoPaciente[10],
                dadosDoPaciente[11],dadosDoPaciente[12],dadosDoPaciente[13],dadosDoPaciente[14],
                dadosDoPaciente[15],dadosDoPaciente[16],Integer.parseInt(dadosDoPaciente[17]),dadosDoPaciente[18],
                dadosDoPaciente[19],dadosDoPaciente[20],dadosDoPaciente[21],dadosDoPaciente[22],
                dadosDoPaciente[23],dadosDoPaciente[24],dadosDoPaciente[25],dadosDoPaciente[26],
                dadosDoPaciente[27],dadosDoPaciente[28],dadosDoPaciente[29],dadosDoPaciente[30],
                dadosDoPaciente[31],dadosDoPaciente[32],dadosDoPaciente[33],dadosDoPaciente[34],
                dadosDoPaciente[35],dadosDoPaciente[36],dadosDoPaciente[37],dadosDoPaciente[38],
                dadosDoPaciente[39],dadosDoPaciente[40],dadosDoPaciente[41],dadosDoPaciente[42],
                dadosDoPaciente[43],dadosDoPaciente[44]));  
            }
        } catch (IOException e) {
            e.getMessage();
        }
        
        return paciente; 
    }
    
    public void mostrarPaciente(LinkedList<Paciente> paciente){
        for (Paciente pac : paciente) {
            System.out.println("\n\n\t\t\t\tDADOS DO PACIENTE " + pac.getNomeCompleto().toUpperCase());
                System.out.println("\nCPF = " + pac.getCpf());
                System.out.println("\nData de nascimento = " + pac.getDataDeNascimento());
                System.out.println("\nSexo = " + pac.getSexo());
                System.out.println("\nIdade = " + pac.getIdade());
                
                System.out.println("\nPais = " + pac.getEndereco().getPais());
                System.out.println("\nEstado = " + pac.getEndereco().getEstado());
                System.out.println("\nCidade = " + pac.getEndereco().getCidade());
                System.out.println("\nBairro = " + pac.getEndereco().getBairro());
                System.out.println("\nRua = " + pac.getEndereco().getRua());
                System.out.println("\nNumero da casa = " + pac.getEndereco().getNumero());

                System.out.println("\nCelular = " + pac.getContato().getCelular());
                System.out.println("\nEmail = " + pac.getContato().getEmail());
                System.out.println("\n\n\t\t\t\t\tPRONTUARIO");
                System.out.println("\nProblema de saude = " + pac.getProblemaDeSaude());

                System.out.println("\nData de entrada no hospital = " + pac.getDataDeEntradaNoHospital());
                System.out.println("\nData de saida do hospital = " + pac.getDataDeSaidaNoHospital());
                System.out.println("\nFicou internado = " + pac.getFicouInternado());
                System.out.println("\nProblema de saude = " + pac.getProblemaDeSaude());

                if(pac.getClassificacaoDeRisco() == 4){
                    System.out.println("\nClassificacao de risco = AZUL");
                }else if(pac.getClassificacaoDeRisco() == 3){
                    System.out.println("\nClassificacao de risco = VERDE");
                }else if(pac.getClassificacaoDeRisco() == 2){
                    System.out.println("\nClassificacao de risco = AMARELO");
                }else{
                    System.out.println("\nClassificacao de risco = VERMELHO");
                }

                System.out.println("\nHora da classificacao da atualizacao de risco = " + pac.getHoraAtualizacaoClassificacoaDeRsico());


                System.out.println("\n\n\t\t\t\tDADOS DO(A) ENFERMEIRO QUE ATENDEU O(A) PACIENTE " + pac.getNomeCompleto().toUpperCase());

                System.out.println("\nNome do Enfermeiro = " + pac.getAtendenEnfermeiro().getNomeCompleto());  //
                System.out.println("\nCPF = " + pac.getAtendenEnfermeiro().getCpf());
                System.out.println("\nSexo = " + pac.getAtendenEnfermeiro().getSexo());
                System.out.println("\nIdade = " + pac.getAtendenEnfermeiro().getIdade());

                System.out.println("\nPais = " + pac.getAtendenEnfermeiro().getEndereco().getPais());
                System.out.println("\nEstado = " + pac.getAtendenEnfermeiro().getEndereco().getEstado());
                System.out.println("\nCidade = " + pac.getAtendenEnfermeiro().getEndereco().getCidade());
                System.out.println("\nBairro = " + pac.getAtendenEnfermeiro().getEndereco().getBairro());
                System.out.println("\nRua = " + pac.getAtendenEnfermeiro().getEndereco().getRua());
                System.out.println("\nNumero da casa = " + pac.getAtendenEnfermeiro().getEndereco().getNumero());

                System.out.println("\nCelular = " + pac.getAtendenEnfermeiro().getContato().getCelular());
                System.out.println("\nEmail = " + pac.getAtendenEnfermeiro().getContato().getEmail());

                System.out.println("\nNumero de identificacao = " + pac.getAtendenEnfermeiro().getNumeroDeIdentificacao());


                System.out.println("\n\n\t\t\t\tDADOS DO(A) MEDICO QUE ATENDEU O(A) PACIENTE " + pac.getNomeCompleto().toUpperCase());

                System.out.println("\nNome do Medico = " + pac.getAtendendeuMedico().getNomeCompleto());
                System.out.println("\nCPF = " + pac.getAtendendeuMedico().getCpf());
                System.out.println("\nSexo = " + pac.getAtendendeuMedico().getSexo());
                System.out.println("\nIdade = " + pac.getAtendendeuMedico().getIdade());

                System.out.println("\nPais = " + pac.getAtendendeuMedico().getEndereco().getPais());
                System.out.println("\nEstado = " + pac.getAtendendeuMedico().getEndereco().getEstado());
                System.out.println("\nCidade = " + pac.getAtendendeuMedico().getEndereco().getCidade());
                System.out.println("\nBairro = " + pac.getAtendendeuMedico().getEndereco().getBairro());
                System.out.println("\nRua = " + pac.getAtendendeuMedico().getEndereco().getRua());
                System.out.println("\nNumero da casa = " + pac.getAtendendeuMedico().getEndereco().getNumero());

                System.out.println("\nCelular = " + pac.getAtendendeuMedico().getContato().getCelular());
                System.out.println("\nEmail = " + pac.getAtendendeuMedico().getContato().getEmail());

                System.out.println("\nNumero de identificacao = " + pac.getAtendendeuMedico().getNumeroDeIdentificacao());
        }
    }

}
