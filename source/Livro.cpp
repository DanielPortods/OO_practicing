#include "Livro.h"
#include <string>

#include <iostream>
using namespace std;

Livro::Livro()
{

}

Livro::Livro(unsigned int codigo, string titulo, string editora, unsigned int paginas, string isbn)
: Impressa(codigo, titulo, editora, paginas)
{
	this->setIsbn(isbn);
}

Livro::~Livro()
{

}

void Livro::setIsbn(string isbn)
{
	this->isbn = isbn;
}

string Livro::getIsbn()
{
	return this->isbn;
}

void Livro::showInfo()
{
	cout << "\n\nLivro: ";
	cout << "\n codigo(" << this->getCodigo() << ") ";
	cout << "\n titulo(" << this->getTitulo() << ") ";
	cout << "\n editora(" << this->getEditora() << ") ";
	cout << "\n paginas(" << this->getPaginas() << ") ";
	cout << "\n isbn(" << this->getIsbn() << ") ";
}