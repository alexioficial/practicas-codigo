#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int limite, result = 0;
    cout << "Ingrese limite de suma: ";
    cin >> limite;
    for (int i = 1; i <= limite; i++)
    {
        result += i;
    }
    cout << "La suma de 1 + 2 + ... + " << limite << " es: " << result << endl;
    getch();
    return 0;
}
