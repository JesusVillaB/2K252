#pragma once
#include <Figuras/Figura.hpp>

class Cuadrado : public Figura
{
    private:
        float lado;
    public:
        Cuadrado(float l) : lado(l) {}
        ~Cuadrado() {}
        float LeerArea() override 
        {
            return lado*lado;
        }
        float LeerPerimetro() override 
        {
            return 4*lado;
        }

};
