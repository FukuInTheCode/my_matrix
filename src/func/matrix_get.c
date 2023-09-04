#include "../../includes/my.h"


double *my_matrix_getrow(my_matrix_t *A, unsigned int i)
{
    return A->arr[i];
}

void my_matrix_getcolumn(my_matrix_t *A, uint32_t n, double result[])
{
    for (uint32_t i = 0; i < A->m; i++)
        result[i] = A->arr[i][n];
}

void my_matrix_getsubmatrix(my_matrix_t *A, const unsigned int m, \
    const unsigned int n, my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;
    unsigned int i2 = 0;
    unsigned int j2;

    my_matrix_create(A->m - 1, A->n - 1, 1, result);
    for (i = 0; i < A->m; i++) {
        if (i == m) continue;
        j2 = 0;
        for (j = 0; j < A->n && j < n; j++) {
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
