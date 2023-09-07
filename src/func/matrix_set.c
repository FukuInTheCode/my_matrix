#include "../../includes/my.h"

void my_matrix_set(my_matrix_t *A, uint32_t const m,\
                        uint32_t const n, double const  x)
{
    if (n > A->n || m > A->m) return;

    A->arr[m][n] = x;
}

void my_matrix_setall(my_matrix_t *A, double const  x)
{
    for (uint32_t i = 0; i < A->m; ++i) {
        for (uint32_t j = 0; j < A->n; ++j)
            my_matrix_set(A, i, j, x);
    }
}
