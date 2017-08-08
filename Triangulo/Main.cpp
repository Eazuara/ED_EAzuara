#include <iostream>
#include "Figura.h"
#include "Triangulo.h"

using namespace std;

int main()
{
	Figura testF = Figura(6, 7);
	Triangulo test = Triangulo(3.1, 2.2, 2.5, 5, 8.3, 7, testF);
	cout << test.getBase();
	cout << test.getAltura();
	cout << test.getHipo();
	cout << test.getSen();
	cout << test.getCsen();
	cout << test.getTan();
	cout << test.getarea();
	cout << test.getperimetro();
	cin.get();
}