#pragma once
#include "Midia.h"

class Impressa : public Midia
{
private:
    char editora[60];
    unsigned int paginas;

public:
    Impressa();
    Impressa(unsigned int codigo, char titulo[], char editora[], unsigned int paginas);
    ~Impressa();

    void setEditora(char editora[]);
    char *getEditora();

    void setPaginas(unsigned int paginas);
    unsigned int getPaginas();

    virtual void showInfo() = 0;
};