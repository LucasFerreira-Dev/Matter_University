// Função construtora
function Player(nome, nivel) {
  this.nome = nome;
  this.nivel = nivel;
}

// Adicionando um método ao protótipo do Player
Player.prototype.mostrarInfo = function () {
  return `Jogador: ${this.nome} | Nível: ${this.nivel}`;
};

// Criando instâncias de Player
const player1 = new Player("Lucas", 10);
const player2 = new Player("Gabriel", 20);

// Verificando o protótipo
console.log(Object.getPrototypeOf(player1) === Player.prototype); // true
console.log(Object.getPrototypeOf(player2) === Player.prototype); // true

// Usando método herdado do protótipo
console.log(player1.mostrarInfo()); // "Jogador: Lucas | Nível: 10"
console.log(player2.mostrarInfo()); // "Jogador: Gabriel | Nível: 20"
