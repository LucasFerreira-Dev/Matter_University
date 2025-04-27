import java.util.Scanner;

public class Usuario {
    public static void main(String[] args) {
        //chamando classe
        SmartTv SmartTv = new SmartTv();

        //objeto de entrada
        Scanner scanner = new Scanner(System.in);

        //testes 
        System.out.println(SmartTv.estado); 

        while (true) { // Laço infinito
            try {
                System.out.printf("\nStatus atual da SmartTv:\n\tEstado: %s\n\tVolume:%s\n\tCanal: %s\n", SmartTv.tv, SmartTv.volumeTest(), SmartTv.canalTest());

                //perguntas
                System.out.printf("\nDigite a ação necessaria\nMenu SmartTv:\n\t1. Ligar Tv\n\t2. Desligar Tv\n\t3. Passar canal\n\t4. Voltar canal\n\t5. Aumentar volume\n\t6. Diminuir volume\n\t7. Sair\nOpção: ");
                
                //entrada de dados
                String controle = scanner.nextLine();

                switch(controle){
                    case "1":
                        SmartTv.ligar();
                        System.out.println("A TV foi ligada.");
                        break;
                    case "2":
                        SmartTv.desligar();
                        System.out.println("A TV foi desligada.");
                        break;
                    case "3":
                        SmartTv.aumentarCanal();
                        if(SmartTv.estado == true){
                            System.out.println("Canal aumentado.");
                        }
                        break;
                    case "4":
                        SmartTv.diminuirCanal();
                        if(SmartTv.estado == true){
                            System.out.println("Canal diminuído.");    
                        }
                        break;
                    case "5":
                        SmartTv.aumentarVolume();    
                        if(SmartTv.estado == true){
                            System.out.println("Volume aumentado.");    
                        }
                        break;
                    case "6":
                        SmartTv.diminuirVolume();
                        if(SmartTv.estado == true){
                            System.out.println("Volume diminuído.");    
                        }
                        break;
                    case "7":
                        System.out.println("Encerrando o programa...");
                        scanner.close();
                        return; // Encerra o programa
                    default:
                        System.out.println("Opção inválida. Tente novamente.");
                        break;
                }
            } catch (Exception e) {
                System.out.println("Ocorreu um erro: " + e.getMessage());
            }
        }
    }
}