public class Funcionario {
    private String nome;
    private String departamento;
    private double salario;
    
    public String getFuncionario() { return nome; }
    public double getSalario(){ return salario; }
    public String getDepartamento(){ return departamento; }

    public Funcionario(String nome, String departamento, double salario) {
        this.nome = nome;
        this.departamento = departamento;
        this.salario = salario;
    }

    // Mostrar informações
    public void mostrarInfo() {
        System.out.println("Nome: " + nome + " | Departamento: " + departamento + " | Salário: " + salario);
    }

    // Calcular bônus com desconto
    public void calcularBonus(double desconto) {
        double resultado = (salario * 0.10) * (1 - desconto);
        System.out.println("Bônus após desconto: " + resultado);
    }

    
}
