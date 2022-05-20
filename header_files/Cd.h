#pragma once
#include "Digital.h"

class Cd : public Digital
{
private:
    unsigned int faixas;

public:
    Cd();
    Cd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas);
    ~Cd();

    void setFaixas(unsigned int faixas);
    unsigned int getFaixas();

    void showInfo();
};