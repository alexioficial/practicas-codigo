#include <iostream>

using namespace std;

int main()
{
    int n = 10000, numeros[n], contador = 0, suma = 0, promedio = 0;
    for (int i = 0; i < n; i++)
    {
        cout << ">>> ";
        cin >> numeros[i];
        contador++;

        if (numeros[i] > 0)
        {
            suma += numeros[i];
        }
        
        if (numeros[i] == 0)
        {
            break;
        }
    }
    
    for (int i = 0; i < contador; i++)
    {
        cout << "Numero " << i+1 << ": " << numeros[i] << endl;
    }
    cout << "\nSu suma es: " << suma << endl;
    cout << "Su promedio es: " << suma / contador << endl;
    return 0;
}