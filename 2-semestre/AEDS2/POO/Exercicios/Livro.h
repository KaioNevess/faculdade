

#ifndef LIVRO_H
#define LIVRO_H
#include <string>
using namespace std;


class Livro {

    public:
    Livro();

    void setNome(string nome);
    string getNome();

    void setAutor(string autor);
    string getAutor();

    void setNumeroPaginas(int numeroPaginas);
    int getNumeroPaginas();

    void setEditora(string editora);
    string getEditora();
    
    void preencher();

    private:
    string nome;
    string autor;
    int numeroPaginas;
    string editora;
};
#endif
