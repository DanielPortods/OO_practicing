#include "Dvd.h"
#include <string>

#include <iostream>
using namespace std;

Dvd::Dvd()
{

}

Dvd::Dvd(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao, string legendas, unsigned int regiao)
: Digital(codigo, titulo, discos, duracao)
{

	this->setLegendas(legendas);
	this->setRegiao(regiao);
}

Dvd::~Dvd()
{

}

void Dvd::setLegendas(string legendas)
{
	this->legendas = legendas;
}

string Dvd::getLegendas()
{
	return legendas;
}

void Dvd::setRegiao(unsigned int regiao)
{
	this->regiao = regiao;
}

unsigned int Dvd::getRegiao()
{
	return regiao;
}



void Dvd::showInfo()
{
	cout << "\n\nDvd: ";
	cout << "\n codigo(" << this->getCodigo() << ") ";
	cout << "\n titulo(" << this->getTitulo() << ") ";
	cout << "\n discos(" << this->getDiscos() << ") ";
	cout << "\n duracao(" << this->getDuracao() << ") ";
	cout << "\n legendas(" << this->getLegendas() << ") ";
	cout << "\n regiao(" << this->getRegiao() << ") ";
}
