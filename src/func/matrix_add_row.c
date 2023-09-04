#include "../../includes/my.h"

void my_matrix_addrow(my_matrix_t *A, uint32_t const m, my_matrix_t *result)
{
    uint32_t i2 = 0;

    if (m > A->m) return;
    my_matrix_create(A->m + 1, A->n, 1, result);

    for (uint32_t i = 0; i < result->m; i++) {
        if (i == m) continue;
        uint32_t j2 = 0;
        for (uint32_t j = 0; j < result->n; j++) {
            result->arr[i][j] = A->arr[i2][j2];
            j2++;
        }
        i2++;
    }
}

void my_matrix_addrow_2(my_matrix_t *A, const uint32_t n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_addrow(&cpy, n, A);
    MAT_FREE(cpy);
}

