class Pessoa {
  constructor(nome, idade) {
    this.nome = nome;
    this.idade = idade;
  }

  apresentar() {
    console.log(`Olá, sou ${this.nome}`);
  }
}

const p1 = new Pessoa("João", 22);
p1.apresentar();  // Olá, sou João
