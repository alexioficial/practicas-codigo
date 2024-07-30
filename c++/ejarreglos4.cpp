#include <iostream>

using namespace std;

int main()
{
    char letras1[] = {'a', 'b', 'c', 'd'};
    char letras2[] = {'e', 'f', 'g', 'h', 'i'};
    char res[9];
    int i = 0;
    for (i; i < 4; i++)
    {
        res[i] = letras1[i];
    }
    for (int j = 0; j < 5; j++)
    {
        res[i] = letras2[j];
    }
    for (char k : res)
    {
        cout << k;
    }
    return 0;
}