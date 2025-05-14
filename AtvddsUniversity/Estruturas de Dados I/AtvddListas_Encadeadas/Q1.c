#include <stdio.h>
#include <stdlib.h>

struct Lista {
    int info;
    struct Lista* prox;
};

//criar o objeto
typedef struct Lista lista;

//função de criação ela retorna uma lista vazia
lista* lst_cria(void){
    return NULL;
}

//função de mostrar
lista* lst_mostrar(lista* minha_lista) {
    // Exibir os elementos da lista
    printf("Elementos da lista: -> ");
    lista* p = minha_lista;
    while (p != NULL) {
        printf("%d -> ", p->info);
        p = p->prox;
    }
    printf("NULL\n");
}

//função inserir
lista* lst_insere(lista* lst, int i) {
    lista* novo = (lista*)malloc(sizeof(lista));
    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); 
    }
    novo->info = i;
    novo->prox = lst; 
    return novo; 
}

int main() {
    // Criar uma lista vazia
    lista* minha_lista = lst_cria();

    //variaveis
    int itens, digito;
    
    //pergunta para controle de for
    printf("Quantos itens serao adicionados: ");
    scanf("%d", &itens);    

    for(int i = 0; i < itens; i++) {
        printf("Digite o numero que sera adicionado na lista: ");
        scanf("%d", &digito);

        // Inserir elementos na lista
        minha_lista = lst_insere(minha_lista, digito);
    }

    //chamando a função mostrar
    lst_mostrar(minha_lista);

    return 0;
}