#include <iostream>
using namespace std;

#include "SistemaLocadora.h"

int main()
{

	SistemaLocadora *sl = new SistemaLocadora();
	sl->iniciar();

	cout << endl;
	return 0;
}
