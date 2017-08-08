#pragma once
class Figura
{
public:

	Figura();

	Figura(double, double);
	void setarea(double);
	void setperimetro(double);
	double getarea();
	double getperimetro();
public:
	double area, perimetro;
};
