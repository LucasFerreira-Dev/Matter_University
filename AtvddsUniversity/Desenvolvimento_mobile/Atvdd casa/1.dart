void exibirInformacoes(){
  int idade = 19;
  double altura = 1.80;
  String nome = "Lucas";
  bool maiorDeIdade = false;

  if(idade >= 19){
    maiorDeIdade = true;
  }

  if(maiorDeIdade){
    print("Nome: ${nome} \nIdade: ${idade} \nAtura: ${altura} \nMaior de idade: sim");
  } else {
    print("Nome: ${nome} \nIdade: ${idade} \nAtura: ${altura} \nMaior de idade: nao");
  }
}

void main(){
  exibirInformacoes();
}