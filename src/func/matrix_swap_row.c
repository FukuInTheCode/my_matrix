#include "../../includes./my.h"

void my_matrix_swaprow(my_matrix_t *A, const unsigned int a, \
    const unsigned int b, my_matrix_t *result)
{
    if (a >= A->m || b >= A->m) return;

    unsigned int i;

    my_matrix_copy(A, result);
    for (i = 0; i < result->n; i++)
        swap(&(result->arr[a][i]), &(result->arr[b][i]));
}

void my_matrix_swaprow_2(my_matrix_t *A, const unsigned int a, \
    const unsigned int b)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_swaprow(&cpy, a, b, A);
    MAT_FREE(cpy);
}
