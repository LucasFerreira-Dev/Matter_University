// Importa o módulo readline
const readline = require('readline');

// Cria a interface de leitura
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let nome; // Variável para salvar

// Faz a pergunta no terminal
rl.question('Digite seu nome: ', (resposta) => {
  nome = resposta; // Salva a resposta
  console.log(`Olá, ${nome}!`);
  rl.close(); // Fecha a interface
});