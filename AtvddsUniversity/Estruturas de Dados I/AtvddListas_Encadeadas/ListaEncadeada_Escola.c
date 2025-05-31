#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct para lista encadeada de nomes
typedef struct ListaNomes {
    char nome[100];
    struct ListaNomes* proximo;
} ListaNomes;

// Função para criar lista vazia
ListaNomes* inicioNomes() {
    return NULL;
}

// Função para inserir nome no início da lista
ListaNomes* inserirNome(ListaNomes* lista, const char* nome) {
    ListaNomes* novo = (ListaNomes*)malloc(sizeof(ListaNomes));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    strncpy(novo->nome, nome, 99);
    novo->nome[99] = '\0';
    novo->proximo = lista;
    return novo;
}

// Função para imprimir a lista de nomes
void imprimirNomes(ListaNomes* lista) {
    printf("Nomes na lista:\n");
    while (lista != NULL) {
        printf("%s -> ", lista->nome);
        lista = lista->proximo;
    }
    printf("NULL\n");
}

int main() {
    ListaNomes* lista = inicioNomes();
    lista = inserirNome(lista, "Lucas");
    lista = inserirNome(lista, "Maria");
    lista = inserirNome(lista, "Joao");
    lista = inserirNome(lista, "Ana");
    imprimirNomes(lista);
    return 0;
}
