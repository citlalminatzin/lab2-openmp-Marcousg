#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _OPENMP
#include <omp.h>
#endif // _OPENMP

int main()
{
    int nb_taches = 0;
    double start = clock();
    #ifdef _OPENMP
    #pragma omp parallel
    {
        int rang = omp_get_thread_num();
        fprintf(stdout, "Hola mundo %d\n", rang);
        nb_taches = omp_get_num_threads();
    }
    #endif // _OPENMP fin de la parte en paralelo
    double end = clock();
    fprintf(stdout, "Tiempo de ejecucion: %f milisegundos\n", (end - start)*1000 / CLOCKS_PER_SEC);
    fprintf(stdout, "Numero de procesadores: %d\n", nb_taches);
    return EXIT_SUCCESS;
}