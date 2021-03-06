#pragma once

#include "Impressa.h"

class Livro : public Impressa
{
public:
	Livro();
	Livro(unsigned int codigo, string titulo, string editora, unsigned int paginas, string isbn);
	~Livro();

	void setIsbn(string isbn);
	string getIsbn();

	void showInfo();

private:
	string isbn;
};
