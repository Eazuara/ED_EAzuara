#pragma once
class Figura{
public:
	Figura(double, double);
	void setarea(double);
	void setperimetro(double);
	double getarea();
	double getperimetro();
private:
	double area, perimetro;
};