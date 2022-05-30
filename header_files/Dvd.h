#include "Digital.h"

class Dvd : public Digital
{
public:
	Dvd();
	Dvd(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao, string legendas, unsigned int regiao);
	~Dvd();
	
	void setLegendas(string legendas);
	string getLegendas();

	void setRegiao(unsigned int regiao);
	unsigned int getRegiao();

	void showInfo();

private:
	string legendas;
	unsigned int regiao;
};
