public class Gerente extends Funcionario{
    private int numeroDeEquipe;

    public Gerente(String nome, String departamento, double salario, int numeroDeEquipe) {
        super(nome, departamento, salario);
        this.numeroDeEquipe = numeroDeEquipe;
    }

    @Override
    public void calcularBonus(double desconto) {
        double resultado = (getSalario() * 0.20) * (1 - desconto);
        System.out.println("Bônus do gerente após desconto: " + resultado);
    }

    @Override
    public void mostrarInfo() {
        System.out.println(
            "Nome: " + getFuncionario() +
            " | Departamento: " + getDepartamento() +
            " | Número da equipe: " + numeroDeEquipe +
            " | Salário: " + getSalario()
        );
    }
}
