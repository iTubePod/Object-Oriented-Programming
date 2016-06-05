#ifndef FIG
#define FIG
#define ARRAY_SIZE 2

#include <iostream>

using namespace std;

class Figura {
  protected:
    int centroX;
    int centroY;
	int f[ARRAY_SIZE];

  public:
    Figura();

    Figura(int x, int y);

    int getCentroX();
    void setCentroX(int x);

    int getCentroY();
    void setCentroY(int y);

    virtual float area();

};

#endif 
