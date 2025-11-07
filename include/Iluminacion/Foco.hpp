#pragma once
#include <Iluminacion/EstadoFoco.hpp>

class Foco
{
private:
    EstadoFoco estado;
public:
   // Foco(/* args */); //Constructor
    //~Foco(); //Destructor
    void Encender()
    {
        estado='*';
    }
    void Apagar()
    {
        estado='o';
    }
    EstadoFoco MostrarEstado()
    {
        return estado;
    }
};

