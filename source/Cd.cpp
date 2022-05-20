#include <cstring>
#include "Cd.h"

#include <iostream>
using namespace std;

Cd::Cd(){
}

Cd::Cd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas):Digital(codigo, titulo, discos, duracao){
    this->setFaixas(faixas);    
}

Cd::~Cd(){

}

void Cd::setFaixas(unsigned int faixas){
    this->faixas=faixas;
}

unsigned int Cd::getFaixas(){
    return this->faixas;
}

void Cd::showInfo(){
    cout << "\nCD:" << endl;
    cout << " Código: " << this->getCodigo() << endl;
    cout << " Título: " << this->getTitulo() << endl;
    cout << " Discos: " << this->getDiscos() << endl;
    cout << " Faixas: " << this->getFaixas() << endl;
}