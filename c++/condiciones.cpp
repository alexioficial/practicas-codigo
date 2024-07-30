#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << ">>> ";
    cin >> numero;
    if (numero > 0)
    {
        cout << "Tu numero es positivo";
    }
    else if (numero < 0)
    {
        cout << "Tu numero es negativo";
    }
    else
    {
        cout << "Tu numero es 0";
    }
    return 0;
}