#include "../../includes/my.h"

void my_matrix_setrow(my_matrix_t *A, uint32_t const m, double const x)
{
    if (m >= A->m) return;
    for (uint32_t i = 0; i < A->n; i++)
        A->arr[m][i] = x;
}
