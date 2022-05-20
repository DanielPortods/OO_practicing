#pragma once
#include "Midia.h"

class Digital : public Midia 
{
private:
    unsigned int discos; 
    unsigned int duracao;

public:
    Digital();
    Digital(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao);
    ~Digital();

    void setDiscos(unsigned int discos);
    unsigned int getDiscos();

    void setDuracao(unsigned int duracao);
    unsigned int getDuracao();

    virtual void showInfo() = 0;
};