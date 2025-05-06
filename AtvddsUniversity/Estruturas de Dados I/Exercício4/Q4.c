/*
Usando a estrutura Vendas criada aqui nos slides, e a função TotalVendas, crie o programa que lê três vendas do teclado e depois mostra o 
total de vendas usando apenas a função TotalVendas; Que slader omi :(
*/

#include <stdio.h>

typedef struct {
    float valor;
} Vendas;

// Função
float TotalVendas(Vendas vendas[], int tamanho) {
    //variavel local
    float total = 0;

    //laço
    for (int i = 0; i < tamanho; i++) {
        total += vendas[i].valor;
    }

    return total;//return
}

int main() {
    // chamar struct
    Vendas vendas[3];

    // Entrada de dados
    for (int i = 0; i < 3; i++) {
        printf("Digite o valor da venda %d: ", i + 1);
        scanf("%f", &vendas[i].valor);
    }

    // Calculo
    float total = TotalVendas(vendas, 3);

    // Saida
    printf("O total de vendas: %.2f\n", total);

    return 0;
}