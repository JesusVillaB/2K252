#pragma once
#include <Iluminacion/Foco.hpp>
#include <iostream>
#include <string>

class Serie: public Foco
{
    private:
        Foco focos[10];
    public:
    void EncenderSerie()
    {
        for (int i = 0; i < 10; i++)
        {
            focos[i].Encender();
        }
    }

    void ApagarSerie()
    {
        for (int i = 0; i < 10; i++)
        {
            focos[i].Apagar();
        }
    }

    unsigned int MostrarEstadoSerie()
    {
        for (int i = 0; i < 10; i++)
        {
            return focos[i].MostrarEstado();
        }
    }   
};