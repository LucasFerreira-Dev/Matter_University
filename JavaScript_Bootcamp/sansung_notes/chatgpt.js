// Função que cria um usuário com reputação privada
function createUser(name) {
  let reputation = 0;

  function getReputation() {
    return reputation;
  }

  function giveReputation() {
    reputation++;
  }

  return {
    getReputation,
    giveReputation,
    getName: () => name
  };
}

// Função que cria um player com nível privado e métodos para aumentar e mostrar nível
function createPlayer(name, level) {
  const user = createUser(name);

  const increaseLevel = () => level++;
  const getLevel = () => level;

  return Object.assign({}, user, {
    increaseLevel,
    getLevel
  });
}

// Criar um player básico
const basePlayer = createPlayer("Lucas", 1);

// Estender o player com XP e lógica para subir nível automaticamente
const advancedPlayer = Object.assign({}, basePlayer, {
  xp: 0,
  gainXP(amount) {
    this.xp += amount;
    if (this.xp >= 100) {
      this.increaseLevel();
      this.xp -= 100;
    }
  }
});

// Teste e demonstração
console.log("Nome:", advancedPlayer.getName());          // Lucas
console.log("Nível inicial:", advancedPlayer.getLevel());  // 1
console.log("Reputação inicial:", advancedPlayer.getReputation()); // 0

advancedPlayer.giveReputation();
console.log("Reputação após dar uma:", advancedPlayer.getReputation()); // 1

advancedPlayer.gainXP(150);
console.log("XP restante:", advancedPlayer.xp);           // 50
console.log("Nível após ganhar XP:", advancedPlayer.getLevel()); // 2
