#pragma once
#include "I_Exibivel.h"

class Midia : public I_Exibivel
{
private:
    unsigned int codigo;
    char titulo[100];
    static int instancias;

public:
    Midia();
    Midia(unsigned int codigo, char titulo[]);
    ~Midia();

    void setCodigo(unsigned int codigo);
    unsigned int getCodigo();

    void setTitulo(char titulo[]);
    char *getTitulo();

    virtual void showInfo() = 0;

    static int getInstancias();
};