#include <stdio.h>
#include <omp.h>

int main() {
    int n = 100;
    int sum = 0;

    double thread_times[omp_get_max_threads()];

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        double start = omp_get_wtime();

        #pragma omp for reduction(+:sum)
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        double end = omp_get_wtime();
        thread_times[tid] = end - start;
        printf("Thread %d took %f seconds\n", tid, thread_times[tid]);
    }

    printf("Hello, World!\n");
    printf("Sum of first %d numbers (parallel with OpenMP): %d\n", n, sum);
    return 0;
}
