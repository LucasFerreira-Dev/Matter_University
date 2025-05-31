#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int digito;
    struct Lista* proximo;
} Lista;

Lista* inicio(){
    return NULL;
}

Lista* inserir(Lista* lista, int digito){
    Lista* novo = (Lista*)malloc(sizeof(Lista));

    if(novo == NULL) {
        printf("Erro ao alocar memoria");
        exit(1);
    }

    novo->digito = digito;
    novo->proximo = lista;
    return novo;
}

Lista* buscar(Lista* lista, int procura) {
    while (lista != NULL) {
        if(lista->digito == procura) {
            return lista;
        }
        lista = lista->proximo;
    }
    return NULL; //se não encontra
}

Lista* remover(Lista* lista, int remover) {
    Lista* anterior = NULL;
    Lista* atual = lista;

    while (atual != NULL && atual->digito != remover) {
        anterior = atual;
        atual = atual->proximo;
    }

    if(atual == NULL) {
        return lista; // não encontrou
    } 
    
    if(anterior == NULL) {
        // Remover o primeiro elemento
        lista = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    return lista;
}

void liberarMemoria(Lista* lista) {
    Lista* apagar;
    while(lista != NULL) {
        apagar = lista;
        lista = lista->proximo;

        free(apagar); //libera a memoria
    }
}

void mostrar(Lista* lista) {
    printf("Elementos da lista:\n");
    while (lista != NULL) {
        printf("%d ", lista->digito);
        lista = lista->proximo;
    }
}

int main() {
    Lista* minha_lista = inicio();
    int opcao, valor;

    do {
        printf("\nMenu:\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Remover elemento\n");
        printf("3 - Buscar elemento\n");
        printf("4 - Mostrar lista\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                minha_lista = inserir(minha_lista, valor);
                break;
            case 2:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                minha_lista = remover(minha_lista, valor);
                break;
            case 3: {
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                Lista* encontrado = buscar(minha_lista, valor);
                if(encontrado != NULL) {
                    printf("Valor %d encontrado na lista!\n", valor);
                } else {
                    printf("Valor %d nao encontrado.\n", valor);
                }
                break;
            }
            case 4:
                mostrar(minha_lista);
                break;
            case 0:
                liberarMemoria(minha_lista);
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}