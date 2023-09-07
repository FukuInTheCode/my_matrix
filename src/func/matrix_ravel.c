#include "../../includes/my.h"

void my_matrix_ravel(my_matrix_t *A, my_matrix_t *result)
{
    my_matrix_create(1, A->m * A->n, 1, result);
    MAT_PRINT_DIM((*result));
    for (uint32_t i = 0; i < A->m; ++i) {
        for (uint32_t j = 0; j < A->n; ++j)
            my_matrix_set(result, 0, i * A->n + j, A->arr[i][j]);
    }
}

void my_matrix_ravel_2(my_matrix_t *A)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_ravel(&cpy, A);
    MAT_FREE(cpy);
}
