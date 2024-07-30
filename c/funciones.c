#include <stdio.h>

float operacion(int n1, int n2, char op)
{
    switch (op)
    {
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        return n1 / n2;    
    default:
        break;
    }
}

int main()
{
    int a;
    int b;
    printf("Ingrese primer numero: \n");
    scanf("%d", a);
    printf("Ingrese segundo numero: \n");
    scanf("%d", b);
    printf("%d", operacion(a, b, '+'));
    return 0;
}