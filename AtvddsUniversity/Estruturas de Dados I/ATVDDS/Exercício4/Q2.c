/*

02)	Defina uma estrutura chamada Livro que contenha os seguintes campos: 
o	titulo (uma cadeia de caracteres com tamanho máximo de 50); 
o	autor (outra cadeia de caracteres com tamanho máximo de 50);
o	ano_publicacao (um inteiro).
Utilize typedef para criar um “alias” TipoLivro para essa estrutura. Declare e leia três variáveis do tipo TipoLivro com informações de livros diferentes. Em seguida, imprima os detalhes de cada livro (título, autor e ano de publicação);

*/

#include <stdio.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int ano_publicacao;
} TipoLivro;


int main() {
    // chamar struct
    TipoLivro livros[3];

    // entradas
    for(int i = 0; i < 3; i++) {
        printf("Digite o titulo do livro %d: ", i + 1);
        fgets(livros[i].titulo, 50, stdin);
        
        printf("Digite o autor do livro %d: ", i + 1);
        fgets(livros[i].autor, 50, stdin);

        printf("Digite o ano de publicacao do livro %d: ", i + 1);
        scanf("%d", &livros[i].ano_publicacao, i + 1);

        fflush(stdin);// limpar buffer
        system("cls");// limpar cmd
    }
    
    //saida
    for(int i = 0; i < 3; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Autor: %s", livros[i].autor);
        printf("Titulo: %s", livros[i].titulo);
        printf("Ano de publicacao: %d\n", livros[i].ano_publicacao);
    }

    return 0;
}