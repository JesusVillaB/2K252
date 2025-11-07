#pragma once
#include <Figuras/Figura.hpp>

class Circulo : public Figura
{
    private:
        float radio;
    public:
        Circulo(float r) : radio(r) {}
        ~Circulo() {}
        float LeerArea() override 
        {
            return 3.1416*radio*radio;
        }
        float LeerPerimetro() override 
        {
            return 2*3.1416*radio;
        }

};