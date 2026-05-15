#include <stdio.h>
#include <omp.h> 

int main() {
    #pragma omp parallel
    {
        int id = omp_get_thread_num();

        if (id % 2 == 0) {
            printf("Thread %d: Saya Thread Genap\n", id);
        } else {
            printf("Thread %d: Saya Thread Ganjil\n", id);
        }
    } 

    return 0;
}