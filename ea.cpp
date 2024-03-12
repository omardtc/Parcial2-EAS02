#include <iostream>
#include "ea.h"
using namespace std;




/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

int main () {

    Square s(5);
    cout << s.getArea() << endl; // 25
    Rectangle r(5,5);
    cout << r.getArea() << endl; // 25
    Triangle t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}

Figura::Figura()
{
    b = 0;
    h = 0;
    a = 0;
}

Figura::Figura(int b, int h)
{
    this->b = b;
    this->h = h;
    a = 0;
}

void Figura::setArea(float a)
{
    this->a = a;
}

float Figura::getArea()
{
    return this->a;
}