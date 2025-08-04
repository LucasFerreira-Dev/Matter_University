const myLibrary = [];

function Book(book, author) {   
  this.book = book;
  this.author = author;
}

function addBookToLibrary(livro) {
  myLibrary.push(livro);
}

Book.prototype.showBook = function(){
  return `Livro: ${this.book}, Autor: ${this.author}`
}

function showEverything() {
  //armazena
  let resultado = "";

  //laço
  for(let i = 0; i < myLibrary.length; i++) { // myLibrary.length tamanho do array
    resultado += `Livro ${i + 1}: ${myLibrary[i].book}, Autor: ${myLibrary[i].author}\n`;
  }
  return resultado;
}

//adicionando na classe
const livro1 = new Book("A menina que roubava livros","Anonimo");
const livro2 = new Book("A psicologia financeira","Morgan Housel.");

//adicionar no array os livros
addBookToLibrary(livro1);
addBookToLibrary(livro2);

//verificar prototype
console.log(Object.getPrototypeOf(livro1)) === Book.prototype;
console.log(Object.getPrototypeOf(livro2)) === Book.prototype;

// Mostrar livro individual
console.log(livro1.showBook());
console.log(livro2.showBook());

// Mostrar toda biblioteca
console.log(myLibrary); // [Book]

//Mostrar de formar organizada
console.log("\nTudo armazenado em myLibrary:");
console.log(showEverything());