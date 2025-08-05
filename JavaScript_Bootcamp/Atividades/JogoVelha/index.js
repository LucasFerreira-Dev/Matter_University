/*
_x_|_x_|_0_
_x_|_0_|_0_
_0_|_x_|_x_
*/

const tabuleiro = [
  ["1", "2", "3"],
  ["4", "5", "6"],
  ["7", "8", "9"]
];

function fazerJogada(linha, coluna, XO){
    tabuleiro[linha][coluna] = XO;
    return tabuleiro;
}

function jogadores(nome1, nome2) {
    let pontuacao1 = 0;
    let pontuacao2 = 0;
    return {
        add: {
            pontuacao(nome, pontos){
                if(nome === nome1) {
                    pontuacao1 += pontos;
                } else if(nome === nome2) {
                    pontuacao2 += pontos;
                } else {
                    console.log("Jogado não existe.");
                }
            }
        },
        ganhador() {
            if(pontuacao1 > pontuacao2) {
                console.log(`O ganhador é ${nome1} com a pontuação ${pontuacao1}.`);
            } else if(pontuacao1 === pontuacao2) {
                console.log("Deu empate");
            }else {
                console.log(`O ganhador é ${nome2} com a pontuação ${pontuacao2}.`);
            }
        },
        mostrarTabuleiro() {
            // Exibir o tabuleiro de forma organizada
            for (let linha of tabuleiro) {
            console.log(linha.join(" | "));
            }
        }
    }
}

function interface(){
    //variaveis
    let jogador1;
    let jogador2;
    
    // Importa o módulo readline
    const readline = require('readline');
    
    // Cria a interface de leitura
    const input_ = readline.createInterface({
      input: process.stdin,
      output: process.stdout
    });

    return {
        jogando(){
            input_.question('Digite o nome do primeiro jogador: ', (resposta1) => {
                const nome1 = resposta1;

                input_.question('Digite o nome do segundo jogador: ', (resposta2) => {
                    const nome2 = resposta2;

                    //criando jogadores
                    const Jogadores = jogadores(nome1, nome2);
                    console.log(`Jogadores: ${nome1} vs ${nome2}`);
                    
                    //mostrar tabuleiro
                    Jogadores.mostrarTabuleiro();

                    input_.close(); //fechar o input_
                });
            });
        }
        
    }
}


/*
Jogadores.add.pontuacao("lucas", 3);
Jogadores.add.pontuacao("lucas", 1);
Jogadores.add.pontuacao("iago", 2);
Jogadores.add.pontuacao("iago", 1);
Jogadores.ganhador();

// Fazendo jogadas
fazerJogada(0, 0, "x");
fazerJogada(0, 1, "x");
fazerJogada(0, 2, "o");
Jogadores.mostrarTabuleiro();
*/


//interface
const Interface = interface();
Interface.jogando();