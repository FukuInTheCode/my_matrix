#include "../../includes/my.h"

void my_matrix_concatcol(my_matrix *result, my_matrix *A, my_matrix *B)
{
    unsigned int i;
    unsigned int j;

    if (A->m != B->m) return;
    my_matrix_create(A->m, A->n + B->n, 1, result);

    for (i = 0; i < result->m; i++) {
        for (j = 0; j < A->n; j++) {
            result->arr[i][j] = A->arr[i][j];
        }
        for (j = A->n; j < result->n; j++) {
            result->arr[i][j] = B->arr[i][j - A->n];
        }
    }
}
