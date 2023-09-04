#include "../../includes./my.h"

void my_matrix_swaprow(my_matrix_t *A, uint32_t const a, \
    uint32_t const b, my_matrix_t *result)
{
    if (a >= A->m || b >= A->m) return;

    my_matrix_copy(A, result);
    for (uint32_t i = 0; i < result->n; i++)
        swap(&(result->arr[a][i]), &(result->arr[b][i]));
}

void my_matrix_swaprow_2(my_matrix_t *A, uint32_t const a, \
    uint32_t const b)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_swaprow(&cpy, a, b, A);
    MAT_FREE(cpy);
}
