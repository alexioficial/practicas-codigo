#include <stdio.h>

int main()
{
    // Para definir una variable se sigue esta estructura (<tipo de dato> <nombre de la variable> = <valor>)
    char C = 'y';             // 1 byte  0 ... 255
    int a = 20;               // 2 bytes -32768 ... 32767
    short e = -1;             // 2 bytes -128 ... 127
    unsigned int u = 25;      // 2 bytes 0 ... 65535
    long l = 5932;            // 4 bytes -2147483648 ... 2147483647
    float f = 72.534;         // 4 bytes
    double d = 12323.1348;    // 8 bytes

    return 0;
}