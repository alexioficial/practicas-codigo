#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero, i = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    while (i <= 12)
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }
    getch();
    return 0;
}