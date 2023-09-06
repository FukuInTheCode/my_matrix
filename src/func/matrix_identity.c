#include "../../includes/my.h"

static void identity(my_matrix_t *A)
{
    if (A->m != A->n) return;
    for (uint32_t i = 0; i < A->m; i++) {
        for (uint32_t j = 0; j < A->n; j++)
            my_matrix_set(A, i, j, 0);
    }
    for (uint32_t i = 0; i < A->m; i++)
        my_matrix_set(A, i, i, 1);
}

void my_matrix_identity(uint32_t const count, ...)
{
    va_list args;
    va_start(args, count);
    for (uint32_t i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        identity(A);
    }
    va_end(args);
}
