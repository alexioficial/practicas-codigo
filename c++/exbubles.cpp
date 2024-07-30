#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero = 82, num, i = 0;
    while (true)
    {
        cout << "Ingresa un numero del 1 - 100: ";
        cin >> num;
        int res = num > numero ? 1 : num < numero ? 2 : 3;
        switch (res)
        {
            case 1: cout << "Tu numero es mayor" << endl; break;
            case 2: cout << "Tu numero es menor" << endl; break;
            default: break;
        }
        if (res == 3)
        {
            break;
        }
        i++;
    }
    cout << "Ganaste! y te tomo " << i << " intentos.";
    getch();
    return 0;
}