import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
public class GravarELerArquivos {
    private Path path = Paths.get("C:/Users/Cliente/Desktop/Java_Atividade_2_Unidade/Papagaio.txt");
    private Charset utf8 = StandardCharsets.UTF_8;
    
    public void gravar(ArrayList<Papagaio> papagaio){
        
       try (BufferedWriter  escrever =  Files.newBufferedWriter(path, utf8)) {
           for (Papagaio louro : papagaio) {
            escrever.write(louro.getReino()+"#"+louro.getFilo()+"#"+louro.getClasse()+"#"+louro.getOrdem()+"#"+louro.getFamilia()+"#"+louro.getGenero()+"#"+louro.getEspecie()+"#"+louro.getVoa()+"#"+louro.getPlumagem()+"#"+louro.getApelido()+"#"+louro.getFraseQueMaisFala()+"#"+louro.getExpectativaDeVida()+"\n");
           }                      
        } catch (IOException ex) {
            ex.printStackTrace();
        }   
    }
    
    
    
    public ArrayList<Papagaio> lerPapagaio(){
        ArrayList <Papagaio> papagaio = new ArrayList<Papagaio>();
        try(BufferedReader  ler =  Files.newBufferedReader(path, utf8)) {
            String linha;
            while((linha=ler.readLine()) != null){
                String[] pegaDadosAnimal = linha.split("#");
               papagaio.add(new Papagaio(pegaDadosAnimal[0], pegaDadosAnimal[1], pegaDadosAnimal[2], pegaDadosAnimal[3], pegaDadosAnimal[4], pegaDadosAnimal[5], pegaDadosAnimal[6], pegaDadosAnimal[7], pegaDadosAnimal[8], pegaDadosAnimal[9], pegaDadosAnimal[10], Float.parseFloat(pegaDadosAnimal[11])));
            }
        } catch (IOException e) {
            e.getMessage();
        }
        
        return papagaio; 
    }
    
    public void mostrarPapagaio(ArrayList<Papagaio> papagaio){
        int numeroDoPapagaio = 1;
        for (Papagaio louro : papagaio) {
            System.out.println("\n\nDados do Papagaio " + numeroDoPapagaio + " : ");
            numeroDoPapagaio ++;
            System.out.println("\nReino = " + louro.getReino());
            System.out.println("\nFilo = " + louro.getFilo());
            System.out.println("\nClasse = " + louro.getClasse());
            System.out.println("\nOrdem = " + louro.getOrdem());
            System.out.println("\nFamilia = " + louro.getFamilia());
            System.out.println("\nGenero = " + louro.getGenero());
            System.out.println("\nEspecie = " + louro.getEspecie());
            System.out.println("\nEle voa = " + louro.getVoa());
            System.out.println("\nPlumagem = " + louro.getPlumagem());
            System.out.println("\nApelido = " + louro.getApelido());
            System.out.println("\nFrase que mais fala = " + louro.getFraseQueMaisFala());
            System.out.println("\nExpectativa de vida = " + louro.getExpectativaDeVida());
        }
    }
}
