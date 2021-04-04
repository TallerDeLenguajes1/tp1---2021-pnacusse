#include <stdio.h>

int devuelveCuadrado(int x);
void calculaCuadrado(int x);
void mostrarDetalles(int x);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{   
    int num, cuadrado, num2, num3, num4, num5, num6, num7;

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    cuadrado = devuelveCuadrado(num);
    printf("El cuadrado del numero ingresado es: %d\n", cuadrado);

    printf("Ingrese otro numero: ");
    scanf("%d", &num2);
    calculaCuadrado(num2);

    printf("Ingrese un numero mas: ");
    scanf("%d", &num3);
    mostrarDetalles(num3);

    printf("Valor a invertir 1: ");
    scanf("%d", &num4);
    printf("Valor a invertir 2: ");
    scanf("%d", &num5);
    invertir(&num4, &num5);
    printf("Valor nuevo 1: %d\n", num4);
    printf("Valor nuevo 2: %d\n", num5);

    printf("Valor a comparar 1: ");
    scanf("%d", &num6);
    printf("Valor a comparar 2: ");
    scanf("%d", &num7);
    orden(&num6, &num7);
    printf("Valor menor: %d\t Valor Mayor: %d", num6, num7);

    getchar();
    return 0;
}

int devuelveCuadrado(int x)
{
    x = x*x;
    return x;
}

void calculaCuadrado(int x)
{
    x = x*x;
    printf("El cuadrado del numero ingresado es: %d\n", x);
}

void mostrarDetalles(int x)
{
    printf("Direccion de memoria de la variable: %u\n", &x);
    printf("Contenido de la variable: %d\n", x);
}

void invertir(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}

void orden(int *a, int *b)
{
    int aux;
    if(*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;        
    }else if (*a == *b){
        printf("los valores ingresados son iguales\n");
    }
}