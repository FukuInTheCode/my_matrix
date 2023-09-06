#include "../../includes/my.h"

void my_matrix_set(my_matrix_t *A, uint32_t const m,\
                        uint32_t const n, double const  x)
{
    if (n > A->n || m > A->m) return;

    A->arr[m][n] = x;
}
