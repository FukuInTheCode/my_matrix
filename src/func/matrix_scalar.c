#include "../../includes/my.h"

void my_matrix_multiplybyscalar(my_matrix *A, double scalar, \
    my_matrix *result)
{
    unsigned int i;
    unsigned int j;

    my_matrix_copy(A, result);
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            result->arr[i][j] *= scalar;
    }
}

void my_matrix_addscalar(my_matrix *A, double scalar, my_matrix *result)
{
    unsigned int i;
    unsigned int j;

    my_matrix_copy(A, result);
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            result->arr[i][j] += scalar;
    }
}