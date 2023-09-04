#include "../../includes/my.h"

void my_matrix_addcol(my_matrix_t *A, uint32_t const n, my_matrix_t *result)
{
    uint32_t j2 = 0;

    if (n > A->n) return;
    my_matrix_create(A->m, A->n + 1, 1, result);
    for (uint32_t j = 0; j < result->n; j++) {
        if (j == n) continue;
        uint32_t i2 = 0;
        for (uint32_t i = 0; i < result->m; i++) {
            result->arr[i][j] = A->arr[i2][j2];
            i2++;
        }
        j2++;
    }
}

void my_matrix_addcol_2(my_matrix_t *A, uint32_t const n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_addcol(&cpy, n, A);
    MAT_FREE(cpy);
}
