const pessoa = {
  nome: "Lucas",
  idade: 25,
  saudacao: function () {
    console.log(`Olá, meu nome é ${this.nome}`);
  }
};

pessoa.saudacao();  // Olá, meu nome é Lucas
