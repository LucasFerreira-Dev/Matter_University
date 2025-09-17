import java.util.ArrayList;

public class Main {
    /**
     * @param args
     */
    public static void main(String[] args) {
        //Adicionando e chamando no arraylist
        ArrayList<Funcionario> trabalhadores = new ArrayList<>();

        //Adicionando os funcionarios
        Funcionario lucas = new Funcionario("Lucas", "TI", 4000);
        Gerente eduarda = new Gerente("Eduarda", "Chefe do departamento 2", 4000, 10);
        Gerente alex = new Gerente("Alex", "Chefe do departamento 3", 4000, 10);
        Vendedor breno = new Vendedor("Breno", "Fala com cliente", 3000, 30);
        Vendedor davi = new Vendedor("Davi", "Chefe do setor", 3000, 20);
        Vendedor luiz = new Vendedor("Luiz", "Balconista", 3000, 16);

        //adicionando todos ao arrays
        trabalhadores.add(lucas);
        trabalhadores.add(eduarda);
        trabalhadores.add(alex);
        trabalhadores.add(breno);
        trabalhadores.add(davi);
        trabalhadores.add(luiz);

        // Percorrendo e chamando os métodos polimórficos
        for (Funcionario f : trabalhadores) {
            f.mostrarInfo();
            f.calcularBonus(0.1);
            System.out.println("-----------------------");
        }
    }
}
