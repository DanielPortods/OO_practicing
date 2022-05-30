#pragma once

#include "Livro.h"
#include "Revista.h"
#include "Cd.h"
#include "Dvd.h"

#include <vector>
using namespace std;

class SistemaLocadora
{
private:
	vector<Cd> cds;
	vector<Dvd> dvds;
	vector<Livro> livros;
	vector<Revista> revistas;

public:
	SistemaLocadora();

	void iniciar();
		void cadastrarMidia();
			void cadastrarCd();
			void cadastrarDvd();
			void cadastrarRevista();
			void cadastrarLivro();
		void visualizarMidias();
			void visualizarCds();
			void visualizarDvds();
			void visualizarRevistas();
			void visualizarLivros();
};

