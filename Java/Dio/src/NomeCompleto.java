public class NomeCompleto {
    public static void main (String[] args){
        String primeiroNome = "Lucas";
        String segundoNome = "Gabriel";

        String nomeCompleto = nomeCompleto(primeiroNome, segundoNome);
        System.out.println(nomeCompleto);
    }
 
    //criando um metodo praticamente é uma função
    public static String nomeCompleto (String primeiroNome, String segundoNome) {
        return "Resultado do metodo " + primeiroNome.concat(" ").concat(segundoNome);
    }
}
