#include <iostream>

using namespace std;

int main(void)
{
    cout << "int:" << sizeof(int) << endl;
    cout << "char:" << sizeof(char) << endl;
    cout << "float:" << sizeof(float) << endl;
    cout << "double:" << sizeof(double) << endl;
    cout << "long:" << sizeof(long) << endl;
    cout << "bool:" << sizeof(bool) << endl;
    

    cout << "\n" << endl;
    bool A;
    cout << "direccion A:" << &A << endl;
    cout << malloc(4) << endl;
    cout << malloc(sizeof(int)) << endl;

    cout << "\n" << endl;
    void* direccion = malloc(4);
    cout << direccion << endl;
    cout << &direccion << endl;
    cout << sizeof(direccion) << endl;

    cout << "\n" << endl;
    int lista[4];
    cout << lista << endl;
    lista[0]=1;
    lista[1]=2;
    lista[2]=3;
    lista[3]=4;

    cout << "\n" << endl;
    cout << lista[0] << endl;
    cout << &lista[0] << endl;
    cout << lista+2 << endl;
    cout << *(lista+2) << endl;
    
    return 0;
}