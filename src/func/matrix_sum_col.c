#include "../../includes/my.h"

void my_matrix_sumcol(my_matrix_t *A, my_matrix_t *result)
{
    double sum;

    my_matrix_create(1, A->n, 1, result);
    for (uint32_t i = 0; i < result->n; i++) {
        sum = 0;
        for (uint32_t j = 0; j < A->m; j++)
            sum += A->arr[j][i];
        result->arr[0][i] = sum;
    }
}

void my_matrix_sumcol_2(my_matrix_t *A)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_sumcol(&cpy, A);
    MAT_FREE(cpy);
}

