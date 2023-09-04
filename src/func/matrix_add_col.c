#include "../../includes/my.h"

void my_matrix_addcol(my_matrix_t *A, const unsigned int n, my_matrix_t *result)
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
        for (i = 0; i < result->m; i++) {
            result->arr[i][j] = A->arr[i2][j2];
            i2++;
        }
        j2++;
    }
}

void my_matrix_addcol_2(my_matrix_t *A, const uint32_t n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_addcol(&cpy, n, A);
    MAT_FREE(cpy);
}
