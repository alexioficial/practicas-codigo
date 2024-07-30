#include <iostream>

using namespace std;

int main()
{
    int cantidad, mayor = 0;
    cout << "Cuantos elementos tendra tu lista? ";
    cin >> cantidad;
    int numeros[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese numero: ";
        cin >> numeros[i];
    }
    for (int j : numeros)
    {
        if (j > mayor)
        {
            mayor = j;
        }
    }
    cout << "El numero mayor de tu lista es: " << mayor;
    return 0;
}