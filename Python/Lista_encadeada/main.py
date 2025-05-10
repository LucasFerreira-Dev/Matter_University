#🤖 não fui eu que fiz, mais tava curioso como seria em python 😎

class Node:
    def __init__(self, info):
        self.info = info
        self.prox = None

class ListaEncadeada:
    def __init__(self):
        self.head = None  # Inicializa a lista como vazia

    def insere(self, info):
        novo = Node(info)  # Cria um novo nó
        novo.prox = self.head  # Aponta para o início atual da lista
        self.head = novo  # Atualiza o início da lista

    def exibe(self):
        atual = self.head
        print("Elementos da lista: -> ", end="")
        while atual is not None:
            print(f"{atual.info} -> ", end="")
            atual = atual.prox
        print("None")

    def libera(self):
        self.head = None  # Em Python, o garbage collector cuida da liberação de memória


# Exemplo de uso
if __name__ == "__main__":
    minha_lista = ListaEncadeada()

    # Inserir elementos na lista
    minha_lista.insere(10)
    minha_lista.insere(20)
    minha_lista.insere(30)

    # Exibir os elementos da lista
    minha_lista.exibe()

    # Liberar a lista (opcional em Python)
    minha_lista.libera()