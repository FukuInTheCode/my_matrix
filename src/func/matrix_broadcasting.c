#include "../../includes/my.h"

void my_matrix_broadcasting(my_matrix_t *A, uint32_t m, \
    uint32_t n, my_matrix_t *result)
{
    if (A->m > 1 && m > A->m) m = A->m;
    if (A->n > 1 && n > A->n) n = A->n;
    my_matrix_create(m, n, 1, result);
    if (A->m == 1 && A->n == 1) {
        my_matrix_addscalar_2(result, A->arr[0][0]);
        return;
    }
    if (A->m == 1 && A->n != 1)
        for (uint32_t i = 0; i < A->n; i++)
            my_matrix_setcol(result, i, A->arr[0][i]);
    if (A->n == 1 && A->m != 1)
        for (uint32_t i = 0; i < A->m; i++)
            my_matrix_setrow(result, i, A->arr[i][0]);
    if (A->m != 1 && A->n != 1)
        my_matrix_copy(A, result);
}

void my_matrix_broadcasting_2(my_matrix_t *A, unsigned int m, \
    unsigned int n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_broadcasting(&cpy, m, n, A);
    MAT_FREE(cpy);
}
