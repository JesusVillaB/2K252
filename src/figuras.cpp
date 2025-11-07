#include <iostream>
#include <Figuras/Figura.hpp>
#include <Figuras/Cuadrado.hpp>
#include <Figuras/Circulo.hpp>
#include <Figuras/Triangulo.hpp>

using namespace std;

int main()
{
    Figura* f;

    cout << "Figura: Cuadrado" << endl;
    f = new Cuadrado(20.3535);
    cout << "-Area: " << f->LeerArea() << endl;
    cout << "-Perimetro: " << f->LeerPerimetro() << endl;
    
    cout << "Figura: Circulo" << endl;
    f= new Circulo(2.5);
    cout << "-Area: " << f->LeerArea() << endl;
    cout << "-Perimetro: " << f->LeerPerimetro() << endl;

    cout << "Figura: Triangulo" << endl;
    f= new Triangulo(3.5,4.8);
    cout << "-Area: " << f->LeerArea() << endl;
    cout << "-Perimetro: " << f->LeerPerimetro() << endl;
    return 0;
}