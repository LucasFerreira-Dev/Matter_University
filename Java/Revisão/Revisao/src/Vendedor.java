public class Vendedor extends Funcionario{
    private double totalVendas;

    public Vendedor(String nome, String departamento, double salario, double totalVendas) {
        super(nome, departamento, salario);
        this.totalVendas = totalVendas;
    }
    
    @Override
    public void calcularBonus(double desconto) {
        double resultado = ((getSalario() * 0.10) * (1 - desconto)) + (totalVendas * 0.05);
        System.out.println("Bônus do gerente após desconto: " + resultado);
    }

    @Override
    public void mostrarInfo() {
        System.out.println(
            "Nome: " + getFuncionario() +
            " | Departamento: " + getDepartamento() +
            " | Total de vendas:" + totalVendas +
            " | Salário: " + getSalario()
        );
    }
}
