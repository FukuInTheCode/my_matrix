#include "../../includes./my.h"

void my_matrix_swapcol(my_matrix_t *A, const unsigned int a, \
    const unsigned int b, my_matrix_t *result)
{
    if (a >= A->n || b >= A->n) return;

    unsigned int i;

    my_matrix_copy(A, result);
    for (i = 0; i < result->m; i++)
        swap(&(A->arr[i][a]), &(A->arr[i][b]));
}

void my_matrix_swapcol_2(my_matrix_t *A, const unsigned int a, \
    const unsigned int b)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_swapcol(&cpy, a, b, A);
    MAT_FREE(cpy);
}
