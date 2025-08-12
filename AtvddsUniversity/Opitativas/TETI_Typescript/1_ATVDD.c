#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[20];
    float preco;
    int estoque;
    char categoria[10];
    bool ativo;
} Produto;

typedef struct {
    int produtoId;
    int quantidade;
} Item;

typedef struct {
    int id;
    char data[10];
    Item item;
    char status[20];
} Pedido;

// "Construtor"
Produto novoProduto(int id, const char* nome, float preco, int estoque, const char* categoria, bool ativo) {
    Produto p;
    p.id = id;
    strcpy(p.nome, nome);
    p.preco = preco;
    p.estoque = estoque;
    strcpy(p.categoria, categoria);
    p.ativo = ativo;
    return p;
}

Pedido novoPedido(int id, const char* data, int produtoId, int quantidade, const char* status) {
    //Chamndo
    Pedido pedido;

    //Declarando
    pedido.id = id;
    strcpy(pedido.data, data);
    pedido.item.produtoId = produtoId;
    pedido.item.quantidade = quantidade;
    strcpy(pedido.status, status);

    //retornar
    return pedido;
}


// "Método" para listar
void listarProdutosAtivos(Produto* p) {
    if (p->ativo) {
        printf("\nId: %d\n", p->id);
        printf("Nome: %s\n", p->nome);
        printf("Preco: %.2f\n", p->preco);
        printf("Estoque: %d\n", p->estoque);
        printf("Categoria: %s\n", p->categoria);
        printf("Ativo: %s\n", p->ativo ? "true" : "false");
    } else {
		printf("Nenhum produto ativo.");
        exit(1);
    }
}

void listarPedidos(Pedido* pedido) {
    printf("\n Id: %d\n", pedido->id);
    printf("Data: %s\n", pedido->data);
    printf("Id do produto: %d\n", pedido->item.produtoId);
    printf("Quantidade: %d\n", pedido->item.quantidade);
    printf("Status: %s\n", pedido->status);
}

int main() {
    Produto produtos[2];
    produtos[0] = novoProduto(1, "Abacaxi", 5.89, 30, "fruta", true);
    produtos[1] = novoProduto(2, "Limao", 6.89, 20, "fruta", true);

    Pedido pedidos[2];
    pedidos[0] = novoPedido(1, "11/08/2025", 1, 15, "Enviado");
    pedidos[1] = novoPedido(2, "11/08/2025", 2, 15, "Pendente");

    for (int i = 0; i < 2; i++) {
        listarProdutosAtivos(&produtos[i]);
        listarPedidos(&pedidos[i]);
    }
}
