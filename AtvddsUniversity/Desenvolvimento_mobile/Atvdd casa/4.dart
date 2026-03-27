import 'dart:io';

class Informations {
  String? _login;
  String? _senha;
  String? _nome;
  String? _idade;

  set nome(String valor) => _nome = valor.trim();
  set login(String valor) => _login = valor.trim();
  set senha(String valor) => _senha = valor.trim();
  set idade(String valor) => _idade = valor.trim();

  String? get nome => _nome;
  String? get login => _login;
  String? get senha => _senha;
  String? get idade => _idade;
}

void main() {
  // Inicializando o sistema
  Map<String, Map<String, Map<String, String>>> sistema = {};

  var pessoa = Informations();
  pessoa.nome = 'lucas';
  pessoa.login = 'lucas@gmail.com';
  pessoa.senha = "1234";
  pessoa.idade = '19';

  // 🔥 Adicionando no Map
  sistema[pessoa.login!] = {
    "dados": {
      "nome": pessoa.nome!,
      "senha": pessoa.senha!,
      "idade": pessoa.idade!,
    },
  };

  while (true) {
    print("\nSistema:");
    print("1. Exibir as informações");
    print("2. Mostrar o valor da chave nome");
    print("3. Remover a chave senha");
    print("4. Sair");

    stdout.write("Escolha: ");
    int opcao = int.parse(stdin.readLineSync()!);

    if (opcao == 1) {
      print(sistema);
    } else if (opcao == 2) {
      print(sistema[pessoa.login]!["dados"]!["nome"]);
    } else if (opcao == 3) {
      sistema[pessoa.login]!["dados"]!.remove("senha");
      print("Senha removida!");
    } else if (opcao == 4) {
      break;
    }
  }
}
