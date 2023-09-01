#include "../../includes/my.h"

void my_matrix_applyfunc(my_matrix_t *A, UnaryFunction func, my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;

    my_matrix_copy(A, result);

    for ( i = 0; i < result->m; i++) {
        for (j = 0; j < result->n; j++) {
            my_matrix_set(result, j, i, func(result->arr[i][j]));
        }
    }
}

void my_matrix_applyfunc_2(my_matrix_t *A, UnaryFunction func)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_applyfunc(&cpy, func, A);
    MAT_FREE(cpy);
}
