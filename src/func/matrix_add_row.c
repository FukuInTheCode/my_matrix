#include "../../includes/my.h"

void my_matrix_addrow(my_matrix_t *A, const unsigned int m, my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;
    unsigned int i2 = 0;
    unsigned int j2;

    if (m > A->m) return;
    my_matrix_create(A->m + 1, A->n, 1, result);

    for (i = 0; i < result->m; i++) {
        if (i == m) continue;
        j2 = 0;
        for (j = 0; j < result->n; j++) {
            result->arr[i][j] = A->arr[i2][j2];
            j2++;
        }
        i2++;
    }
}
