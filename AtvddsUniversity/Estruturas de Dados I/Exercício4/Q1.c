/*

01)	Crie uma estrutura chamada Ponto que armazene as coordenadas inteiras x e y de um ponto no plano cartesiano. Em seguida, declare duas variáveis do tipo Ponto, leia valores do teclado e atribua a seus campos e calcule a distância de Manhattan entre esses dois pontos. A distância de Manhattan entre dois pontos (x1, y1) e (x2, y2) é dada por:|x1 - x2| + |y1 - y2|. Imprima os valores dos pontos e a distância calculada;

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    // chamar struct
    Ponto p1, p2;

    //variaveis
    int distancia;

    //entradas
    printf("Digite o valor do primeiro x: ");
    scanf("%d", &p1.x);

    printf("Digite o valor do primeiro y: ");
    scanf("%d", &p1.y);

    printf("Digite o valor do segundo x: ");
    scanf("%d", &p2.x);

    printf("Digite o valor do segundo y: ");
    scanf("%d", &p2.y);

    // Cálculo
    distancia = abs(p1.x - p2.x) + abs(p1.y - p2.y);

    // saidas
    printf("Ponto 1: (%d, %d)\n", p1.x, p1.y);
    printf("Ponto 2: (%d, %d)\n", p2.x, p2.y);
    printf("Distância de Manhattan: %d\n", distancia);

    return 0;
}