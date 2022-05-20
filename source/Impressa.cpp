#include <cstring>
#include "Impressa.h"

#include <iostream>
using namespace std;

Impressa::Impressa(){
}

Impressa::Impressa(unsigned int codigo, char titulo[], char editora[], unsigned int paginas)
: Midia(codigo, titulo)
{
    this->setEditora(editora);
    this->setPaginas(paginas);
}

Impressa::~Impressa(){

}

void Impressa::setEditora(char editora[]){
    strcpy(this->editora, editora);
}

char *Impressa::getEditora(){
    return this->editora;
}

void Impressa::setPaginas(unsigned int paginas){
    this->paginas=paginas;
}

unsigned int Impressa::getPaginas(){
    return this->paginas;
}