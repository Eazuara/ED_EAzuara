#include <iostream>
#include "Figura.h"
#include "Circulo.h"

using namespace std;

int main(){
	
	Figura testF = Figura(5, 2);
	Circulo test = Circulo(testF, 3);
	cout << test.getarea();
	cout << test.getperimetro();
	cout << test.getRadio();
	cin.get();
}