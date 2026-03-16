import 'dart:io';

Map<int, Map<int, double>> cadastrarMultas() {
  Map<int, Map<int, double>> sistema = {};

  while (true) {
    stdout.write("Numero da carteira: ");
    int carteira = int.parse(stdin.readLineSync()!);

    if (carteira < 1 || carteira > 4327) break;

    sistema[carteira] = {};

    while (true) {
      stdout.write("Numero da multa: ");
      int numMulta = int.parse(stdin.readLineSync()!);

      stdout.write("Valor da multa: ");
      double valor = double.parse(stdin.readLineSync()!);

      sistema[carteira]![numMulta] = valor;

      stdout.write("Adicionar outra multa? (s/n): ");
      String op = stdin.readLineSync()!;

      if (op == "n") break;
    }

    stdout.write("Adicionar outra Carteira de motorista? (s/n): ");
    String op = stdin.readLineSync()!;

    if (op == "n") break;
  }

  return sistema;
}

void mostrarTudo(Map<int, Map<int, double>> dados) {
  if (dados.isEmpty) {
    print("\n=== Tabela de total de multas ===");
    print("Nenhuma divida atualmente no sistema.");
    print("=================================");

    return;
  }

  print("\n=== Resumo do sistema ===");
  for (var entradaCarteira in dados.entries) {
    int carteira = entradaCarteira.key;
    print("Carteira: $carteira");

    Map<int, double> multasCarteira = entradaCarteira.value;

    if (multasCarteira.isEmpty) {
      print("  Nenhuma multa cadastrada.");
    } else {
      for (var entradaMulta in multasCarteira.entries) {
        print("  Multa ${entradaMulta.key}: R\$${entradaMulta.value}");
      }
    }
  }
  print("=========================");
}

void mostrarDividaTotal(Map<int, Map<int, double>> dados) {
  double valor = 0.0;

  if (dados.isEmpty) {
    print("\n=== Tabela de total de multas ===");
    print("Nenhuma divida atualmente no sistema.");
    print("=================================");

    return;
  }

  print("\n=== Tabela de total de multas ===");
  for (var carteira in dados.entries) {
    int carteiraDados = carteira.key;
    stdout.write("Carteira: ${carteiraDados}");

    Map<int, double> multasCarteira = carteira.value;

    if (multasCarteira.isEmpty) {
      print("  Nenhuma multa encontrada.");
    } else {
      for (var entradaMulta in multasCarteira.entries) {
        valor = valor + entradaMulta.value;
      }

      print("  Valor total da multa R\$${valor}");
      valor = 0.0;
    }
  }
  print("=================================");
}

void mostrarTotalArrecadado(Map<int, Map<int, double>> dados) {
  double valor = 0.0;

  if (dados.isEmpty) {
    print("\n=== Tabela de total de multas ===");
    print("Nenhuma lucro infelismente.");
    print("=================================");

    return;
  }

  print("\n=== Tabela arrecadacoes ===");
  for (var carteira in dados.entries) {
    Map<int, double> multasCarteira = carteira.value;

    if (multasCarteira.isEmpty) {
      print("  Nenhuma lucro encontrado.");
    } else {
      for (var entradaMulta in multasCarteira.entries) {
        valor = valor + entradaMulta.value;
      }
    }
  }
  print("  Valor total arrecadado R\$${valor}");
  print("=================================");
}

void main() {
  Map<int, Map<int, double>> multas = cadastrarMultas();

  print("\nSistema de multas:");
  mostrarTudo(multas);
  mostrarDividaTotal(multas);
  mostrarTotalArrecadado(multas);
}
