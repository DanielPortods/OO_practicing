#include <cstring>
#include "Midia.h"

#include <iostream>
using namespace std;

Midia::Midia(){
    
}

Midia::Midia(unsigned int codigo, char titulo[]){
    this->setCodigo(codigo);
    this->setTitulo(titulo);
    instancias++;
}

Midia::~Midia(){
}

void Midia::setCodigo(unsigned int codigo){
    this->codigo=codigo;
}

unsigned int Midia::getCodigo(){
    return this->codigo;
}

void Midia::setTitulo(char titulo[]){
    strcpy(this->titulo, titulo);
}

char *Midia::getTitulo(){
    return this->titulo;
}

int Midia::getInstancias(){
    return instancias;
}

int Midia::instancias = 0;