#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Numero del 1 - 5: ";
    cin >> numero;
    switch (numero)
    {
        case 1: cout << "Tu numero es 1"; break;
        case 2: cout << "Tu numero es 2"; break;
        case 3: cout << "Tu numero es 3"; break;
        case 4: cout << "Tu numero es 4"; break;
        case 5: cout << "Tu numero es 5"; break;
        default: cout << "No esta en el rango"; break;
    }
    return 0;
}