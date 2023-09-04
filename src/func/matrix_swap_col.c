#include "../../includes./my.h"

void my_matrix_swapcol(my_matrix_t *A, uint32_t const a, \
    uint32_t const b, my_matrix_t *result)
{
    if (a >= A->n || b >= A->n) return;

    my_matrix_copy(A, result);
    for (uint32_t i = 0; i < result->m; i++)
        swap(&(A->arr[i][a]), &(A->arr[i][b]));
}

void my_matrix_swapcol_2(my_matrix_t *A, uint32_t const a, \
    uint32_t const b)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_swapcol(&cpy, a, b, A);
    MAT_FREE(cpy);
}
