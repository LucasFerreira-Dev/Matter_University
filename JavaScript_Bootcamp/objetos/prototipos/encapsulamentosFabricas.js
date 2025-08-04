function criarUsuario(nome, senha) {
  let _senha = senha; // variável "privada"

  return {
    getNome() {
      return nome;
    },
    verificarSenha(senhaTentativa) {
      return _senha === senhaTentativa;
    },
    alterarSenha(senhaAntiga, novaSenha) {
      if (_senha === senhaAntiga) {
        _senha = novaSenha;
        return true;
      }
      return false;
    }
  };
}

// Uso:
const usuario = criarUsuario('joao', '1234');

console.log(usuario.getNome()); // 'joao'
console.log(usuario.verificarSenha('1234')); // true
console.log(usuario._senha); // undefined ❗encapsulado!