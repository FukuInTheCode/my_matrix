#include "../../includes/my.h"

void my_matrix_setcol(my_matrix_t *A, uint32_t const n, double const x)
{
    if (n >= A->n) return;
    for (uint32_t i = 0; i < A->m; i++)
        A->arr[i][n] = x;
}
