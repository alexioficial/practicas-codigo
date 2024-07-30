#include <iostream>

using namespace std;

int pow(int base, int exponente)
{
    int result = 1;
    for (int i = 1; i <= exponente; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    cout << pow(8, 10);
    return 0;
}