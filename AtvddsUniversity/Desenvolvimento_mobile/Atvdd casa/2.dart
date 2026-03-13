import 'dart:io';

void exibirInformacoes(){
  //Entrada de dados
  print("Digite o seu nome:");
  String nome = stdin.readLineSync()!;

  print("Digite a sua idade:");
  int idade = int.parse(stdin.readLineSync()!);

  print("Digite a sua atura:");
  double altura = double.parse(stdin.readLineSync()!);
  
  bool maiorDeIdade = false;

  if(idade >= 19){
    maiorDeIdade = true;
  }

  print("\n\n==== Information ====");
  if(maiorDeIdade){
    print("Nome: ${nome} \nIdade: ${idade} \nAtura: ${altura} \nMaior de idade: sim");
  } else {
    print("Nome: ${nome} \nIdade: ${idade} \nAtura: ${altura} \nMaior de idade: nao");
  }
  print("=====================");
}

void main(){
  exibirInformacoes();
}