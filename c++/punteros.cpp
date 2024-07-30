#include <iostream>

using namespace std;

int main()
{
    int hola;
    int *adios = &hola; // adios apunta al espacio en memoria de hola
    cout << ">>> ";
    cin >> *adios;
    cout << "El valor de hola es: " << hola; // hola y adios tienen el mismo valor
    return 0;
}