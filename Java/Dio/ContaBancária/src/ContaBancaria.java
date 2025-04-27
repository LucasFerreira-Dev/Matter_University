public class ContaBancaria {
    //variaveis
    String agencia, nomeCliente;
    int numero;
    double saldo;
    Boolean acesso = false;

    //metodos
    public void Acesso(){
        acesso = true;
    }

    public void Teste(){
        if(!acesso){
            System.out.println("Infelizmente você não possui autorização para responder");
            System.exit(0);
        }
    }

    public void EnvioInformacao() {
        System.out.printf("Olá %s, obrigado por criar uma conta em nosso banco, sua agência é %s, conta %d e seu saldo %.2f já está disponível para saque.", nomeCliente, agencia, numero, saldo);
    }
}
