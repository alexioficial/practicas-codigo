#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int limite, result = 1;
    cout << "Ingrese limite: ";
    cin >> limite;
    for (int i = 1; i <= limite; i++)
    {
        result *= i;
    }
    cout << "El resultado de 1 x 2 x ... x " << limite << " es: " << result << endl;
    getch();
    return 0;
}
