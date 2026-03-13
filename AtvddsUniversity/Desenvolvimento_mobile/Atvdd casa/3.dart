import 'dart:io';

Map<int,String> pesquisa(int i){
  print("==== Menu ====");

  print("Digite sua idade, para ter acesso a pesquisa:");
  int idade = int.parse(stdin.readLineSync()!);
  
  print("\t1. Excelente \n\t2. Bom \n\t3. Regular");
  String opniao = stdin.readLineSync()!;

  print("==============");

  Map<int,String> respostas = {};
  respostas[idade] = opniao;

  return respostas;
}

void laco(int j){
  for(int i = 0; i < j; i++){
    pesquisa(i);
  }
}

void main(){
  laco(20);
}