#pragma once
#include "Impressa.h"

class Livro : public Impressa
{
private:
    char isbn[20];

public:
    Livro();
    Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[]);
    ~Livro();

    void setIsbn(char isbn[]);
    char *getIsbn();   

    void showInfo();
};