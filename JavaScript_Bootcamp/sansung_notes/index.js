function createUser(name) {
  let reputation = 0;

  function getReputation() {
    return reputation;
  }

  function giveReputation() {
    reputation++;
  }

  return { getReputation, giveReputation };
}

function createPlayer(name, level) {
  const { getReputation, giveReputation } = createUser(name);

  const increaseLevel = () => level++;
  const showLevel = () => level;

  return { name, getReputation, giveReputation, increaseLevel, showLevel };
}

const player = createPlayer("lucas", 10);
player.increaseLevel(); //11
player.increaseLevel(); //12
player.giveReputation(); // 0 + 1
console.log(player.showLevel()); // Mostra 12
console.log(player.getReputation()); //mostra 1 na reputação