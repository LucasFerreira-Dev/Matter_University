function Livro(title, author, pages, read) {
    this.title = title;
    this.author = author;
    this.pages = pages;
    this.read = read;

    this.info = function() {
        let statusLeitura = this.read ? "already read" : "not read yet";
        return `${this.title} by ${this.author}, ${this.pages} pages, ${statusLeitura}`;
    };
}

// Exemplo de uso:
const theHobbit = new Livro("The Hobbit", "J.R.R. Tolkien", 295, false);
console.log(theHobbit.info());
