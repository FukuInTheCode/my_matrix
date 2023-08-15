#include "../../includes/my.h"

void my_matrix_addcol(my_matrix *A, const unsigned int n, my_matrix *result)
{
    unsigned int i;
    unsigned int j;
    unsigned int i2;
    unsigned int j2 = 0;

    if (n > A->n) return;
    my_matrix_create(A->m, A->n + 1, 1, result);
    for (j = 0; j < result->n; j++) {
        if (j == n) continue;
        i2 = 0;
        for (j = 0; j < result->n; j++) {
            result->arr[i][j] = A->arr[i2][j2];
            j2++;
        }
        i2++;
    }
}
