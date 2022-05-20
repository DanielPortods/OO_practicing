#include <cstring>
#include "Livro.h"

#include <iostream>
using namespace std;

Livro::Livro(){
}

Livro::Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[])
: Impressa(codigo, titulo, editora, paginas)
{
    this->setIsbn(isbn);
}

Livro::~Livro(){

}

void Livro::setIsbn(char isbn[]){
    strcpy(this->isbn, isbn);
}

char *Livro::getIsbn(){
    return this->isbn;
}

void Livro::showInfo(){
    cout << "\nLivro:" << endl;
    cout << " Código: " << this->getCodigo() << endl;
    cout << " Título: " << this->getTitulo() << endl;
    cout << " Editora: " << this->getEditora() << endl;
    cout << " Páginas: " << this->getPaginas() << endl;
    cout << " ISBN: " << this->getIsbn() << endl;
}