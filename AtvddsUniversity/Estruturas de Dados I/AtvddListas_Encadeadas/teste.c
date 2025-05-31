/*fazer a lista encadeada
      pontuação:
      pesquisas: 3
      erros = 4
*/

#include <stdio.h>
#include <stdlib.h>

struct Lista {
    int digito;
    struct Lista* proximo;
};

typedef struct Lista Lista;

Lista* Inicio(){
    return NULL;
}

Lista* InserirLista(Lista* lista, int inserir){
    //alocar memoria
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    
    //teste
    if(novo == NULL){
        printf("Erro a alocar memoria");
        exit(1);
    }
    
    novo->digito = inserir;
    novo->proximo = lista;
    return novo;
}

void ImprimirLista(Lista* lista) {
    printf("Elementos da lista:\n");
    while (lista != NULL) {
        printf("%d -> ", lista->digito);
        lista = lista->proximo;
    }
    printf("NULL\n");
}

void ProcurarElemento(Lista* lista, int valor) {
    while (lista != NULL) {
        if(lista->digito == valor){
            printf("Elemento %d encontrado!\n", valor);
            return;
        }
        lista = lista->proximo;
    }
    printf("Elemento %d não encontrado.\n", valor);
}


int main() {
    //iniciar lista
    Lista* minha_lista = Inicio();

    //inserir na lista
    minha_lista = InserirLista(minha_lista, 10);
    minha_lista = InserirLista(minha_lista, 20);
    minha_lista = InserirLista(minha_lista, 30);
    minha_lista = InserirLista(minha_lista, 40);

    //procurar digito
    ProcurarElemento(minha_lista, 20);

    //imprimir a lista 
    ImprimirLista(minha_lista);
   
    return 0;
}