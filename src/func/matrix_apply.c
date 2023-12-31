#include "../../includes/my.h"

void my_matrix_applyfunc(my_matrix_t *A, temp_func func, my_matrix_t *result)
{
    my_matrix_copy(A, result);

    for (uint32_t i = 0; i < result->m; i++) {
        for (uint32_t j = 0; j < result->n; j++) {
            my_matrix_set(result, i, j, func(result->arr[i][j]));
        }
    }
}

void my_matrix_applyfunc_2(my_matrix_t *A, temp_func func)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_applyfunc(&cpy, func, A);
    MAT_FREE(cpy);
}
