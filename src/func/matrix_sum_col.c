#include "../../includes/my.h"

void my_matrix_sumcol(my_matrix_t *A, my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;
    double sum;

    my_matrix_create(1, A->n, 1, result);
    for (i = 0; i < result->n; i++) {
        sum = 0;
        for (j = 0; j < A->m; j++)
            sum += A->arr[j][i];
        result->arr[0][i] = sum;
    }
}
