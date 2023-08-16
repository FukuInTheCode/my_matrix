#include "../../includes/my.h"

void my_matrix_sumrow(my_matrix *A, my_matrix *result)
{
    unsigned int i;
    unsigned int j;
    double sum;

    my_matrix_create(A->m, 1, 1, result);
    for (i = 0; i < result->m; i++) {
        sum = 0;
        for (j = 0; j < A->n; j++)
            sum += A->arr[i][j];
        result->arr[i][0] = sum;
    }
}
