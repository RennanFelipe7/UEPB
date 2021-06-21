import java.util.Scanner;
import java.util.Date;
import java.text.SimpleDateFormat;
import java.util.LinkedList;



public class Hospital {
    Scanner Entrada = new Scanner(System.in);
    public void cadastrarPaciente(LinkedList <Paciente> listaDePaciente){
        Paciente paciente = new Paciente();
        System.out.println("\n\n\t\t\t\tCADASTRO DO PACIENTE E CHEGADA NA RECEPCAO");
        System.out.print("\nDigite o nome do paciente : ");
        paciente.setNomeCompleto(Entrada.nextLine());
        System.out.print("\nDigite o cpf do(a) paciente " + paciente.getNomeCompleto() + " : ");
        paciente.setCpf(Entrada.nextLine());
        System.out.print("\nDigite a data de nascimento do(a) paciente " + paciente.getNomeCompleto() + " : ");
        paciente.setDataDeNascimento(Entrada.nextLine());
        System.out.print("\nDigite o sexo do(a) paciente " + paciente.getNomeCompleto() + " : ");
        paciente.setSexo(Entrada.nextLine());
        System.out.print("\nDigite a idade do(a) paciente " + paciente.getNomeCompleto() + " : ");
        paciente.setIdade(Entrada.nextLine());

        Endereco endereco = new Endereco();
        System.out.print("\nDigite o país do(a) paciente " + paciente.getNomeCompleto() + " : ");
        endereco.setPais(Entrada.nextLine());
        System.out.print("\nDigite o estado do(a) paciente " + paciente.getNomeCompleto() + " : ");
        endereco.setEstado(Entrada.nextLine());
        System.out.print("\nDigite a cidade do(a) paciente " + paciente.getNomeCompleto() + " : ");
        endereco.setCidade(Entrada.nextLine());
        System.out.print("\nDigite o bairro do(a) paciente " + paciente.getNomeCompleto() + " : ");
        endereco.setBairro(Entrada.nextLine());
        System.out.print("\nDigite a rua do(a) paciente " + paciente.getNomeCompleto() + " : ");
        endereco.setRua(Entrada.nextLine());
        System.out.print("\nDigite o numero da casa do(a) paciente " + paciente.getNomeCompleto() + " : ");
        endereco.setNumero(Entrada.nextLine());

        paciente.setEndereco(endereco);

        Contato contato = new Contato();
        System.out.print("\nDigite o celular do(a) paciente " + paciente.getNomeCompleto() + " : ");
        contato.setCelular(Entrada.nextLine());
        System.out.print("\nDigite o email do(a) paciente " + paciente.getNomeCompleto() + " : ");
        contato.setEmail(Entrada.nextLine());

        paciente.setContato(contato);

        
        System.out.println("\n\n\t\t\t\t\tTRIAGEM NA ENFERMAGEM");
        System.out.println("\nData de entrada no hospital atribuida automaticamente ");
        Date data = new Date();
        SimpleDateFormat dataFormatada = new SimpleDateFormat ("d : M : y");
        paciente.setDataDeEntradaNoHospital(dataFormatada.format(data));
        System.out.print("\nDigite a data de saida do(a) paciente " + paciente.getNomeCompleto() + " : ");
        paciente.setDataDeSaidaNoHospital(Entrada.nextLine());
        System.out.print("\nO(A) paciente " + paciente.getNomeCompleto() + " ficou internado : ");
        paciente.setFicouInternado(Entrada.nextLine());
        System.out.print("\nDigite o problema de saude do(a) paciente " + paciente.getNomeCompleto() + " : ");
        paciente.setProblemaDeSaude(Entrada.nextLine());
        System.out.print("\nDigite a classificacao de risco do(a) paciente " + paciente.getNomeCompleto() + " : ");
        System.out.println("1 - Vermelho    2 - Amarelo   3 - Verde   4 - Azul");
        int classificacao;
        System.out.print("\nClassificacao : ");
        classificacao = Entrada.nextInt();
        while(classificacao < 1 || classificacao > 4){
            System.out.print("\nClassificacao invalida, Digite novamente a classificacao : ");
            classificacao = Entrada.nextInt();
        }
        paciente.setClassificacaoDeRisco(classificacao);
        Entrada.nextLine();

        SimpleDateFormat horaFormatada = new SimpleDateFormat("H : mm : ss");
        paciente.setHoraAtualizacaoClassificacoaDeRsico(horaFormatada.format(data));
        System.out.println("\nHora da atualizacao da classificacao de risco atribuida automaticamente ");

        System.out.println("\n\n\t\t\t\tCADASTRO DO(A) ENFERMEIRO QUE ATENDEU O(A) PACIENTE " + paciente.getNomeCompleto().toUpperCase());

        ProfissionalDaSaude enfermeiro = new ProfissionalDaSaude();
        System.out.print("\nDigite o nome do Enfermeiro : ");
        enfermeiro.setNomeCompleto(Entrada.nextLine());
        System.out.print("\nDigite o cpf do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enfermeiro.setCpf(Entrada.nextLine());
        System.out.print("\nDigite o sexo do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enfermeiro.setSexo(Entrada.nextLine());
        System.out.print("\nDigite a idade do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enfermeiro.setIdade(Entrada.nextLine());

        Endereco enderecoEnfermeiro = new Endereco();
        System.out.print("\nDigite o país do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enderecoEnfermeiro.setPais(Entrada.nextLine());
        System.out.print("\nDigite o estado do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enderecoEnfermeiro.setEstado(Entrada.nextLine());
        System.out.print("\nDigite a cidade do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enderecoEnfermeiro.setCidade(Entrada.nextLine());
        System.out.print("\nDigite o bairro do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enderecoEnfermeiro.setBairro(Entrada.nextLine());
        System.out.print("\nDigite a rua do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enderecoEnfermeiro.setRua(Entrada.nextLine());
        System.out.print("\nDigite o numero da casa do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enderecoEnfermeiro.setNumero(Entrada.nextLine());

        enfermeiro.setEndereco(enderecoEnfermeiro);

        Contato contatoEnfermeiro = new Contato();
        System.out.print("\nDigite o celular do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        contatoEnfermeiro.setCelular(Entrada.nextLine());
        System.out.print("\nDigite o email do(a) Enfermeiro" + enfermeiro.getNomeCompleto() + " : ");
        
        contatoEnfermeiro.setEmail(Entrada.nextLine());

        System.out.print("\nDigite o numero de identificacao do(a) Enfermeiro " + enfermeiro.getNomeCompleto() + " : ");
        enfermeiro.setNumeroDeIdentificacao(Entrada.nextLine());
        
        enfermeiro.setContato(contatoEnfermeiro);

        paciente.setAtendenEnfermeiro(enfermeiro);


        System.out.println("\n\n\t\t\t\tCADASTRO DO(A) MEDICO QUE ATENDEU O(A) PACIENTE " + paciente.getNomeCompleto().toUpperCase());

        ProfissionalDaSaude medico = new ProfissionalDaSaude();
        System.out.print("\nDigite o nome do Medico: ");
        medico.setNomeCompleto(Entrada.nextLine());
        System.out.print("\nDigite o cpf do(a) Medico " + medico.getNomeCompleto() + " : ");
        medico.setCpf(Entrada.nextLine());
        System.out.print("\nDigite o sexo do(a) Medico " + medico.getNomeCompleto() + " : ");
        medico.setSexo(Entrada.nextLine());
        System.out.print("\nDigite a idade do(a) Medico " + medico.getNomeCompleto() + " : ");
        medico.setIdade(Entrada.nextLine());

        Endereco enderecoMedico = new Endereco();
        System.out.print("\nDigite o país do(a) Medico " + medico.getNomeCompleto() + " : ");
        enderecoMedico.setPais(Entrada.nextLine());
        System.out.print("\nDigite o estado do(a) Medico " + medico.getNomeCompleto() + " : ");
        enderecoMedico.setEstado(Entrada.nextLine());
        System.out.print("\nDigite a cidade do(a) Medico " + medico.getNomeCompleto() + " : ");
        enderecoMedico.setCidade(Entrada.nextLine());
        System.out.print("\nDigite o bairro do(a) Medico " + medico.getNomeCompleto() + " : ");
        enderecoMedico.setBairro(Entrada.nextLine());
        System.out.print("\nDigite a rua do(a) Medico " + medico.getNomeCompleto() + " : ");
        enderecoMedico.setRua(Entrada.nextLine());
        System.out.print("\nDigite o numero da casa do(a) Medico " + medico.getNomeCompleto() + " : ");
        enderecoMedico.setNumero(Entrada.nextLine());

        medico.setEndereco(enderecoMedico);

        Contato contatoMedico = new Contato();
        System.out.print("\nDigite o celular do(a) Medico " + enfermeiro.getNomeCompleto() + " : ");
        contatoMedico.setCelular(Entrada.nextLine());
        System.out.print("\nDigite o email do(a) Medico " + enfermeiro.getNomeCompleto() + " : ");
        
        contatoMedico.setEmail(Entrada.nextLine());

        System.out.print("\nDigite o numero de identificacao do(a) Medico " + enfermeiro.getNomeCompleto() + " : ");
        medico.setNumeroDeIdentificacao(Entrada.nextLine());
        
        medico.setContato(contatoMedico);

        paciente.setAtendendeuMedico(medico);
        boolean achou4Azul = false; 
        boolean achou3Verde = false;
        boolean achou2Amarelo = false;
        if(paciente.getClassificacaoDeRisco() == 4){
            listaDePaciente.add(paciente);
        }else if(paciente.getClassificacaoDeRisco() == 3){
            for(int i = 0; i < listaDePaciente.size(); i++){
                if (listaDePaciente.get(i).getClassificacaoDeRisco() == 4){
                    listaDePaciente.add(i, paciente);
                    achou4Azul = true;
                    break;
                }
            }if (! achou4Azul ){
                listaDePaciente.add(paciente);
            }
        }else if(paciente.getClassificacaoDeRisco() == 2){
            for(int i = 0; i<listaDePaciente.size(); i++){
                if (listaDePaciente.get(i).getClassificacaoDeRisco() == 3){
                    listaDePaciente.add(i, paciente);
                    achou3Verde = true;
                    break;
                }
            }
            if (! achou3Verde){
                achou4Azul = false;
                for(int i = 0; i<listaDePaciente.size(); i++){
                    if (listaDePaciente.get(i).getClassificacaoDeRisco() == 4){
                        listaDePaciente.add(i, paciente);
                        achou4Azul = true;
                        break;
                    }
                }
                if(! achou4Azul && ! achou3Verde ){
                    listaDePaciente.add(paciente);
                }
            }
        }else{
            achou2Amarelo = false;
            achou3Verde = false;
            achou4Azul = false;
            for(int i = 0; i < listaDePaciente.size(); i++){
                if(listaDePaciente.get(i).getClassificacaoDeRisco() == 2){
                    listaDePaciente.add(i, paciente);
                    achou2Amarelo = true;
                    break;
                }
            }
            if(! achou2Amarelo ){
                for(int i = 0; i < listaDePaciente.size(); i++){
                    if(listaDePaciente.get(i).getClassificacaoDeRisco() == 3){
                        listaDePaciente.add(i, paciente);
                        achou3Verde = true;
                        break;
                    }
                }
            if(! achou2Amarelo && ! achou3Verde ){
                for(int i = 0; i < listaDePaciente.size(); i++){
                    if(listaDePaciente.get(i).getClassificacaoDeRisco() == 4){
                        listaDePaciente.add(i, paciente);
                        achou4Azul = true;
                        break;
                    }
                }
            }
            if(! achou2Amarelo && ! achou3Verde && ! achou4Azul){
                listaDePaciente.add(paciente);
                }
            }
        }
    
    }


    public void mostrarPaciente(LinkedList <Paciente> listaDePaciente){
        String nomeAMostrar;
        boolean achou = false;
        System.out.print("\nQual o nome do paciente para mostrar os dados do mesmo(a) : ");
        nomeAMostrar = Entrada.nextLine();
        for (Paciente paciente : listaDePaciente) { 
            if(paciente.getNomeCompleto().equals(nomeAMostrar) == true){
                achou = true;
                System.out.println("\n\n\t\t\t\tDADOS DO PACIENTE " + paciente.getNomeCompleto().toUpperCase());
                System.out.println("\nCPF = " + paciente.getCpf());
                System.out.println("\nData de nascimento = " + paciente.getDataDeNascimento());
                System.out.println("\nSexo = " + paciente.getSexo());
                System.out.println("\nIdade = " + paciente.getIdade());
                
                System.out.println("\nPais = " + paciente.getEndereco().getPais());
                System.out.println("\nEstado = " + paciente.getEndereco().getEstado());
                System.out.println("\nCidade = " + paciente.getEndereco().getCidade());
                System.out.println("\nBairro = " + paciente.getEndereco().getBairro());
                System.out.println("\nRua = " + paciente.getEndereco().getRua());
                System.out.println("\nNumero da casa = " + paciente.getEndereco().getNumero());

                System.out.println("\nCelular = " + paciente.getContato().getCelular());
                System.out.println("\nEmail = " + paciente.getContato().getEmail());
                System.out.println("\n\n\t\t\t\t\tPRONTUARIO");
                System.out.println("\nProblema de saude = " + paciente.getProblemaDeSaude());

                System.out.println("\nData de entrada no hospital = " + paciente.getDataDeEntradaNoHospital());
                System.out.println("\nData de saida do hospital = " + paciente.getDataDeSaidaNoHospital());
                System.out.println("\nFicou internado = " + paciente.getFicouInternado());
                System.out.println("\nProblema de saude = " + paciente.getProblemaDeSaude());

                if(paciente.getClassificacaoDeRisco() == 4){
                    System.out.println("\nClassificacao de risco = AZUL");
                }else if(paciente.getClassificacaoDeRisco() == 3){
                    System.out.println("\nClassificacao de risco = VERDE");
                }else if(paciente.getClassificacaoDeRisco() == 2){
                    System.out.println("\nClassificacao de risco = AMARELO");
                }else{
                    System.out.println("\nClassificacao de risco = VERMELHO");
                }

                System.out.println("\nHora da classificacao da atualizacao de risco = " + paciente.getHoraAtualizacaoClassificacoaDeRsico());


                System.out.println("\n\n\t\t\t\tDADOS DO(A) ENFERMEIRO QUE ATENDEU O(A) PACIENTE " + paciente.getNomeCompleto().toUpperCase());

                System.out.println("\nNome do Enfermeiro = " + paciente.getAtendenEnfermeiro().getNomeCompleto());
                System.out.println("\nCPF = " + paciente.getAtendenEnfermeiro().getCpf());
                System.out.println("\nSexo = " + paciente.getAtendenEnfermeiro().getSexo());
                System.out.println("\nIdade = " + paciente.getAtendenEnfermeiro().getIdade());

                System.out.println("\nPais = " + paciente.getAtendenEnfermeiro().getEndereco().getPais());
                System.out.println("\nEstado = " + paciente.getAtendenEnfermeiro().getEndereco().getEstado());
                System.out.println("\nCidade = " + paciente.getAtendenEnfermeiro().getEndereco().getCidade());
                System.out.println("\nBairro = " + paciente.getAtendenEnfermeiro().getEndereco().getBairro());
                System.out.println("\nRua = " + paciente.getAtendenEnfermeiro().getEndereco().getRua());
                System.out.println("\nNumero da casa = " + paciente.getAtendenEnfermeiro().getEndereco().getNumero());

                System.out.println("\nTelefone = " + paciente.getAtendenEnfermeiro().getContato().getCelular());
                System.out.println("\nEmail = " + paciente.getAtendenEnfermeiro().getContato().getEmail());

                System.out.println("\nNumero de identificacao = " + paciente.getAtendenEnfermeiro().getNumeroDeIdentificacao());


                System.out.println("\n\n\t\t\t\tDADOS DO(A) MEDICO QUE ATENDEU O(A) PACIENTE " + paciente.getNomeCompleto().toUpperCase());

                System.out.println("\nNome do Medico = " + paciente.getAtendendeuMedico().getNomeCompleto());
                System.out.println("\nCPF = " + paciente.getAtendendeuMedico().getCpf());
                System.out.println("\nSexo = " + paciente.getAtendendeuMedico().getSexo());
                System.out.println("\nIdade = " + paciente.getAtendendeuMedico().getIdade());

                System.out.println("\nPais = " + paciente.getAtendendeuMedico().getEndereco().getPais());
                System.out.println("\nEstado = " + paciente.getAtendendeuMedico().getEndereco().getEstado());
                System.out.println("\nCidade = " + paciente.getAtendendeuMedico().getEndereco().getCidade());
                System.out.println("\nBairro = " + paciente.getAtendendeuMedico().getEndereco().getBairro());
                System.out.println("\nRua = " + paciente.getAtendendeuMedico().getEndereco().getRua());
                System.out.println("\nNumero da casa = " + paciente.getAtendendeuMedico().getEndereco().getNumero());

                System.out.println("\nTelefone = " + paciente.getAtendendeuMedico().getContato().getCelular());
                System.out.println("\nEmail = " + paciente.getAtendendeuMedico().getContato().getEmail());

                System.out.println("\nNumero de identificacao = " + paciente.getAtendendeuMedico().getNumeroDeIdentificacao());
                break;

                
            
            }
        } 
        if(! achou){
            System.out.println("\nNao existe paciente cadastrado com esse nome ");
        }  
    }
    public void mostrarERetirarOPacienteDaFila(LinkedList <Paciente> listaDePaciente){
        for (Paciente paciente : listaDePaciente) {
            System.out.println("\nPaciente que foi retirado da fila = " + paciente.getNomeCompleto());
            if(paciente.getClassificacaoDeRisco() == 4){
                System.out.println("\nClassificacao de risco = AZUL");
            }else if(paciente.getClassificacaoDeRisco() == 3){
                System.out.println("\nClassificacao de risco = VERDE");
            }else if(paciente.getClassificacaoDeRisco() == 2){
                System.out.println("\nClassificacao de risco = AMARELO");
            }else{
                System.out.println("\nClassificacao de risco = VERMELHO");
            }
            listaDePaciente.poll();
            break;
        }
    } 
}
