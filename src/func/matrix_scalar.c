#include "../../includes/my.h"

void my_matrix_multiplybyscalar(my_matrix_t *A, double scalar, \
    my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;

    my_matrix_copy(A, result);
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            result->arr[i][j] *= scalar;
    }
}

void my_matrix_addscalar(my_matrix_t *A, double scalar, my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;

    my_matrix_copy(A, result);
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            result->arr[i][j] += scalar;
    }
}

void my_matrix_addscalar_2(my_matrix_t *A, double scalar)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_addscalar(&cpy, scalar, A);
    MAT_FREE(cpy);
}

void my_matrix_multiplybyscalar_2(my_matrix_t *A, double scalar)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_multiplybyscalar(&cpy, scalar, A);
    MAT_FREE(cpy);
}
