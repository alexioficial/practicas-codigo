#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    for (int i = 0; i <= numero; i++)
    {
        cout << numero << " ^ " << i << " = " << pow(numero, i) << endl;
    }
    getch();
    return 0;
}