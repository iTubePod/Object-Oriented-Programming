#include "Circulo.h"

int main()
{
	Figura f;

	cout << "Cordenadas del centro de la figura" << f.getCentroX() << "," << f.getCentroY() << endl;

	Circulo c(10,12,8);

	cout << "Cordenadas del centro del circulo" << c.getCentroX() << "," << c.getCentroY() << endl;

	cout << "radio es: " << c.getRadio() << endl;

	cout << "El area es: " << c.area() <<endl;
	return 0;
}