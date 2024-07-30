#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {9, 3, 6, 5, 1, 8};
    for (int i : numeros)
    {
        cout << i << endl;
    }
    return 0;
}