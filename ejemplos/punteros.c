#include<stdio.h>

int main()
{
    int *pint=0;
    int *pint2=0;
    printf("Direccion de memoria de pint: %p\n", pint);
    printf("Direccion de memoria de pint2: %p\n", pint2);

    *pint=10;
    *pint2=25;

    printf("Valor de pint: %d\n", *pint);
    printf("Valor de pint2: %d\n", *pint2);

    pint2=pint;

    printf("Atencion acabo de igualar los dos punteros\n");
    printf("direccion de memoria de pint: %p\n", pint);
    printf("direccion de memoria de pint2: %p\n", pint2);
    printf("valor de pint: %d\n", *pint);
    printf("valor de pint2: %d\n", *pint2);
    return 0;
}
