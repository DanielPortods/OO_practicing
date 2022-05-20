#pragma once
#include "Digital.h"

class Dvd : public Digital
{
private:
    unsigned int regiao;
    char legendas[50];

public:
    Dvd();
    Dvd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[]);
    ~Dvd();

    void setRegiao(unsigned int regiao);
    unsigned int getRegiao();

    void setLegendas(char legendas[]);
    char *getLegendas();

    void showInfo();
};