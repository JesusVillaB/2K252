#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <thread>
#include <chrono>
#include <Animacion/Dibujo.hpp>
#include <Animacion/GestorDibujos.hpp>

int main() 
{
    auto screen = Screen::Create(
      Dimension::Fixed(150),
      Dimension::Fixed(30));
    const vector<u32string> arbol1 = {
        U"       X            ",
        U"      XXX           ",
        U"     XXXXX          ",
        U"    XXXXXXX   X     ",
        U"   XXXXXXXXX XXX    ",
        U"  XXXXXXXXXXXXXXX   ",
        U"       X   XXXXXXX  ",
        U"       X      X     ",
        U" ****************   "
    };
    const vector<u32string> casa_campaña1 = {                      
        U"      ______               ",
        U"     /     /\\             ",
        U"    /     /  \\            ",
        U"   /_____/----\\_    (     ",
        U"  "     "           ).     ",
        U" _ ___           o (:') o  ",
        U"(@))_))         o ~/~~\~ o ",
        U"                 o  o  o   ",
                              
    };
    const vector<u32string> rana1= {
        U"           _       ",
        U" .'_`--.___   __   ",
        U"( 'o`   - .`.'_ )  ",
        U" `-._      `_`.//_ ",
        U"   '/\\    ( .'// )",
        U"  ,__//`---'`-'_// ",
        U"   //-'        '// "
};
    const vector<u32string> rana2= {                  
        U"       _           ",
        U"   __   ___.--'_`. ",
        U"  ( _`.'. -   'o` )",
        U"  _\\.'_'      _.-'",
        U" ( \\`. )    //\`  ",
        U"  \\_`-'`---'\\__, ",
        U"  \\`        `-\\  ",
    };
    const vector<u32string> nube1 = {
        U"   __   _   ",
        U" _(  )_( )_ ",
        U"(_   _    _)",
        U"  (_) (__)  "       
    };
    const vector<u32string> luna1= {
        U"    _..._    ",
        U"  .:::::::.  ",
        U" ::::::::::: ",
        U" ::::::::::: ",
        U" `:::::::::' ",
        U"   `':::'`   "
    };
    const vector<u32string> estrella1 = {
        U"    .    ",
        U"   ' '.  ",
        U" -  *  - ",
        U"   . .'  ",
        U"    '    "
    };
    const vector<u32string> buho1 = {
        U" /\\/\\",
        U"((ovo))",
        U"():::()",
        U"  VVV  "
    };
    const vector<u32string> pasto1 = {
      U"_\\|/__|_\\|/____\\|/_"                
    };
    // Crear gestor de dibujos y agregar elementos
    GestorDibujos gestor;
    gestor.Agregar(Dibujo(100,2, luna1, Color(127,201,195)));       // luna blanco
    gestor.Agregar(Dibujo(3,2, nube1, Color::GrayLight));          //nube gris claro
    gestor.Agregar(Dibujo(50,3, nube1, Color::GrayDark));          //nube gris oscuro
    gestor.Agregar(Dibujo(20,6, nube1, Color::GrayLight));          //nube gris claro
    gestor.Agregar(Dibujo(70,2, nube1, Color(61,66,74)));          //nube gris oscuro
    gestor.Agregar(Dibujo(35,4, estrella1, Color::Blue));          //estrella azul
    gestor.Agregar(Dibujo(15,2, estrella1, Color::Cyan));          //estrella cyan
    gestor.Agregar(Dibujo(80,5, estrella1, Color(89,37,161)));          //estrella morado
    gestor.Agregar(Dibujo(10,20, casa_campaña1, Color(0,0,0))); // casa de campaña negra
    gestor.Agregar(Dibujo(5,10, arbol1, Color::Green));       // árbol verde
    gestor.Agregar(Dibujo(20,12, arbol1, Color::Green));      // árbol verde
    gestor.Agregar(Dibujo(55,8, buho1, Color(75,45,21)));       // Lechuza
    gestor.Agregar(Dibujo(0,28, pasto1, Color(45,140,63)));       // pasto verde oscuro
    gestor.Agregar(Dibujo(40,25, pasto1, Color(45,140,63)));       // pasto verde oscuro
    gestor.Agregar(Dibujo(60,27, pasto1, Color(45,140,63)));       // pasto verde oscuro
    gestor.Agregar(Dibujo(80,20,rana1, Color::GreenLight));       // rana verde claro
    gestor.Agregar(Dibujo(90,15,rana2, Color(52,92,58)));       // rana verde oscuro
    int frames = 120;
    for (int frame = 0; frame < frames; ++frame)
    {
        // Limpia la pantalla
        screen.Clear();

        // Animación: mover vacas y tractor (índices actualizados)
        gestor.dibujos[11].x = 55 + (frame % 20);  // buho se mueve en horizontal
        gestor.dibujos[1].x = 3 + (frame % 14);  // nube1 se mueve en horizontal
        gestor.dibujos[3].x = 20 + (frame % 14);  // nube3 se mueve en horizontal
        gestor.dibujos[2].x = 50 + (frame % 14);  // nube2 se mueve en horizontal
        gestor.dibujos[4].x = 70 + (frame % 14);  // nube4 se mueve en horizontal
        gestor.dibujos[15].x = 80 - (frame % 10);  // rana1 se mueve en horizontal
        gestor.dibujos[16].x = 90 + (frame % 10);
        gestor.DibujarTodos(screen);

        // Imprime la pantalla y resetea el cursor
        cout << screen.ToString();
        cout << screen.ResetPosition();
        cout << flush;

        this_thread::sleep_for(chrono::milliseconds(120));
    }
    return 0;
}