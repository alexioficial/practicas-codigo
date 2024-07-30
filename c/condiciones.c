#include <stdio.h>

int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf("%d", &edad);
    if (edad >= 18)
    {
        printf("Eres mayor de edad");
    }
    else if (edad == 17)
    {
        printf("Casi eres mayor de edad");
    }
    else
    {
        printf("Eres menor de edad");
    }

    return 0;
}