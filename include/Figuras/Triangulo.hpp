#pragma once
#include <Figuras/Figura.hpp>

class Triangulo : public Figura
{
    private:
        float base;
        float altura;
    public:
        Triangulo(float b, float a) : base(b), altura(a) {}
        ~Triangulo() {}
        float LeerArea() override 
        {
            return (base*altura)/2;
        }
        float LeerPerimetro() override 
        {
            // Suponiendo un triangulo equilatero
            return 3*base;
        }

};