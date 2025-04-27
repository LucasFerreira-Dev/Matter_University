/* 
        classe smart tv
1. caracteristicas ligada(boolean), canal(int), volume(int)
2. pode esta ligada ou desligada mudando assim o seu estado
3. volume aumenta ou diminui sempre em +1 e -1
4. mudar canal de 1 em 1

Nota para o projeto de Smart TV: 7/10, vou chorar q raivaaaaaaaa

*/

public class SmartTv {
    //variaveis
    boolean estado = false;
    String tv = "Desligada";
    int canal = 12;
    int volume = 0;

    //ações
    public void ligar(){
        estado = true;
        tv = "Ligada";
    }

    public void desligar(){
        estado = false;
        tv = "Desligada";
    }

    public String volumeTest(){
        if(estado == false){
            return " Tv atualmente desligada";
        } else {
            return " " + volume;
        }
    }

    public String canalTest(){
        if(estado == false){
            return "Tv atualmente desligada";
        } else {
            return "Canal: " + canal;
        }
    }

    public void aumentarVolume(){
        if(estado == true){
            volume = volume + 1;
        } else {
            System.out.println("Impossível aumentar volume: TV desligada.");
        }
    }

    public void diminuirVolume(){
        if (estado == true) {
            if (volume > 0) {
                volume = volume - 1;
            } else {
                System.out.println("O volume já está no mínimo.");
            }
        } else {
            System.out.println("Impossível diminuir volume: TV desligada.");
        }
    }

    public void aumentarCanal(){
        if (estado == true) {
            canal = canal + 1;
        } else {
            System.out.println("Impossível aumentar canal: TV desligada.");
        }
    }

    public void diminuirCanal(){
        if (estado == true) {
            if (canal > 1) {
                canal = canal - 1;
            } else {
                System.out.println("O canal já está no mínimo.");
            }
        } else {
            System.out.println("Impossível diminuir canal: TV desligada.");
        }
    }
}