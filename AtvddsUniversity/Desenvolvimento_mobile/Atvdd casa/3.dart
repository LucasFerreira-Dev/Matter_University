import 'dart:io';

List<String> pesquisa(int participanteInt) {
  print("==== Menu ====");
  print("Digite sua idade:");
  String idade = stdin.readLineSync()!;

  print("\nDiga se o filme foi:");
  print("\t1. Excelente");
  print("\t2. Bom");
  print("\t3. Regular");

  String opiniao = stdin.readLineSync()!;

  if (opiniao == "1") {
    opiniao = "Excelente";
  } else if (opiniao == "2") {
    opiniao = "Bom";
  } else if (opiniao == "3") {
    opiniao = "Regular";
  } else {
    opiniao = "Resposta invalida";
  }

  print("==============");

  String participante = participanteInt.toString();

  return [participante, idade, opiniao];
}

List<List<String>> resultadoTabela(List<List<String>> dados) {
  int excelente = 0;
  int bom = 0;
  int regular = 0;
  int participante = 0;
  int invalido = 0;

  for (var d in dados) {
    if (d[2] == "Excelente") {
      participante++;
      excelente++;
    } else if (d[2] == "Bom") {
      participante++;
      bom++;
    } else if (d[2] == "Regular") {
      participante++;
      regular++;
    } else if (d[2] == "Resposta invalida") {
      participante++;
      invalido++;
    }
  }

  return [
    ["Participantes", participante.toString()],
    ["Excelente", excelente.toString()],
    ["Bom", bom.toString()],
    ["Regular", regular.toString()],
    ["Respostas invalidas", invalido.toString()],
  ];
}

List<List<String>> resultadoPorcentagens(List<List<String>> dados) {
  int excelente = 0;
  int bom = 0;
  int regular = 0;
  int invalido = 0;

  for (var d in dados) {
    if (d[2] == "Excelente") {
      excelente++;
    } else if (d[2] == "Bom") {
      bom++;
    } else if (d[2] == "Regular") {
      regular++;
    } else if (d[2] == "Resposta invalida") {
      invalido++;
    }
  }

  int total = dados.length;

  double pExcelente = (excelente / total) * 100;
  double pBom = (bom / total) * 100;
  double pRegular = (regular / total) * 100;
  double pInvalido = (invalido / total) * 100;

  return [
    ["Excelente", "${pExcelente.toStringAsFixed(2)} %"],
    ["Bom", "${pBom.toStringAsFixed(2)} %"],
    ["Regular", "${pRegular.toStringAsFixed(2)} %"],
    ["Respostas invalidas", "${pInvalido.toStringAsFixed(2)} %"],
  ];
}

List<List<String>> laco(int quantidade) {
  List<List<String>> respostas = [];

  for (int i = 0; i < quantidade; i++) {
    List<String> r = pesquisa(i + 1);
    respostas.add(r);
  }

  return respostas;
}

void mostrarResumo(List<List<String>> tabela) {
  print("\n=== Resumo da Pesquisa ===");

  for (var linha in tabela) {
    print("${linha[0]}: ${linha[1]} votos");
  }

  print("===========================");
}

void mostrarPorcentagem(List<List<String>> tabela) {
  print("\n=== Resumo da Pesquisa Por Porcentagem ===");

  for (var linha in tabela) {
    print("${linha[0]}: ${linha[1]}");
  }

  print("===========================================");
}

void mostrarPesquisa(List<List<String>> dados) {
  print("\n=== Resultados da Pesquisa ===");

  for (var Dados in dados) {
    print(
      "Participante: ${Dados[0]} -> Idade: ${Dados[1]} -> Opinião: ${Dados[2]}",
    );
  }
  print("================================");
}

void main() {
  List<List<String>> Pesquisa = laco(5);
  mostrarPesquisa(Pesquisa);

  List<List<String>> resumo = resultadoTabela(Pesquisa);
  mostrarResumo(resumo);

  List<List<String>> porcentagens = resultadoPorcentagens(Pesquisa);
  mostrarPorcentagem(porcentagens);
}

/*
  Acho que deixei a questão um pouco complexa
*/
