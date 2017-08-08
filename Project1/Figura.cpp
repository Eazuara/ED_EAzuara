#include "Figura.h"

Figura::Figura(double area, double perimetro)
{
	this->area = area;
	this->perimetro = perimetro;
}
double Figura::getarea() {
	return this->area;
}
double Figura::getperimetro() {
	return this->perimetro;
}
void Figura::setarea(double area) {
	this->area = area;
}
void Figura::setperimetro(double perimetro) {
	this->perimetro = perimetro;
}