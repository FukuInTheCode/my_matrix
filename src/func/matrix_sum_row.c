#include "../../includes/my.h"

void my_matrix_sumrow(my_matrix_t *A, my_matrix_t *result)
{
    double sum;

    my_matrix_create(A->m, 1, 1, result);
    for (uint32_t i = 0; i < result->m; i++) {
        sum = 0;
        for (uint32_t j = 0; j < A->n; j++)
            sum += A->arr[i][j];
        result->arr[i][0] = sum;
    }
}

void my_matrix_sumrow_2(my_matrix_t *A)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_sumrow(&cpy, A);
    MAT_FREE(cpy);
}
