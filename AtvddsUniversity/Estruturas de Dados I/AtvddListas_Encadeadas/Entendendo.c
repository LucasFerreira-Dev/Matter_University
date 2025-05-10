#include <stdio.h>
#include <stdlib.h>

struct Lista {
    int info;
    struct Lista* prox;
};

//criar o objeto
typedef struct Lista lista;

//função de criação
//retorna uma lista vazia
lista* lst_cria(void){
    return NULL;
}

lista* lst_insere(lista* lst, int i) {
    lista* novo = (lista*)malloc(sizeof(lista));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); // Encerra o programa em caso de erro de alocação
    }
    novo->info = i;
    novo->prox = lst; // Aponta para a lista atual
    return novo; // Retorna o novo início da lista
}

int main() {
    // Criar uma lista vazia
    lista* minha_lista = lst_cria();

    // Inserir elementos na lista
    minha_lista = lst_insere(minha_lista, 10);
    minha_lista = lst_insere(minha_lista, 20);
    minha_lista = lst_insere(minha_lista, 30);

    // Exibir os elementos da lista
    printf("Elementos da lista: -> ");
    lista* p = minha_lista;
    while (p != NULL) {
        printf("%d -> ", p->info);
        p = p->prox;
    }

    // Liberar a memória alocada
    while (minha_lista != NULL) {
        lista* temp = minha_lista;
        minha_lista = minha_lista->prox;
        free(temp);
    }

    return 0;
}