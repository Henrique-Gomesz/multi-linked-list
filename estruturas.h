struct NomeAutor{
    char nome[100];
    char sobrenome[100];
};

struct ListaNomeAutor{
    struct NomeAutor autor;
    struct ListaNomeAutorStruct *prox;
};

struct ListaAutoresLivros{
    struct ListaAutoresLivros *prox;
    struct ListaNomeAutor *autores;
};

struct Livro{
    char titulo[100];
    int ano;
    int paginas;
    struct ListaAutoresLivros *listaAutores;
};

struct ListaLivros{
    struct Livro livro;
    struct ListaLivros *ant;
    struct ListaLivros *prox;
};


struct Editora{
    char nome[100];
    struct ListaLivros *livros;
};

struct ListaEditoras{
    struct Editora editora;
    struct ListaEditoras *ant;
    struct ListaEditoras *prox;
};