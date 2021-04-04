#include <stdio.h>

int main()
{
    int variable = 29;
    int *pVariable;
    pVariable = &variable;

    printf("Contenido del puntero: %d\n", *pVariable);
    printf("Direccion de memoria almacenada por el puntero: %u\n", pVariable);
    printf("Direccion de memoria de la variable: %u\n", &variable);
    printf("Direccion de memoria del puntero: %u\n", &pVariable);
    printf("Tamanio de memoria utilizado por la variable: %d", sizeof(variable));

    getchar();

    return 0;
}