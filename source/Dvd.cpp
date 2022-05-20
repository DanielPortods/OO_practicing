#include <cstring>
#include "Dvd.h"

#include <iostream>
using namespace std;

Dvd::Dvd(){
}

Dvd::Dvd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[]):Digital(codigo, titulo, discos, duracao){
    this->setRegiao(regiao);
    this->setLegendas(legendas);
}

Dvd::~Dvd(){

}

void Dvd::setRegiao(unsigned int regiao){
    this->regiao=regiao;
}

unsigned int Dvd::getRegiao(){
    return this->regiao;
}

void Dvd::setLegendas(char legendas[]){
    strcpy(this->legendas, legendas);
}

char *Dvd::getLegendas(){
    return this->legendas;
}

void Dvd::showInfo(){
    cout << "\nDVD:" << endl;
    cout << " Código: " << this->getCodigo() << endl;
    cout << " Título: " << this->getTitulo() << endl;
    cout << " Discos: " << this->getDiscos() << endl;
    cout << " Região: " << this->getRegiao() << endl;
    cout << " Legendas: " << this->getLegendas() << endl;
}