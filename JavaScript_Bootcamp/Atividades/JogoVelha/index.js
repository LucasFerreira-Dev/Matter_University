/*
_x_|_x_|_0_
_x_|_0_|_0_
_0_|_x_|_x_
*/

const tabuleiro = [
  ["-", "-", "-"],
  ["-", "-", "-"],
  ["-", "-", "-"]
];

function fazerJogada(linha, coluna, XO){
    tabuleiro[linha][coluna] = XO;
    return tabuleiro;
}

function jogadores(nome1, pontuacao1, nome2, pontuacao2) {
    return{
        ganhador(){
            if(pontuacao1 > pontuacao2) {
                console.log(`O ganhador é ${nome1} com a pontuação ${pontuacao1}.`);
            } else if(pontuacao1 === pontuacao2) {
                console.log("Deu empate");
            }else {
                console.log(`O ganhador é ${nome2} com a pontuação ${pontuacao2}.`);
            }
        }
    }
}

//criando jogadores
const Jogadores = jogadores("lucas", 9, "iago", 4);
Jogadores.ganhador();

// Fazendo jogadas
fazerJogada(0, 0, "x");
fazerJogada(0, 1, "x");
fazerJogada(0, 2, "o");

// Exibir o tabuleiro de forma organizada
for (let linha of tabuleiro) {
  console.log(linha.join(" | "));
}