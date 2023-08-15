#include "../../includes/my.h"

static void my_print(my_matrix *A)
{
    unsigned int i;
    unsigned int j;

    if (A->m == 0 || A->n == 0) return;
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n;j++)
            printf("%f ", A->arr[i][j]);

        printf("\n");
    }
    printf("\n");
}

void my_matrix_print(const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix *A = va_arg(args, my_matrix *);
        my_print(A);
    }
    va_end(args);
}
