#include "../../includes/my.h"


double *my_matrix_getrow(my_matrix *A, unsigned int i)
{
    return A->arr[i];
}

void my_matrix_getcolumn(my_matrix *A, unsigned int n, double result[])
{
    unsigned int i;
    for (i = 0; i < A->m; i++)
        result[i] = A->arr[i][n];
}

void my_matrix_getsubmatrix(my_matrix *A, const unsigned int m, \
    const unsigned int n, my_matrix *result)
{
    unsigned int i;
    unsigned int j;
    unsigned int i2 = 0;
    unsigned int j2 = 0;

    my_matrix_create(A->m - 1, A->n - 1, 1, result);
    for (i2 = i = 0; i < A->m; i++) {
        if (i == m) continue;
        for (j2 = j = 0; j < A->n; j == n ? j = j+2 : j++) {
            result->arr[i2][j2] = A->arr[i][j];
            j2++;
        }
        i2++;
    }
}
