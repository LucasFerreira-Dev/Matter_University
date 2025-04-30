public class Condicionais {
    public static void main(String[] args) throws Exception {
        int nota = 6;
        boolean passou = false;

        if(nota >= 7) {
            passou = true;
            System.out.println("Aprovado");
        } else {
            passou = false;
            System.out.println("Reprovado");
        }

        System.out.println(passou);
    }
}
