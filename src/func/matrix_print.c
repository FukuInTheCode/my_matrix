#include "../../includes/my.h"

static void my_print(my_matrix_t *A)
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
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        my_print(A);
    }
    va_end(args);
}

void my_matrix_print_arr(my_matrix_t ***arr, uint8_t size)
{
    for (uint8_t i = 0; i < size; i++) {
        my_print((*arr)[i]);
    }
}
