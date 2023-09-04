#include "../../includes/my.h"

void my_matrix_concatrow(my_matrix_t *result, my_matrix_t *A, my_matrix_t *B)
{
    if (A->n != B->n) return;
    my_matrix_create(A->m + B->m, A->n, 1, result);
    for (uint32_t i = 0; i < result->n; i++) {
        for (uint32_t j = 0; j < A->m; j++) {
            result->arr[j][i] = A->arr[j][i];
        }
        for (uint32_t j = A->m; j < result->m; j++) {
            result->arr[j][i] = B->arr[j - A->m][i];
        }
    }
}
