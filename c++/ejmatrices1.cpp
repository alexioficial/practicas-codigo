#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;
    cout << "Numero de filas de tu matriz: ";
    cin >> filas;
    cout << "Numero de columnas de tu matriz: ";
    cin >> columnas;
    int numeros[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Elemento en la fila " << i + 1 << " y columna " << j + 1 << ": ";
            cin >> numeros[i][j];
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j] << endl;
        }
    }
    return 0;
}