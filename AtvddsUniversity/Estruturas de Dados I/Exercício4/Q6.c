/*

06)	Defina uma estrutura chamada PerfilSaude que contenha os seguintes campos: Nome Completo: string com 80 caracteres; Sexo: um caractere; Data de nascimento: dia, mês e ano separados (usando outra estrutura); Altura: um número real; Peso: um número real; Idade atual: um inteiro; o índice de Massa Corporal: um número real; e a frequência cardíaca máxima: um número real; Faça um programa que tenha uma função que receba os dados Nome, Sexo, Data de Nascimento, Altura e Peso; e os utilize para definir os membros de uma variável PerfilSaude, usando alocação dinâmica de memória; O programa deve incluir outra função que calcule a idade atual do usuário em anos, a frequência cardíaca máxima e o índice de Massa Corporal, retornando a variável estrutura que foi recebida já com os novos dados incluídos nela; Em seguida deverão ser exibidos todos os dados lidos, além da idade (em anos), seu IMC, e sua frequência cardíaca máxima, através de ponteiros (não use a variável, use um ponteiro pra variável e mostre os valores através dele;

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DataNascimento;

typedef struct {
    char nome[80];
    char sexo;
    DataNascimento nascimento;
    float altura;
    float peso;
    int idade;
    float imc;
    float freqCardMax;
} PerfilSaude;

int calcularIdade(DataNascimento nascimento) {
    time_t t = time(NULL);
    struct tm *dataAtual = localtime(&t);

    int idade = dataAtual->tm_year + 1900 - nascimento.ano;

    if ((nascimento.mes > dataAtual->tm_mon + 1) ||
        (nascimento.mes == dataAtual->tm_mon + 1 && nascimento.dia > dataAtual->tm_mday)) {
        idade--;
    }

    return idade;
}

void calcularDadosSaude(PerfilSaude *perfil) {
    perfil->idade = calcularIdade(perfil->nascimento);
    perfil->imc = perfil->peso / (perfil->altura * perfil->altura);
    perfil->freqCardMax = 220 - perfil->idade;
}

PerfilSaude* criarPerfil(char nome[], char sexo, int dia, int mes, int ano, float altura, float peso) {
    PerfilSaude *perfil = (PerfilSaude *)malloc(sizeof(PerfilSaude));
    if (perfil == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    strcpy(perfil->nome, nome);
    perfil->sexo = sexo;
    perfil->nascimento.dia = dia;
    perfil->nascimento.mes = mes;
    perfil->nascimento.ano = ano;
    perfil->altura = altura;
    perfil->peso = peso;

    calcularDadosSaude(perfil);

    return perfil;
}

void exibirPerfil(PerfilSaude *perfil) {
    printf("=== Perfil de Saude ===\n");
    printf("Nome: %s\n", perfil->nome);
    printf("Sexo: %c\n", perfil->sexo);
    printf("Data de nascimento: %02d/%02d/%d\n", perfil->nascimento.dia, perfil->nascimento.mes, perfil->nascimento.ano);
    printf("Altura: %.2f m\n", perfil->altura);
    printf("Peso: %.2f kg\n", perfil->peso);
    printf("Idade: %d anos\n", perfil->idade);
    printf("IMC: %.2f\n", perfil->imc);
    printf("Frequencia Cardiaca Maxima: %.0f bpm\n", perfil->freqCardMax);
}

int main() {
    PerfilSaude *meuPerfil = criarPerfil("Lucas Gabriel da S.F", 'M', 21, 4, 2006, 1.80, 53.0);

    exibirPerfil(meuPerfil);

    free(meuPerfil);

    return 0;
}
