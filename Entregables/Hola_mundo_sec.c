#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int hilos;
    printf("ingrese el numero de hilos: \n");
    scanf("%d", &hilos);
    double start = clock();
    for (int i = 0; i < hilos; i++)
    {
        fprintf(stdout, "Hola mundo %d\n", i);
    }
    double end = clock();
    fprintf(stdout, "Tiempo de ejecucion: %f segundos\n", (end - start)*1000 / CLOCKS_PER_SEC);
    return 0;
}
