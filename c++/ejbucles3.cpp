#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int suma = 0, numero;
    while (true)
    {
        cout << "Ingrese numero: ";
        cin >> numero;
        if (numero >= 20 && numero <= 30 || numero == 0)
        {
            break;
        }
        else
        {
            suma += numero;
        }
    }
    cout << suma;
    getch();
    return 0;
}