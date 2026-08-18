#include <string>
#include <iostream>
#include "Livro.h"

using namespace std;

Livro::Livro() {
    this->nome = "";
    this->autor = "";
    this->numeroPaginas = 0;
    this->editora = "";
}

void Livro::setNome(string nome) {
    this->nome = nome;
}

string Livro::getNome() {
    return this->nome;
}

void Livro::setAutor(string autor) {
    this->autor = autor;
}

string Livro::getAutor() {
    return this->autor;
}

void Livro::setNumeroPaginas(int numeroPaginas) {
    this->numeroPaginas = numeroPaginas;
}

int Livro::getNumeroPaginas() {
    return this->numeroPaginas;
}

void Livro::setEditora(string editora) {
    this->editora = editora;
}

string Livro::getEditora() {
    return this->editora;
}

void Livro::preencher() {
    cout << "Titulo: ";
    cin >> this->nome;

    cout << "Autor: ";
    cin >> this->autor;

    cout << "Editora: ";
    cin >> this->editora;

    cout << "Numero de paginas: ";
    cin >> this->numeroPaginas;
}
