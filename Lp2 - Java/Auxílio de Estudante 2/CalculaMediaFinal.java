public class CalculaMediaFinal {
    public  float calculamediafinal(float nUT1[], float nUT2[]){
        float somaDasNotas = 0;
        for(int i = 0; i < 4; i++){
            somaDasNotas = somaDasNotas + nUT1[i];
        }
        for(int i = 0; i < 4; i++){
            somaDasNotas = somaDasNotas + nUT2[i];
        }
        return somaDasNotas / 8;
    }
}
