#pragma once
#include "Impressa.h"

class Revista : public Impressa
{
private:
    unsigned int ano;
    unsigned int mes;

public:
    Revista();
    Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes);
    ~Revista();

    void setAno(unsigned int ano);
    unsigned int getAno();

    void setMes(unsigned int mes);
    unsigned int getMes();

    void showInfo();
};