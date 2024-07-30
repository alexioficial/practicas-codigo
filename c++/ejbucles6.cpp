#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    int limite, result = 1;
    cout << "Ingrese limite: ";
    cin >> limite;
    for (int i = 1; i <= limite; i++)
    {
        result += pow(2, i);
    }
    cout << "El resultado de 2 ^ 1 + 2 ^ 2 + ... + 2 ^ " << limite << " es: " << result << endl;
    getch();
    return 0;
}
