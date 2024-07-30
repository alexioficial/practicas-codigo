#include <iostream>

using namespace std;

int main()
{
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
    cout << "Ingrese primer numero: "; cin >> n1;
    cout << "\nIngrese segundo numero: "; cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    cout << "\nLa suma es: " << suma
         << "\nLa resta es: " << resta
         << "\nLa multiplicacion es: " << multiplicacion
         << "\nLa division es: " << division;
    return 0;
}