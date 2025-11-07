#include <ftxui/screen/screen.hpp>  // for ftxui
#include <ftxui/dom/elements.hpp>  // for text, hbox, vbox, Element, operator|, border, center, separator, EQUAL, flex
#include <iostream>  // for std::cout
#include <string>  // for std::string
#include <cstring>
#include <thread>
#include <chrono>
using namespace std;
using namespace ftxui;

string vaca =
string("         (__)   \n")+
string("`\\------(oo)   \n")+
string("  ||     (__)   \n")+
string("  ||w--||       \n");

string dragon =                                                                                                                                                           
string("               //|                                           |\               ")+
string("              //||              ^               ^             ||\              ")+
string("             // //__           ||               ||          __// \             ")+
string("            //  /|_  \         | \   /     \   / |         /  _|  \            ")+
string("           //  //  \  \         \  \/ \---/ \/  /         /  /     \           ")+
string("          //  //    |  \         \  \/\   /\/  /         /  |       \          ")+
string("         //  //     \   \__       \ ( 0\ /0 ) /       __/   /        \         ")+
string("        //  //       \     \___    \ \_/|\_/ /    ___/     /\         \        ")+
string("       //  //         \_)      \___ \/-\|/-\/ ___/      (_/\ \      `  \       ")+
string("      //  //           /\__)       \/  oVo  \/       (__/   ` \      `  \      ")+
string("     //  //           /,   \__)    (_/\ _ /\_)    (__/         `      \  \     ")+
string("    //  '           //       \__)  (__V_V__)  (__/                    \  \    ")+
string("   //  '  '        /'           \   |{___}|   /         .              \  \   ")+
string("  //  '  //        /              \/ |{___}| \/\          `              \  \  ")+
string(" //     //        '       .        \/{_____}\/  \          \    `         \  \ ")+
string("      //                ,         /{_______}\   \          \    \         \   ")+
string("                      /         /{___/_\___}\   `          \    `            ");
                                                                             
int main() 
{
    auto screen = Screen::Create(
      Dimension::Full(),
      Dimension::Fixed(10));
    int x = 0;
    int y = 0;
    while(true)
    {
      x++;

      auto &pixel = screen.PixelAt(x, y);
      pixel.bold = true;
      pixel.character = dragon;
      screen.Print();
      screen.Clear();  
      this_thread::sleep_for(chrono::milliseconds(1000));
    }
    
}