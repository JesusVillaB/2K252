#pragma once
#include <Memorias/Numero.hpp>

class Vector
{
    private:
    Numero x;
    Numero y;
    public:
    Numero LeerX() {return x;}
    Vector(){x=0; y=0;}
};