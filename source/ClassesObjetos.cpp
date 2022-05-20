#include <iostream>
using namespace std;

#include <cstring>

#include "Livro.h"
#include "Revista.h"
#include "Cd.h"
#include "Dvd.h"

int main()
{
    cout << "\n\nObjetos criados: " << Midia::getInstancias();
	cout << "\nHeranca e Polimorfismo: Exercicio" << endl;

	// Variaveis diversas para utilizacao no codigo

	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];
	unsigned int ano;
	unsigned int mes;
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
	char legendas[50];
	unsigned int regiao;

	// Criando um objeto do tipo LIVRO

	codigo = 1;
	strcpy(titulo, "Senhor dos Aneis");
	strcpy(editora, "SoftBooks");
	paginas = 642;
	strcpy(isbn, "456-456-456-8");

	Livro *livro;
	livro = new Livro(codigo, titulo, editora, paginas, isbn);
	livro->showInfo();

	// Criando um objeto do tipo REVISTA

	codigo = 2;
	strcpy(titulo, "Code Magazine");
	strcpy(editora, "SoftMagazine");
	paginas = 75;
	ano = 2000;
	mes = 1;

	Revista *revista;
	revista = new Revista(codigo, titulo, editora, paginas, ano, mes);
	revista->showInfo();

	// Criando um objeto do tipo CD

	codigo = 3;
	strcpy(titulo, "Weapons And Roses");
	discos = 2;
	duracao = 116;
	faixas = 32;

	Cd *cd;
	cd = new Cd(codigo, titulo, discos, duracao, faixas);
	cd->showInfo();

	// Criando um objeto do tipo DVD

	codigo = 4;
	strcpy(titulo, "A Origem");
	discos = 1;
	duracao = 145;
	strcpy(legendas, "PT, FR");
	regiao = 1;

	Dvd *dvd;
	dvd = new Dvd(codigo, titulo, discos, duracao, regiao, legendas);
	dvd->showInfo();


	// Comando For

	Midia *variasMidias[4];
	variasMidias[0] = livro;
	variasMidias[1] = revista;
	variasMidias[2] = cd;
	variasMidias[3] = dvd;

	cout << "\n\nComando For:";

	for (int i = 0; i < 4; i++)
	{
		variasMidias[i]->showInfo();
	}

	cout << "\n\nObjetos criados: " << Midia::getInstancias();

	// Encerrando o aplicativo

	delete livro;
	delete revista;
	delete cd;
	delete dvd;

	cout << endl;
	return 0;
}