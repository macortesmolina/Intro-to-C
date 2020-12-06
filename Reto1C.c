/*Reto 1: Escribe un programa en C que emita el resultado de un cálculo, por ejemplo, una suma, una resta*/
#include <stdio.h>
#include <stdlib.h>

/*Solucion creando las variables
/*int main ()
{
    int a = 1;
    int b = 2;
    int z;
    z = a + b;
    printf("hola Mundo, el resultado es: %d \n",z);
    return 0;
}*/
/*Solucion solicitando ingresar el valor de las cariables*/
int main()
{
    int a,b,z;

    printf("hola, ingresa el primer numero\n");
    scanf("%d",&a);
    printf("hola, ingresa el segundo numero\n");
    scanf("%d",&b);
    z = a + b;
    printf("\n hola Mundo, el resultado es, %d", z);
    return 0;
}