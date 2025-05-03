/*

03)	Crie uma estrutura chamada Tempo que armazene horas (inteiro), minutos (inteiro) e segundos (inteiro). Use typedef para renomeá-la para Horario. Escreva um programa que declare duas variáveis do tipo Horario, leia os valores do teclado e calcule a diferença em segundos entre os dois horários. Se o segundo horário for anterior ao primeiro, inverta-os. Imprima os dois horários no formato "HH:MM:SS" e a diferença em segundos

*/

#include <stdio.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
} Tempo; //afinal o nome é pra ser tempo ou horario 😒
// por votacao minha vai ser tempo e pronto

int main() {
    // chamar struct
    Tempo horario[2];

    //entrada
    for(int i = 0; i < 2; i++) {        
        printf("Digite o horario %d Hora: ", i + 1);
        scanf("%d", &horario[i].horas);
        
        printf("Digite o horario %d Minutos: ", i + 1);
        scanf("%d", &horario[i].minutos);
            
        printf("Digite o horario %d Segundos: ", i + 1);
        scanf("%d", &horario[i].segundos);
    }

    //logica
    int total_segundos1 = horario[0].horas * 3600 + horario[0].minutos * 60 + horario[0].segundos;
    int total_segundos2 = horario[1].horas * 3600 + horario[1].minutos * 60 + horario[1].segundos;


    //saida
    if (total_segundos1 > total_segundos2) {
        printf("O primeiro horario (%02d:%02d:%02d) maior que o segundo (%02d:%02d:%02d).\n", horario[0].horas, horario[0].minutos, horario[0].segundos, horario[1].horas, horario[1].minutos, horario[1].segundos);
    } else if (total_segundos1 < total_segundos2) {
        printf("O segundo horario (%02d:%02d:%02d) maior que o primeiro (%02d:%02d:%02d).\n", horario[1].horas, horario[1].minutos, horario[1].segundos, horario[0].horas, horario[0].minutos, horario[0].segundos);
    } else {
        printf("Os dois horarios sao iguais (%02d:%02d:%02d).\n", horario[0].horas, horario[0].minutos, horario[0].segundos);
    }


    return 0;
}