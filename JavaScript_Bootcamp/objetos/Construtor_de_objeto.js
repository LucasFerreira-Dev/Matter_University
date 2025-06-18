function Pessoa(nome, idade) {
  this.nome = nome;
  this.idade = idade;
  this.apresentar = function() {
    console.log(`Olá, eu sou ${this.nome} e tenho ${this.idade} anos.`);
  };
}

const pessoa1 = new Pessoa("Lucas", 25);
const pessoa2 = new Pessoa("Maria", 30);

pessoa1.apresentar(); // Olá, eu sou Lucas e tenho 25 anos.
