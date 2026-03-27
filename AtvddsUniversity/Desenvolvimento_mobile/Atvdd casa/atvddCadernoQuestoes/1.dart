/*
Uma instituição deseja armazenar informações de alunos e seus respectivos cursos.
Desenvolva um programa em Dart que utilize um Map para armazenar a relação entre
nome do aluno e curso. O programa deve percorrer essa estrutura e mostrar todas as
informações registradas
*/

import 'dart:io';

Map<String, String> CadastarAluno() {
  Map<String, String> sistema = {};

  while (true) {
    stdout.write("Digite o seu nome: ");
    String nome = stdin.readLineSync()!;

    print(nome);

    stdout.write("Deseja finalizar as incrições (s/n): ");
    String sair = stdin.readLineSync()!;

    if (sair == "s") break;
  }

  return sistema;
}

void main() {
  CadastarAluno();
}
