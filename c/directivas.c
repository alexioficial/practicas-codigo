#include <stdio.h>
#define CUBO(a) a *a *a // Esto es una macro (funcionan mas rapido que las funciones en
                        // tiempo de ejecucion.
#define PI 3.14159      // Esto es una variable constante.

int main()
{
    int suma = PI + 3;
    int a = 3;
    printf("El cubo de la variable a es: %i\n", CUBO(a));
    printf("%i\n", suma);
    return 0;
}