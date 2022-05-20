#include <cstring>
#include "Revista.h"

#include <iostream>
using namespace std;

Revista::Revista(){
    
}

Revista::Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes)
:Impressa (codigo, titulo, editora, paginas)
{
    this->setAno(ano);
    this->setMes(mes);
}

Revista::~Revista(){

}

void Revista::setAno(unsigned int ano){
    this->ano=ano;
}

unsigned int Revista::getAno(){
    return this->ano;
}

void Revista::setMes(unsigned int mes){
    this->mes=mes;
}

unsigned int Revista::getMes(){
    return this->mes;
}

void Revista::showInfo(){
    cout << "\nRevista" << endl;
    cout << " Código: " << this->getCodigo() << endl;
    cout << " Título: " << this->getTitulo() << endl;
    cout << " Editora: " << this->getEditora() << endl;
    cout << " Páginas: " << this->getPaginas() << endl;
    cout << " Mês: " << this->getMes() << endl;
    cout << " Ano: " << this->getAno() << endl;
}