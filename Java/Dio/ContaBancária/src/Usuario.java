import java.util.Scanner;

public class Usuario {
    public static void main(String[] args) throws Exception {
        //objetos
        ContaBancaria contaBancaria = new ContaBancaria(); 
        Scanner scanner = new Scanner(System.in);

        // Captura de dados do usuário
        System.out.print("Digite o nome do cliente: ");
        contaBancaria.nomeCliente = scanner.nextLine();

        //teste
        if(contaBancaria.nomeCliente != null && !contaBancaria.nomeCliente.isBlank()) {
            contaBancaria.Acesso();
        }

        contaBancaria.Teste(); // se for false ira finalizar
        
        System.out.print("Digite a agência: ");
        contaBancaria.agencia = scanner.nextLine();

        System.out.print("Digite o número da conta: ");
        contaBancaria.numero = scanner.nextInt();
        scanner.nextLine(); // Consumir buffer

        System.out.print("Digite o valor do saldo: ");
        contaBancaria.saldo = scanner.nextDouble();
        scanner.nextLine(); // Consumir buffer

        contaBancaria.EnvioInformacao();

        //finalizar o scanner
        scanner.close();
    }
}
