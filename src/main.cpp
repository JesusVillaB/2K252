#include <iostream>
#include <Iluminacion/Foco.hpp>
#include <Iluminacion/Serie.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
        Foco foco1;
        foco1.Encender();
        cout << foco1.MostrarEstado() << endl;
        foco1.Apagar();
        cout << foco1.MostrarEstado() << endl;

        Serie serie1;
        serie1.EncenderSerie();
        cout << serie1.MostrarEstadoSerie() << endl;
        serie1.ApagarSerie();
        cout << serie1.MostrarEstadoSerie() << endl;
    return 0;
}