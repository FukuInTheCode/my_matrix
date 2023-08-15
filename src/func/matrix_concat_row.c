#include "../../includes/my.h"

void my_matrix_concatrow(my_matrix *result, my_matrix *A, my_matrix *B)
{
    unsigned int i;
    unsigned int j;

    if (A->n != B->n) return;
    my_matrix_create(A->m + B->m, A->n, 1, result);
    for (i = 0; i < result->n; i++) {
        for (j = 0; j < A->m; j++) {
            result->arr[j][i] = A->arr[j][i];
        }
        for (j = A->m; j < result->m; j++) {
            result->arr[j][i] = B->arr[j - A->m][i];
        }
    }
}