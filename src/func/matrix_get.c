#include "../../includes/my.h"


double *my_matrix_getrow(my_matrix_t *A, uint32_t i)
{
    return A->arr[i];
}

void my_matrix_getcolumn(my_matrix_t *A, uint32_t n, double result[])
{
    for (uint32_t i = 0; i < A->m; i++)
        result[i] = A->arr[i][n];
}

void my_matrix_getsubmatrix(my_matrix_t *A, uint32_t const m, \
    uint32_t const n, my_matrix_t *result)
{
    uint32_t i2 = 0;

    my_matrix_create(A->m - 1, A->n - 1, 1, result);
    for (uint32_t i = 0; i < A->m; i++) {
        if (i == m) continue;
        uint32_t j2 = 0;
        uint32_t j = 0;
        for (; j < A->n && j < n; j++) {
            result->arr[i2][j2] = A->arr[i][j];
            j2++;
        }
        j++;
        for (; j < A->n; j++) {
            result->arr[i2][j2] = A->arr[i][j];
            j2++;
        }
        i2++;
    }
}
