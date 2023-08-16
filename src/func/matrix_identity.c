#include "../../includes/my.h"

static void identity(my_matrix_t *A)
{
    unsigned int i, j;

    if (A->m != A->n) return;
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            my_matrix_set(A, j, i, 0);
    }
    for (i = 0; i < A->m; i++)
        my_matrix_set(A, i, i, 1);
}

void my_matrix_identity(const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        identity(A);
    }
    va_end(args);
}
